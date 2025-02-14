#include <stdio.h>

int main(void)
{
    // change the F[one]++
    int F[10];
    F[0] = 1;
    F[1] = 1;
    F[2] = 2;
    F[3] = F[2] + F[1];
    F[4] = F[3] + F[2];
    F[5] = F[4] + F[3];
    F[6] = F[5] + F[4];
    F[7] = F[6] + F[5];
    F[8] = F[7] + F[6];
    F[9] = F[8] + F[7];


    for(int i = 0; i < 10; i++)
    {
        printf("%i\n", F[i]);
    }

}
