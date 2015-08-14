#include <stdio.h>

int main(void)
{
int a[]={1,3,2,7,4,9,8};
int sum=0;
int i=0;
int l=sizeof(a)/sizeof(a[1]);

for(;i<l;i++)
{
    if(a[i]%2)
    {sum=sum+a[i];}
}
printf("La suma de impares es %d",sum);
return 0;
}
