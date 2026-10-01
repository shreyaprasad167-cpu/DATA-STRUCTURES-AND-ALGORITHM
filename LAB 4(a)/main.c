#include <stdio.h>
#include <stdlib.h>

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b,ans;
    printf("\n Read two numbers:\n");
    scanf("%d%d",&a,&b);
    ans=gcd(a,b);
    printf("\n GCD of %d and %d is %d\n",a,b,ans);
    return 0;
}
