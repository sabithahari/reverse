#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",reversedigit(n));
    return 0;
}
 int reversedigit(int n)
 {
     int r=0;
    while(n>0)
    {
        r=r*10+n%10;
        n/=10;
        
    }
return r;
}
