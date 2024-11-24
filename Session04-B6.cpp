#include<stdio.h>

int main(){
    int sddt , sdct , hsd , tong; 
	printf("Moi ban nhap so dien dau thang : ");
	scanf ("%d",&sddt);
	printf("Moi ban nhap so dien cuoi thang  :");
	scanf("%d",&sdct);
	hsd = sdct - sddt;
	
	
	
	if( 0<=hsd && hsd<50){ 
	    tong = hsd * 10000; 
		printf("so tien dien thang nay can phai tra la %dvnd",tong); 
	}else if( 50<=hsd && hsd<100){ 
	    tong = hsd * 15000; 
		printf("so tien dien thang nay can phai tra la %dvnd",tong); 
	}else if( 100<=hsd && hsd<150){ 
	    tong = hsd * 20000; 
		printf("so tien dien thang nay can phai tra la %dvnd",tong);
	}else if( 150<=hsd && hsd<200){ 
	    tong = hsd * 25000; 
		printf("so tien dien thang nay can phai tra la %dvnd",tong);
    }else{
    	tong = hsd * 30000; 
		printf("so tien dien thang nay can phai tra la %dvnd",tong);
	} 
 	
 	
 	
 	
   return 0; 
 } 
