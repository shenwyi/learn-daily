#include<stdio.h>
int main()
{
    int i=0,k=0,num=0;
    scanf("%d %d",&i,&k);
    i=num;
    k=i;
    num=k;
    printf("%d %d",i,k);
}