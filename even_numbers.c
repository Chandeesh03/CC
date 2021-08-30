#include <stdio.h>

int main()
{
    int n,i;
    printf("Enter the number to generate even numbers until n:");
    scanf("%d",&n);
    for(i=0;i<n;i=i+2){
        printf("\n%d",i);
    }
    return 0;
}
