#include <stdio.h>

void main() 
{
   int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
   if((a>b) && (a>c))
   {
      printf("%d",a);
   }
   else
   {
      if(b>c)
      {
         printf("%d",b);
          }
       else
       {
          printf("%d",c); 
        }     
   }
   getch();
}