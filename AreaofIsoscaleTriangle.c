#include<stdio.h>
#include<math.h>
int main(){
    float A,B,C,S;
    printf("Enter the side A:");
    scanf("%f",&A);
    printf("Enter; for side B:");
    scanf("%f",&B);
    printf("Enter for side c:");
    scanf("%f",&C);
    S=(A+B+C/2);
    float area=sqrt(S*(S-A)*(S-B)*(S-C));
    printf("Area of the Triangle:%.2f",area);
    return 0;
}