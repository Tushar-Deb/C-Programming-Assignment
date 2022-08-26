#include<stdio.h>
#include<math.h>

int main()
{
printf("I am Tushar Kanti Deb\nMy Id No:701\n");
printf("\n");

int x,y,z,res;
printf("Please input three number\n");
scanf("%d %d %d", &x, &y, &z);
res=pow(x,3)+pow(y,3)+pow(z,3)+2*pow(x,2)*y+3*x*y*z;
printf("Result is %d\n", res);
printf("\n");

float radious,area;
printf("Please Input Radias\n");
scanf("%f", &radious);
area=4*3.14159*pow(radious,2);
printf("Area= %f\n", area);
printf("\n");

float celcius,Fahrenheit;
printf("Please Input celcius tempeteture\n");
scanf("%f", &celcius);
Fahrenheit=(celcius*(9/5))+32;
printf("Fahrenheit Tempereture is= %f\n", Fahrenheit);
printf("\n");

float a,b,c,average;
printf("Please input three number\n");
scanf("%f %f %f", &a, &b, &c);
average=(a+b+c)/3;
printf("Average is=%f", average);

return 0;
}
