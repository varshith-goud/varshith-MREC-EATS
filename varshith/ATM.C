#include <stdio.h>

int
main ()
{
  int bal=1000000,d,op,w,p=2004,n=3;
  printf("\nwlc to vrsth bank of india\n");
  pin:
  printf("\n enter ur pin\n");
  scanf("%d",&p);
 
  if(p==2004)
 
  atm:
  {
     
      printf("\n****atm****\n1.withdraw\n2.deposit\n3.check balance\n4.exit\n");
      scanf("%d",&op);
      if(op==1)
      {
          printf("enter money to be withdrawn");
          scanf("%d",&w);
          if(bal>=w)
          {
              printf("collect ur cash\n");
              bal=bal-w;
              printf("balance updated=%d",bal);
              goto atm;
          }
          else
          {
              printf("insuficient amount\n");
          }
      }
      else if(op==2)
      {
          printf("enter amount to be deposit");
          scanf("%d",&d);
          bal=bal+d;
          goto atm;
         
      }
      else if(op==3)
      {
          
          goto atm;
         
      }
      else if(op==4)
      {
          printf("thank you visit again");
          goto atm;
      }
  }
else
{
    printf("wrong pin");
    goto pin;
}

  return 0;
}
