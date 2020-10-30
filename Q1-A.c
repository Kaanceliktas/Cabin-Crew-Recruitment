//Cabin crew recruitment (2 pts)
#include<stdio.h>

int main(void)
{
	int age, weight; //2 pts
	float height, bmi; //2 pts
	
	printf("Enter your age:"); //1 pts
	scanf("%d",&age); //1 pts
	
	printf("Enter your weight (in kg):"); //1 pts
	scanf("%d",&weight); //1 pts
	
	printf("Enter your weight (in meters):"); //1 pts
	scanf("%f",&height); //1 pts
	
	bmi=(float) (weight/(height*height)); //2 pts
	printf("Your BMI is:%.2f\n",bmi); //1 pts
	
	if(age>=21 && age<=28) //12 pts
	{
		if(bmi>18.50 && bmi<24.99)
		{
		printf("Congrats!You can apply for airline cabin crew position.");
		}
		else
		{
		printf("You cannot apply for airline cabin crew position.");	
		}
		
	}
	else //3 pts
	{
		printf("You cannot apply for airline cabin crew position.");
	}
	
	return 0;
}
