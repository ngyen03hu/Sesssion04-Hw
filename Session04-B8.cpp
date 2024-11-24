#include<stdio.h>

int main(){
	int a , b , c ;
	printf(" moi ban nhap canh a : \n ");
	scanf("%d",&a);
	printf(" moi ban nhap canh  b : \n ");
	scanf("%d",&b); 
	printf(" moi ban nhap canh  c : \n ");
	scanf("%d",&c);  
	
	if(a>0 && b>0 && c>0 && ( a + b > c) && ( b + c > a) && ( a + c > b) ){
		printf(" Là 3 canh tam giác");
	} else {
		printf("Không phai 3 canh tam giác");
	}
	
	
	
	
	
	
	return 0; 
} 
