#include <stdio.h>
int main()
{
    int num,cube;
    scanf("%d",&num);

    cube=num*num*num;

    if(num%cube==0)
    {
        printf("%d",num);
        num++;
    }
    else
    {
        printf("Not Cube Free");
    }
}
