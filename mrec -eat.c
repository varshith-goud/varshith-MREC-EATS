#include<stdio.h>
int
main ()
{
 
int tbill = 0, dbill = 0, otp =
    4444, op, q, fop, fnop, fvop, lop,tim;
 
char name[10], radd[20], d[20];

login:
  {
   
printf ("welcome to MREC EATS\n");
   
printf ("login\n");
   
printf ("username:\n");
   
scanf ("%s", &name);
   
printf ("password:\n");
   
scanf ("%d", &otp);
   
if (otp == 4444)
     
      {

printf ("login sucessfull\n");
     
}
   
    else if (otp != 4444)
     
      {

printf ("try again\n");

goto login;
     
}
 
}

 
interface:
  {
   
printf ("1.Delivery\n 2.Partner with us\n");
   
scanf ("%d", &op);
   
if (op == 1)
     
      {

printf ("welcome to MREC EATS \n ");

printf ("explore our wide range of menu\n");

printf ("hello foodie %s\n", name);

 
 
printf ("enter type of choice :\n1.veg\n2.non-veg");

scanf ("%d", &fop);

if (fop == 1)
 
 {
 
veg:
printf
     ("select your food items:\n1.panner butter masala\n2.butter naan\n3.veg manchuria\n4.ice cream\n5.cooldrink");
   
scanf ("%d", &fnop);
   
if (fnop == 1)
     
     {
printf ("you selected panner butter masala\n");

printf ("select quantity:");

scanf ("%d", &q);

dbill = dbill + (q * 150);

printf ("ur cart bill is :%d\n", dbill);

goto veg;
     
}
   
   else if (fnop == 2)
     
     {

printf ("you selected panner butter naan\n");

printf ("select quantity:");

scanf ("%d", &q);

dbill = dbill + (q * 20);

printf ("ur cart bill is :%d\n", dbill);

goto veg;
     
 
}
   
   else if (fnop == 3)
     
     {

printf ("you selected veg manchuria\n");

printf ("select quantity:");

scanf ("%d", &q);

dbill = dbill + (q * 120);

printf ("ur cart bill is :%d\n", dbill);

goto veg;
     
 
}
   
   else if (fnop == 4)
     
     {

printf ("you selected ice cream\n");

printf ("select quantity:");

scanf ("%d", &q);

dbill = dbill + (q * 80);

printf ("ur cart bill is :%d\n", dbill);

goto veg;
     
}
   
   else if (fnop == 5)
     
     {

printf ("you selected cooldrink\n");

printf ("select quantity:");

scanf ("%d", &q);

dbill = dbill + (q * 20);

printf ("ur cart bill is :%d\n", dbill);

goto veg;
     
}
 
}

else if (fop == 2)
 
 {
 
nonveg:
printf
     ("select your food items:\n1.chicken biryani\n2.mandi\n3.chicken 65\n4.chicken manchuria\n5.fish");
   
scanf ("%d", &fvop);
   
if (fvop == 1)
     
     {

printf ("you selected chicken biryani\n");

printf ("select quantity:\n");

scanf ("%d", &q);

dbill = dbill + (q * 130);

printf ("ur cart bill is :%d\n", dbill);

goto nonveg;
     
 
}
   
   else if (fvop == 2)
     
     {

printf ("you selected mandi\n");

printf ("select quantity:\n");

scanf ("%d", &q);

dbill = dbill + (q * 340);

printf ("ur cart bill is :%d\n", dbill);

goto nonveg;
     
 
}
   
   else if (fvop == 3)
     
     {

printf ("you selected chicken 65\n");

printf ("select quantity:\n");

scanf ("%d", &q);

dbill = dbill + (q * 90);

printf ("ur cart bill is :%d\n", dbill);

goto nonveg;
     
 
}
   
   else if (fvop == 4)
     
     {

 
 
printf ("you selected chicken manchuria\n");

printf ("select quqntity:");

scanf ("%d", &q);

dbill = dbill + (q * 100);

printf ("ur  cart bill is :%d\n", dbill);

goto nonveg;
     
}
   
   else if (fvop == 5)
     
     {

printf ("you selected fish");

printf ("select quantity");

scanf ("%d", &q);

dbill = dbill + (q * 120);

printf ("ur  cart bill is :%d\n", dbill);

goto nonveg;
     
}
 
 
}

printf ("enter ur location:\n");

scanf ("%s", &d);

tbill = (tbill + dbill);
printf("DEAR %s \n",name);

printf ("%s  your total bill is %d\n", name,tbill);

printf ("pay at ur door step\n");

printf ("we will reach u soon\n");

printf ("thank you\n");
     
 
 
}
else if(op==2)
{
    printf("thanks for choosing us\n");
    printf("choose our hubs near to you\n");
    printf("\n1.secenderabad\n2.kompally\n3.kukatpally\n4.hitechcity\n");
    scanf("%d",&lop);
 
   
        printf("select ur work timings");
        printf("\n1.10:00am-6:00pm\n2.06:00pm-02:00am\n");
        scanf("%d",&tim);
        printf("DEAR %s THANKS FOR CHOOSING US \n ",name);
        printf("join us from tmrw\n");
        printf("lets grow together\n");
        printf("our team will contact you soon\n");
   
}
   
 
}
 
 
}

