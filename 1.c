#include <stdio.h>

float calculateinterest(float principleamount ,float rate ,float time){
	return (principleamount * rate * time) / 100 ;
	}
float updatebalance(float currentbalance ,float interest){
	return currentbalance + interest;
}

int main(){
	
	float principleamount;
	float rate ;
	float time ;
	float currentbalance ;
	
	printf("Enter Principle Amount : ");
	scanf("%f",&principleamount);
	
	printf("Enter Rate : ");
	scanf("%f",&rate);
	
	printf("Enter Time: ");
	scanf("%f",&time);
	
	printf("Enter Current Balance :");
	scanf("%f",&currentbalance);
	
    float interest = calculateinterest(principleamount, rate, time);
    
    float newbalance = updatebalance(currentbalance , interest);
    
printf("Interest Will Be : %.2f\n",interest);
printf("New Balance Will Be : %.2f",newbalance);

return 0;
}
