// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int x,y,i,gcd;
    printf("enter two numbers:");
    scanf("%d%d",&x,&y);
    for(i=1;i<=x&&i<=y;i++)
{
    if(x%i==0 && y%i==0)
    gcd=i;   
}
    printf("GCD is %d",gcd);
    return 0;
}
