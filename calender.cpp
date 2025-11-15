//Muhammad Sana Ullah Mughal (25I-3067) SE-B
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main()
{
	int year,month,days;
	long int totalDays=0;
	string M[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	string weekDays[7]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
	
	cout<<"Enter the month(1-12): ";
	cin>>month; 
	
	//Input Validation
	while(month<1 || month>12)
	{
		cout<<"Invalid Input for month!"<<"Please enter the month again:";
		cin>>month;
	}
	
	cout<<"Enter year: ";
	cin>>year;
	while(year<1 || year>9999)
	{
		cout<<"Invalid Input for year!"<<"Please enter the year again:";
		cin>>year;
	}
	
	for(int i=1;i<year; i++)
	{
		if((i%4==0 && i%100!=0)||(i%400==0))
		{
			totalDays+=366;
		}
		else
		{
			totalDays+=365;
		}
	}
	
	for(int i=1;i<month;i++)
	{
	    if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
	    {
	    	totalDays += 31;
		}  
	    else if (i == 4 || i == 6 || i == 9 || i == 11)
	    {
	    	totalDays += 30;
		}
	    else if (i == 2)
		{
	        if ((year%4==0 && year%100!=0)||(year%400==0))
	            totalDays += 29;
	        else
	            totalDays += 28;
        }		
	}
	
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		days = 31;
	} 
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        days = 30;	
	}    
    else if (month == 2) 
	{
	    if ((year%4==0 && year%100!=0)||(year%400==0))
	        days = 29;
	    else
	        days = 28;
	}

	

	
	cout<<endl<<endl<<setw(18)<<M[month-1]<<" "<<year<<endl;
	cout<<"  "<<"_________________________________"<<endl;
	
	for(int i=0;i<7;i++)
	{
		cout<<setw(5)<<weekDays[i];
	}
	
	cout<<endl; 
	
	int spaces=(totalDays%7) + 1;//Since the Starting day is Monday.
	
	for (int i = 1; i <=spaces; i++)
    cout<<setw(5)<<" ";

	
	for(int i=1;i<=days;i++)
	{
		cout<<setw(5)<<i;
		if((spaces+i)%7==0) cout<<endl;
	}
    return 0;
}
