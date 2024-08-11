#include<stdio.h>
#include<string.h>
int main()
{
    int x,a[x],i;
    scanf("%d",&x);
    printf("Enter the size of array:%d\n",x);
    printf("Enter elements:%d\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",a[x]);
    }
    int rev[x],n=0;
    for(i=x-i;i>=0;i--)
    {
        rev[n]=a[x];
        n++;
    }
    printf("Reverse the array: \n");
    for(i=0;i<x;i++)
    {
        printf("%d",rev[n]);
    }
    return 0;
}


