#include<stdio.h>

int main(){
	int number, number1, number2, number3;
	printf("nhap 3 so nguyen : ");
	scanf ("%d ",&number);
	
	if (number <100 || number > 999){
		printf ("khong phai la 3 so nguyen ");
		return 1;
	} 
	number1 = number / 100;
	number2 = (number / 10) %10;
	number3 = number % 10 ; 
	
	if(number3 > number2 && number3 < number1 || number3 < number2 && number3 > number1 ) {
		printf(" so thu ba  nam trong khoang giua so thu nhat va so thu hai "); 	
	} else 
	     printf ("so thu 3 khong nam trong khoang giua so thu nhat va so thu hai "); 
	 
	return 0; 
} 
