#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%d", &n);
   long long int i = 1, f = 1;
   while(i <= n)
   {
       f *= i;
       i++;
       }
       printf("%lld", f);
    return 0;
}
