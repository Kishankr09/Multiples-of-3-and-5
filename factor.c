#include<stdio.h>
#include<conio.h>
int main()
{
    int n=1000,i,s=0;
    for(i=1; i<n; i++)
    {
        if(i%3==0 && i%15!=0)
            s=s+i;
        else if(i%5==0 && i%15!=0)
            s=s+i;
        else if(i%15==0)
            s=s+i;
    }
    printf("sum=%d",s);
    getch();
}
