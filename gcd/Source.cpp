#include<stdio.h>
int main() {
    int input_1, input_2, i = 1, gcd;
    printf("Enter first number : ");
    scanf("%d", &input_1);
    printf("Enter second number : ");
    scanf("%d", &input_2);
    while (i <= input_1 && i <= input_2)
    {
        if (input_1 % i == 0 && input_2 % i == 0) {
            gcd = i;
        }
        i++;
    }
    printf("Greatest common divisor = %d", gcd);
    return 0;
}
