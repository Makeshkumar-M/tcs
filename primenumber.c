#include<stdio.h>
int main()
{
    int n,i,m,flag;
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    {
        if(i%2==0)

        {
            printf(" Not prime");
            flag=1;
            break;
            
        }
        if(flag==0){
            printf("prime");
        }return 0;
    }

    for (i=0;i<=n;i++)
    {

    }
}