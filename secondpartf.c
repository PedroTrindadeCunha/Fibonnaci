#include <stdio.h>

int main(void)
{
    int N[10];
    N[0] = 1;
    N[1] = 1;

    for(int i = 2; i < 10; i++)
    {
        N[i] = N[i - 1] + N[i - 2];
        // This is the formula of fibonnaci's sequence
        // F(n + 2) = F(n + 1) + F(n) This is the current formula
        // Ex: F(0) = 1; F(1) = 1;
        // F(0 + 2) = F(0 + 1) + F(0); and so on.
    }
    for(int i = 0; i < 10; i++)
    {
        printf("%i\n", N[i]);
    }

}
