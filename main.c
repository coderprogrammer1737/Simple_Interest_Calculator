/* Calculation of simple interest */
#include <stdio.h>
int main()
{
    int p, si, n, a;
    float r, fsi;
    printf("Enter the principle, rate of interest, period to calculate simple interest.\n");
    scanf("%d %d %f", &p, &n, &r );
    si = p * n * r;
    fsi = si / 100;
    a = fsi + p;
    printf("Principle: %d\n", p);
    printf("Number of Years: %d\n", n);
    printf("Rate of Interest: %f\n", r);
    printf("Simple Interest: %f\n", fsi);
    printf("Amount: %d", a);
    return 0;
}