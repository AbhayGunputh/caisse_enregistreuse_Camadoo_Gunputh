#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Function to generate a random number */

int randomNUM(void)
{
   int x;
   srand ( time(NULL) );
   x = (rand() % 10000);
   return x;
}

/*------
        FUNCTION TO CALCULATE THE DIFFERENCE
          --------*/
int calc(int a, int b)
{
      //to calculate the difference//
      int x;
      x = a - b;
      return x;
}

/*--------
        FUNCTION TO CALCULATE THE CHANGES AND THE OUTPUT
          --------*/
int check(int int_money, int payment)
{ 
   int total;
   total = calc(int_money, payment);
   if(int_money > payment)
  {
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
      return total;
  }
   //If the user has input the exact amount//
   else (int_money = payment);
  { 
      printf("Thank You \n");
  }
  return 0;
}

/*--------
        FUNCTION CALCULE MONNAIE
          --------*/
int calcule_monnaie(int x)
{
        int amt;
        int total;
        printf("There are: ");
	
	total = (int)amt/2000;
	printf("\n%d Note of 2000.00\n", total);
	amt = amt-(total*2000);

	total = (int)amt/1000;
	printf("%d Note(s) of 1000.00\n",total);
	amt = amt -(total*1000);

	total = (int)amt/500;
        printf("%d Note(s) of 500.00\n", total);
        amt = amt-(total*500);

        total = (int)amt/200;
        printf("%d Note(s) of 200.00\n",total);
        amt = amt -(total*200);

	total = (int)amt/100;
        printf("%d Note(s) of 100.00\n",total);
        amt = amt -(total*100);

	total = (int)amt/50;
        printf("%d Note(s) of 50.00\n",total);
        amt = amt -(total*50);

	total = (int)amt/25;
        printf("%d Note(s) of 25.00\n",total);
        amt = amt -(total*25);

	total = (int)amt/20;
        printf("%d Coin(s) of 20.00\n",total);
        amt = amt -(total*20);

	total = (int)amt/10;
        printf("%d Coin(s) of 10.00\n",total);
        amt = amt -(total*10);

	total = (int)amt/5.00;
        printf("%d Coin(s) of 5.00\n",total);
	 amt = amt -(total*5);

	total = (int)amt/1.;
        printf("%d Coin(s) of 1.00\n",total);
         amt = amt -(total*1);

	total = (int)amt/0.5;
        printf("%d Coin(s) of 0.50\n",total);
         amt = amt -(total*0.5);

	total = (int)amt/0.2;
        printf("%d Coin(s) of 0.20\n",total);
         amt = amt -(total*0.2);

	total = (int)amt/0.01;
        printf("%d Coin(s) of 0.10\n",total);
         amt = amt -(total*0.01);
        return 0;
}




/*--------
        MAIN FUNCTION
          --------*/
int main ()
{
  int payment;
  int int_money;
  /*TO generate a random number between Rs0.00 to Rs10 000 for the 
  customer to pay*/
  payment = randomNUM();
  printf("Your payment is %d\n",payment);
  printf("Please input your money : Rs ");
  scanf("%d",&int_money);
  //Calling the function to check the amount to pay and to output the result//
  int res = check(int_money,payment);
  int num_cash = calcule_monnaie(res);
  return 0;
}



