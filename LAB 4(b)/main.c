#include <stdio.h>
#include <stdlib.h>

void TOH(int n,char source,char dest,char temp)
{
    if (n>1)
    {
        TOH(n-1,source,temp,dest);
        printf("\n Move %d disc from %c to %c",n,source,dest);
        TOH(n-1,temp,dest,source);
    }
    else
        printf("\n Move %d disc from %c to %c",n,source,dest);
}
int main()
{
    int n;
    printf("\n Read number of discs:");
    scanf("%d",&n);
    TOH(n,'S','D','T');
    return 0;
}
