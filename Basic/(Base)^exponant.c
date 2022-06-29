#include<stdio.h>
#include<conio.h>

int main()
{
  int b=0,e=0,temp=0,res=0;
  
  printf("\n Enter a Base = ");
  scanf("%d",&b);
  
  printf("\n Enter an exponent = ");
  scanf("%d",&e);
  
 if(b==1)
 {
   res=1;
 }
 else
 {
   for(res=1,temp=e;temp>0;temp--)
   {
     res = res * b;
   }
 }
 printf("\n Result of %d^%d = %d",b,e,res);
 
 printf("\n\n ===============********===============\n\n");
 
 getch();
 return 0;

}
n 0;

}