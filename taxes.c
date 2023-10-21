/**
 * Author Yawar Hussain
 * This program computes income taxes based on adjusted
 * gross income and a child tax credit.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{

  double agi = 0.0;
  char c = 'N';
  double tax = 0.0;
  double childCredit = 0.0;
  double totalTax = 0.0;
  int numChildren = 0;

  printf("Please enter your adjusted gross income (AGI): ");
  scanf("%lf", &agi);
  // remove the "enter" endline character
  getchar();

  printf("Do you have any children? (Y) or (N)? ");
  c = getchar();

  if (c == 'y' || c == 'Y')
  {
    printf("How many children do you have? ");
    scanf("%d", &numChildren);
  }

  // TODO: compute the tax, child credit, and total tax here
  if(agi >= 0 && agi <= 19900)
  {
    if(agi >= 4000 && agi <= 20000 && numChildren == 1)
    {
      childCredit = numChildren * 0;
    }
    else 
    {
      childCredit = numChildren * 2000;
    }
    
    tax = agi * (10.0/100);
    totalTax = tax * (agi - 0);

  }

    else if(agi >= 19901 && agi <= 81050)
  {
   

  }


  printf("AGI:          $%10.2f\n", agi);
  printf("Tax:          $%10.2f\n", tax);
  printf("Child Credit: $%10.2f\n", childCredit);
  printf("Total Tax:    $%10.2f\n", totalTax);

  return 0;
}
