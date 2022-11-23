#include<stdio.h>
#include<conio.h>

int factorial(int num){
	if(num==1){
		return 1;
	}
	
	return num*factorial(num-1);
}

int main(){
	int num;
	
	printf("enter the number: ");
	scanf("%d", &num);
	
	int result= factorial(num);
	
	printf("Factorial of number is  %d", result);
	
	return 0;
}
