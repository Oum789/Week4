#include<stdio.h>
void main()
{
    double a,b,c,d,e,f,g,h,i,j,sum,avg;
    printf("Enter Height of 10 Peoples(cm) : ");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    scanf("%lf",&g);
    scanf("%lf",&h);
    scanf("%lf",&i);
    scanf("%lf",&j);
    sum = a+b+c+d+e+f+g+h+i+j;
    avg = sum / 10;
    printf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",a,b,c,d,e,f,g,h,i,j);
    printf("Average Height is %lf cm .",avg);
}