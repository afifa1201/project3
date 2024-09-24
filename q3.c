#include<stdio.h>
int main(){
	int number,lastdigit,firstdigit;
	printf("enter the number:");
	scanf("%d",&number);
	int sum=0;
	lastdigit=number%10;
	while(number>=10){
		number=number/10;
	}
	firstdigit=number%10;
	sum=firstdigit+lastdigit;
	printf("sum of first digit & last digit: %d \n",sum);
	
	}
	

	
	

	
	

	
	

