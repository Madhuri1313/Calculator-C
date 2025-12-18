#include <stdio.h>

int main() {
    float a, b;
    int choice, choice1;

    do {
        printf("\nEnter 1st number: ");
        scanf("%f", &a);

        printf("Enter 2nd number: ");
        scanf("%f", &b);

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                   printf("Addition of %.2f and %.2f is %.2f", a, b, a + b);
                   break;

            case 2:
                   printf("Subtraction of %.2f and %.2f is %.2f", a, b, a - b);
                   break;

            case 3:
                   printf("Multiplication of %.2f and %.2f is %.2f", a, b, a * b);
                   break;

            case 4:
                if (b == 0)
                {
                         printf("Division by zero is not possible!");
                }
                 else
                {
                    printf("Division of %.2f and %.2f is %.2f", a, b, a / b);
                }
                     break;

              default:
                      printf("Enter a valid choice!");
        }

        printf("\nDo you want another chance? Yes(1) / No(0): ");
        scanf("%d", &choice1);

    } while (choice1 == 1);

    return 0;
}