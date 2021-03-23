#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Creating a funciton to calculae the difference//
int calc(int a, int b)
{
      //to calculate the difference//
      int x;
      x = a - b;
      return x;
}
int main ()
{
  int payment;
  int int_money;
  int diff;
  /*TO generate a random number between Rs0.00 to Rs10 000 for the   
  customer to pay*/
  srand ( time(NULL) );
  payment = (rand() % 10000);
  printf("Your payment is %d\n",payment);
  printf("Please input your money : Rs ");
  scanf("%d",&int_money);

  //To check if the user has input correct amount of money//
  if(int_money > payment)
  {
      int total = calc(int_money, payment);
      printf("Your changes are : Rs %d\n",total);
  } 
  //If the user has input less than the actual payment//
  else if (int_money < payment)
  {
      printf("You have enter less than the actual amount \n");
      //If the user has input less than the actual payment AGAIN!!!//
      while (int_money < payment)
      {
	      printf("Please input your money : Rs ");
	      scanf("%d",&int_money);
      }
      int total = calc(int_money, payment);
      printf("Your changes are : Rs %d\n",total);
  }
   //If the user has input the exact amount//
   else (int_money = payment);
  { 
      printf("Thank You \n");
  }
  return 0;
}


