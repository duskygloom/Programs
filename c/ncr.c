#include <stdio.h>

int main()
{
    int n, r, i;
    float c = 1.0f;
    printf("n r: ");
    scanf("%d %d", &n, &r);
    for (i=0; i<r; ++i) {
        c *= (float)n - i;
        c /= (float)r - i;
    }
    printf("nCr = %.2f\n", c);
    return 0;
}
