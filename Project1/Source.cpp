
#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    float a, b, d;
    scanf("%f %f", &a, &b);
    d = a - b;
    if (d < 0)
    {
        d = d * -1;
        printf("%.2f", d);
    }
    else
    {
        printf("%.2f", d);
    }

    return 0;
}