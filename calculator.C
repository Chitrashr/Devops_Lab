#include <stdio.h>

int main() 
{
    char op;
    double num1, num2, result;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);
.........
        printf("Enter an operator (+, -, *, /): ");
        scanf(" %c", &op);  // Space before %c to consume any leading whitespace

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (op) 
        {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Error: Invalid operator.\n");
                break;
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);  // Space before %c to handle whitespace

    } while (choice == 'y' || choice == 'Y');

    printf("Thank you for using the calculator!\n");
    return 0;
}
