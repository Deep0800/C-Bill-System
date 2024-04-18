#include <stdio.h>

int main() {
    int meal_choice, item_choice, quantity, total_bill = 0;
    char add_more;

    // Display meal choices and get user input
    printf("\t\tWelcome to My Restaurant\n\n");
    printf("Choose your meal plan :\n\n");
    printf("1. Breakfast\n2. Lunch\n3. Dinner\n\n");
    scanf("%d", &meal_choice);
    printf("\n");

    do {
        // Display item choices based on meal choice
        printf("\tChoose your order :\n\n");
        switch (meal_choice) {
            case 1:
                printf("1. Poha\t\t50/-\n");
                printf("2. Aloo Paratha\t60/-\n");
                printf("3. Dosa\t\t40/-\n");
                printf("4. Sandwich\t80/-\n");
                break;
            case 2:
                printf("1. Tandoori Roti\t15/-\n");
                printf("2. Kadhai Paneer\t140/-\n");
                printf("3. Dal Chawal\t\t100/-\n");
                printf("4. Salad/Curd\t\t50/-\n");
                break;
            case 3:
                printf("1. Veg Thali\t\t280/-\n");
                printf("2. Mini Thali\t\t150/-\n");
                printf("3. Salad/Papad\t\t45/-\n");
                printf("4. Veg Biryani\t\t90/-\n");
                break;
            default:
                printf("Invalid choice.\n");
                return 1;
        }

        // Take order and calculate total bill
        printf("\nEnter item number: ");
        scanf("%d", &item_choice);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        switch (meal_choice) {
            case 1:
                switch (item_choice) {
                    case 1: total_bill += 50 * quantity; break;
                    case 2: total_bill += 60 * quantity; break;
                    case 3: total_bill += 40 * quantity; break;
                    case 4: total_bill += 80 * quantity; break;
                    default: printf("Invalid choice.\n"); break;
                }
                break;
            case 2:
                switch (item_choice) {
                    case 1: total_bill += 15 * quantity; break;
                    case 2: total_bill += 140 * quantity; break;
                    case 3: total_bill += 100 * quantity; break;
                    case 4: total_bill += 50 * quantity; break;
                    default: printf("Invalid choice.\n"); break;
                }
                break;
            case 3:
                switch (item_choice) {
                    case 1: total_bill += 280 * quantity; break;
                    case 2: total_bill += 150 * quantity; break;
                    case 3: total_bill += 45 * quantity; break;
                    case 4: total_bill += 90 * quantity; break;
                    default: printf("Invalid choice.\n"); break;
                }
                break;
        }

        // Ask if the user wants to add more orders
        printf("\nDo you want to add more orders? (Y/N): ");
        scanf(" %c", &add_more);

    } while (add_more == 'Y' || add_more == 'y');

    // Display bill
    printf("\nGenerating your BILL....\n\n");
    printf("Total Bill: %d/-\n", total_bill);

    return 0;
}
