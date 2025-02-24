#include <stdio.h>
#include<stdlib.h>
void main ()
{
    int n;
    int *s;
    printf("Enter Number of elements.. ");
    scanf("%d", &n);
   s = (int*)calloc(n, sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf("Enter %dth numbers.. ",i+1);
        scanf("%d",s+i);
    }
for (int i=0;i<n;i++)
{
        printf(" %dth number is %d\n", i+1,*(s+i));
}
free(s);

    getchar();
}
