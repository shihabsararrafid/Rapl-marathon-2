#include <stdio.h>
// metal mixing
int main()
{

    int A, B;
    scanf("%d %d", &A, &B);
    if (A > 0 && B == 0)
    {
        printf("Gold\n");
    }
    else if (B > 0 && A == 0)
    {
        printf("Silver\n");
    }
    if (A > 0 && B > 0)
    {
        printf("Alloy\n");
    }

    return 0;
}