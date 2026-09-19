#include <stdio.h>

// Function Declaration
void addition();

int main()
{
    addition();  // Function Call

    return 0;
}

// Function Definition
void addition()
{
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Addition = %d", sum);
}
