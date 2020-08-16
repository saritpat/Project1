
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    double R, A;
    scanf("%lf", &R);
    double PI = 22 / 7.0;
    A = PI * R * R;
    if (R >= 0)
    {
        printf("%lf", A);
    }
    else
    {
        printf("Error");
    }
    return 0;
}