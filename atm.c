#include<stdio.h>
#define charge 0.50
int main(void){
float initialAmount;
float finalAmount;
int withdrawAmount;

scanf("%.2f",&initialAmount);
scanf("%d",withdrawAmount);

if(withdrawAmount>initialAmount){
printf("Insufficient Fund :(");}
else {
  if(withdrawAmount%5 == 0){
    finalAmount = initialAmount - withdrawAmount - charge ;
    printf("%.2f",finalAmount);
  }
  else{
    printf("Please enter amount in multiple of 5 :)");}
  }
  return 0;
  
}

