#include <stdio.h>
#include <stdlib.h>
int num1, num2;

int main()
{
    printf("Give me the first number\n");
    scanf("%d", &num1);
    printf("Give me the second number\n");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("After switching the two numbers we find that the first number is %d and the second number is %d\n", num1, num2);
    system("pause");
    return 0;
}