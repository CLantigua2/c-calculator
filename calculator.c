#include <stdio.h>
#include <conio.h>

int main()
{
    int n, num1, num2, result;
    printf("\nwhat operation do you want to do?\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    scanf("&d", &n);
    printf("please enter a number\n");
    scanf("&d", &num1);
    printf("please enter a second number\n");
    scanf("&d", &num2);
    switch (n)
    {
    case 1:
        result += num1 + num2;
        print("addition of two numbers is %d", result);
        break;
    case 2:
        result += num1 - num2;
        print("subtraction of two numbers is %d", result);
        break;
    case 3:
        result += num1 * num2;
        print("multiplication of two numbers is %d", result);
        break;
    case 4:
        result += num1 * num2;
        print("division of two numbers is %d", result);
        break;

    default:
        printf("wrong input");
        break;
    }
    getch();
    return 0;
}