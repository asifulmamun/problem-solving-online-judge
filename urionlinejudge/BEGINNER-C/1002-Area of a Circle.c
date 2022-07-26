/*
    1002 - Area of a Circle
    Url: https://www.urionlinejudge.com.br/judge/en/problems/view/1002
*/

#include <stdio.h>
#include <math.h>

#define n 3.14159

int main(){
    // Declare
    double A,R,res;

    // get data from user
    scanf("%lf", &R);

    // equation
    res = pow(R,2);
    A = n * res;

    // Print Result
    printf("A=%.4lf\n", A);

return 0;
}
