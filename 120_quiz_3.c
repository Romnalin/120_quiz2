#include <stdio.h>

    int reverse(int num)
    {
        int rev,temp,sum=0;
        temp=num;

        while(temp>0)
        {
            rev=temp%10;
            sum=(sum*10)+rev;
            temp=temp/10;
        }
    if(sum==num)
        return 1;
    else
         return 0;
    }


    int main()
      {
          int start,end,j,count=0;

          scanf("%d",&end);

          for(j=1;j<=end;j++)
          {
              if(reverse(j))
              {
                  count++;
              }
          }
          printf("%d",count);

          return 0 ;
      }









