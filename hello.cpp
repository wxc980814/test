#include <stdio.h>

int main()
{
    int q[6] = {1,2,3,4,5,6};
    int *p = q;
    printf("%d\n",*p);
    printf("%d\n",*++p);
    return 0;////最新
}