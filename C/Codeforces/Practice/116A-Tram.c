#include<stdio.h>
int main()
{
    int a[1001],b[1001],n,i,max=0,temp=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
        temp = (temp-a[i])+b[i];
        if(temp>max)
            max = temp;
    }

    printf("%d\n",max);

    return 0;
}
