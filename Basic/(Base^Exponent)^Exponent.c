#include<stdio.h>
#include<conio.h>
int main()
{
  int b=0,e1=0,e2=0,emul=0,temp=0,res=0;
  
  printf("\n Enter a Base = ");
  scanf("%d",&b);
  
  printf("\n Enter a first exponent  = ");
  scanf("%d",&e1);
  
  printf("\n Enter an second exponent = ");
  scanf("%d",&e2);
  
   emul=e1*e2;
 
 if(b==1)
 {
   res=1;
 }
 else
 {
   for(res=1,temp=emul;temp>0;temp--)
   {
     res = res * b;
   }
 }
 printf("\n Result of (%d^%d)^%d = %d",b,e1,e2,res);
 
 printf("\n\n ===============********===============\n\n");
 
 getch();
 return 0;


 
 
}

 
 
}
