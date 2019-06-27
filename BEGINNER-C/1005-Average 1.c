/*
    1005 - Average 1
    Url: https://www.urionlinejudge.com.br/judge/en/problems/view/1005
*/

#include <stdio.h>


/*
    Read two floating points' values of double precision A and B, corresponding
    to two student's grades. After this, calculate the student's average, considering
    that grade A has weight 3.5 and B has weight 7.5. Each grade can be from zero to ten,
    always with one digit after the decimal point. Don’t forget to print the end of line
    after the result, otherwise you will receive “Presentation Error”. Don’t forget the
    space before and after the equal sign.
*/


int main(){
float a,b,result;
scanf("%f %f",&a,&b);
result=((a*3.5)+(b*7.5))/(3.5+7.5);
printf("MEDIA = %.5f\n",result);
return 0;
}
