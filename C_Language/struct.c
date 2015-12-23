#include<stdio.h>

struct date {
	int month;
	int day;
	int year;
};

int main()
{
	struct date today;
	struct date *pDate=&today;
	today=(struct date){07,31,2014};
	struct date day;
	day=today;
	day.year=2015; 
	
	printf("Today's date is %i_%i_%i.\n",today.year,today.month,today.day);
	printf("Today's date is %i_%i_%i.\n",day.year,day.month,day.day);
	printf("address of today is %p\n",pDate);
	return 0;
}
