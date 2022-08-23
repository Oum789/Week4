#include<stdio.h>
void main()
{   
    int i;
    double avg;
    double height[10];
    double sum=0;
    printf("Enter Height of 10 Peoples(cm) : ");
    for(i=0;i<10;i++)
    {
        scanf("%lf",&height[i]);
        sum = sum + height[i];
    }
    for(i=0;i<10;i++)
    {
        printf("%lf ",height[i]);
        if(i==9)
        {
            printf("\n");
        }
    }
    avg = sum/10;
    printf("Average Height is %lf cm .",avg);
}