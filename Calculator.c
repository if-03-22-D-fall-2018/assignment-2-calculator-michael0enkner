#include <stdio.h>

double Add(double firstoperand, double secondoperand)
{
  return firstoperand+secondoperand;
}
double Sub(double firstoperand, double secondoperand)
{
  return firstoperand+secondoperand;
}
double Multiply(double firstoperand, double secondoperand)
{
  return firstoperand+secondoperand;
}
double Division(double firstoperand, double secondoperand)
{
  return firstoperand+secondoperand;
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
  printf("Enter your choice:");
  scanf("%d",&type_of_operation );
} while(type_of_operation != -1 && type_of_operation != 0 && type_of_operation != 1 && type_of_operation != 2 && type_of_operation != 3 && type_of_operation != 4);




  double firstoperand = 0;
  double secondoperand = 0;
  if (type_of_operation >= 1)
  {
    printf("Please enter the first operand: \n");
    scanf("%lf",&firstoperand);
    printf("Please enter the second operand:\n");
    scanf("%lf",&secondoperand);
  }

  double result;
  if (type_of_operation == 1)
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
  printf("Die Lösung ist: %4.2f\n", result);
  return result;
}
