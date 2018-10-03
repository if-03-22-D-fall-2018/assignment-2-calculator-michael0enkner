#include <stdio.h>
#include <float.h>

double Add(double firstoperand, double secondoperand)
{
  return firstoperand+secondoperand;
}
double Sub(double firstoperand, double secondoperand)
{
  return firstoperand-secondoperand;
}
double Multiply(double firstoperand, double secondoperand)
{
  return firstoperand*secondoperand;
}
double Division(double firstoperand, double secondoperand)
{
  return firstoperand/secondoperand;
}
int main(int argc, char const *argv[])
{
int type_of_operation = 0;
do
{
  printf("Choose one of the following operations\n");
  printf("Add (1)\n");
  printf("Subtract (2)\n");
  printf("Multiply (3)\n");
  printf("Divide (4)\n");
  printf("Stop program (-1)\n");
  printf("Enter your choice: ");
  scanf("%d",&type_of_operation );
} while(type_of_operation != -1 && type_of_operation != 0 && type_of_operation != 1 && type_of_operation != 2 && type_of_operation != 3 && type_of_operation != 4);




  double firstoperand = 0;
  double secondoperand = 0;
  if (type_of_operation >= 1)
  {
    printf("Please enter the first operand:  ");
    scanf("%lf",&firstoperand);
    printf("Please enter the second operand: ");
    scanf("%lf",&secondoperand);
  }

  double result;
  if (type_of_operation == -1)
  {
    return 0;
  }
  else if (secondoperand == 0 && type_of_operation == 4)
  {
    printf("Division by zero\n");
    return 0;
  }
  else if (type_of_operation == 1)
  {
    result = Add(firstoperand,secondoperand);
  }
  else if (type_of_operation == 2)
  {
    result = Sub(firstoperand,secondoperand);
  }
  else if (type_of_operation == 3)
  {
    result = Multiply(firstoperand,secondoperand);
  }
  else if (type_of_operation == 4)
  {
    result = Division(firstoperand,secondoperand);
  }

  if (result >= DBL_MAX)
  {
    printf("Number overflow\n");
  }
  else if (result <= DBL_MIN)
  {
    printf("Number underflow\n");
  }
  else
  {
    printf("Die Lösung ist: %4.2f\n", result);
    return result;
  }
}
