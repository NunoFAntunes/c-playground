#include <stdio.h>

int main() {
    /* testing code */
    printf("0! = %i\n", factorial(0));
    printf("1! = %i\n", factorial(1));
    printf("3! = %i\n", factorial(3));
    printf("5! = %i\n", factorial(5));
}

unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1)
    {
        /* Terminating case */
        return y;
    }
    else if (x > 1)
    {
        /* Recursive step */
        return y + multiply(x-1, y);
    }

    /* Catch scenario when x is zero */
    return 0;
}

unsigned int factorial(unsigned int num){
    if (num == 1)
    {
        /* Terminating case */
        return num;
    }
    else if (x > 1)
    {
        /* Recursive step */
        return num * factorial(num-1);
    }

    /* Catch scenario when x is zero */
    return 1;
}