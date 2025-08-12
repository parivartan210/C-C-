#include <math.h>
#include <stdio.h>

int main()
{
    int choice;
    double a, b;

    do
    {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Power\n6. SquareRoot\n0. Exit\n");
        printf("Choose an operation: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2lf\n", a + b);
            break;
        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2lf\n", a - b);
            break;
        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2lf\n", a * b);
            break;
        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &a, &b);
            if (b != 0)
                printf("Result: %.2lf\n", a / b);
            else
                printf("Cannot divide by zero.\n");
            break;
        case 5:
            printf("Enter number and their power: ");
            scanf("%lf %lf", &a, &b);
            printf("Result: %.2lf\n", pow(a, b));
            break;
        case 6:
            printf("Enter number: ");
            scanf("%lf", &a);
            if (a >= 0)
                printf("Result: %.2lf\n", sqrt(a));
            else
                printf("Cannot take square root of a negative number.\n");
            break;
        case 0:
            printf("Goodbye!\n");
            break;
        default:
            printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}
