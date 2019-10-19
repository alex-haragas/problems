#include <stdio.h>

int main() {
    int n,x,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&x);
        sum=sum^x;
    }
    printf("The numbered entered only once is %d.",sum);
    return 0;
}