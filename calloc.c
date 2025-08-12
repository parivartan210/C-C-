#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *p, sum = 0;
    printf("Enter the number of elements :");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int));

    if (p == NULL)
    {
        printf("sorry ! Memory not allocate.");
        exit(0);
    }

    printf("Enter the number of arry :");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }

    printf("sum = %d", sum);
    free(p);

    return 0;
}