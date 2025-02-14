#include <stdio.h>
#include<math.h>

int main()
{
    int x,y,power;
    printf("enter base=");
    scanf("%d",&x);
   printf("enter power=");
   scanf("%d",&y);
   power=pow(x,y);
   printf("%d^%d=%d",x,y,power);

}