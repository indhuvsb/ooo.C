#include <stdio.h>
#include<conio.h>
int main()
{
int n,r;
printf("Please enter n,k\n");
scanf("%i %i",&n,&k);
r=n%k;
printf("Integer division: %i divided by %i is %i\n",n);
printf("The remainder when %i is divided by %i is %i\n",n,r);
return 0;
}
