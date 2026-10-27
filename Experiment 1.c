#include <stdio.h>

int main() {
    float balance, amount;
    int choice;

    
    printf("Enter current account balance: ");
    scanf("%f", &balance);

  
    printf("Enter choice (1 for balance inquiry, 2 for cash withdrawal, 3 for cash deposit): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            
            printf("Current Balance: %.2f\n", balance);
            break;

        case 2:
            
            printf("Enter withdrawal amount: ");
            scanf("%f", &amount);

            if (amount <= balance) {
                balance -= amount;
                printf("Transaction successful\n");
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            
            printf("Enter deposit amount: ");
            scanf("%f", &amount);

            balance += amount;
            printf("Deposit successful\n");
            printf("Updated balance: %.2f\n", balance);
            break;

        default:
            
            printf("Invalid option\n");
            break;
    }

    return 0;
}
