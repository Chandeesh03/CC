#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number to generate n even numbers:");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+2){
        printf("%d ",i);
    }
    return 0;
}