#include <stdio.h>

int main()
{

    int choice;

    while (1)
    {
        printf("\n--simple calculator--\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            sub();
            break;
        case 3:
            mul();
            break;
        case 4:
            divi();
            break;
        case 5:
            printf("\nExiting...\n");
            return 0;
        default:
            printf("\nInvalid choice. Please choose a valid option.\n");
        }
    }
}

void add()
{

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Addition of %d and %d is = %d\n", a, b, a + b);
}

void sub()
{

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("subraction of %d and %d is = %d\n", a, b, a - b);
}

void mul()
{

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Multiplication of %d and %d is = %d\n", a, b, a * b);
}

void divi()
{

    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("\nError! Division by zero is not allowed.\n");
    }
    else
    {
        printf("\nDivision of %d and %d is = %d\n", a, b, (float)(a / b));
    }
}
