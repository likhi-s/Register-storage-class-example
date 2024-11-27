#include <stdio.h>

int main()
{
   register int x =10;
    {
        register int x =20;
        printf("%d\n",x);
    }
    printf("%d\n",x);
}

