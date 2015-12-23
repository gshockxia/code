#include<stdio.h>
#include<stdbool.h>

struct date {
	int month;
	int day;
	int year;
};

bool isleap(struct date d);

int numberOfDays(struct date d);

int main()
{
	struct date today,tomorrow;
	
	printf("Enter today's date (mm dd yyyy):");
	scanf("%i %i %i",&today.month,&today.day,&today.year);
	
	if(today.day!=numberOfDays(today)) {
		tomorrow.day=today.day+1;
		tomorrow.month=today.month;
		tomorrow.year=today.year;
	}
	else if(today.month==12){
		tomorrow.day=1;
		tomorrow.month=1;
		tomorrow.year=today.year+1;
	}
	else
	{
		tomorrow.day=1;
		tomorrow.month=today.month+1;
		tomorrow.year=today.year;
	}
	
	printf("Tomorrow's date is %i-%i-%i.\n'",tomorrow.year,tomorrow.month,tomorrow.day);
	
	return 0;
}

int numberOfDays(struct date d)
{
	int days;
	
	const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if(d.month==2&&isleap(d))
		days=29;
	else
		days=daysPerMonth[d.month-1];
		
	return days;
	
}

bool isleap(struct date d)
{
	bool leap=false;
	
	if((d.year%4==0&&d.year%100!=0)||d.year%400==0)
		leap=true;
		
	return leap;
}
