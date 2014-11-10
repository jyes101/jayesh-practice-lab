#include<stdio.h>
#define charge 0.50
int main(void){
float initialAmount;
float finalAmount;
int withdrawAmount;

scanf("%.2f",&initialAmount);
scanf("%d",withdrawAmount);

if(withdrawAmount>initialAmount){
printf("Request cann't be made:");

