#include<stdio.h>
int main()
{
    float farenheit,celcius;
    scanf("%f",&farenheit);
    celcius=((farenheit-32)*5/9);
    printf("%.2f",celcius);
    return 0;
}