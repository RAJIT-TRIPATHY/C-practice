#include<stdio.h>
int main(){
    int a=4;
    int b=5;
    int c=6;
    printf("Largest number = %d\n", (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c));
    return 0;
}