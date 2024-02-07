/* oneOther.cpp by Steven Conyers 4/06/2021 */

/* Input:  Keyboard*/
/* Output: Screen*/
/* This program calculates each entry and finds the average. The input will come from the keyboard do to cin.
The output will be sent to the screen from the cout statements. The first prompt will ask the user to enter a tempature.
Integers between zero and one hundred (0-100) must be used.
Any integer that is beyond what is asked, output will display a message stating it is out of range.
A  for.. while loop is used to get the data.
If statements are used to count warm days and cold days with increment operator. 
All entries are added up and an average is found */

#include <iostream>
#include <iomanip>			/* I/O library */
using namespace std;

int main()
{
   float temp[14];
   float total = 0.0f;
   float averageTemp = 0.0f;
   int day = 0;
   int warmDay = 0;
   int coldDay = 0;
/*-----------------------------------------------------------------------------------------*/ 
/* Heading */
cout<<"Weather Analyzer Application by Steven Conyers"<<endl<<endl;

cout<<"Enter the high temperature for 14 days below";
/*-----------------------------------------------------------------------------------------*/
/*input temperatures in array using for a loop*/
for(day=0; day<14; day++)
   {
	   do
	   {
		   cout<<endl<<"What is the high temp for day # "<<day+1<<"? ";
		   cin>>temp[day];
		   
		   //0-100 only statement
		   if (temp[day] < 0 || temp[day] > 100)
		   {
			   cout<<"Out of range. Enter 0 - 100 Only!"<<endl<<endl;
			   }
}while (day[temp] < 0 || day[temp] > 100);
/*-----------------------------------------------------------------------------------------*/
//Processing for entries
total += temp[day];
if (temp[day] >= 60)
{
	warmDay++;
}

if (temp[day] < 60 )
{
	coldDay++;
}
/*-----------------------------------------------------------------------------------------*/			
//Temp statements 
if (temp[day] >= 70 && temp[day] <= 79)
{
	cout<<"Summer time is here. Watch for the humidity."<<endl;
	}
	else if (temp[day] >= 80 && temp[day] <= 89)
	{
		cout<<"Now it's really getting hot. Perfect beach weather!"<<endl;
		}
		else if (temp[day] >= 90 && temp[day] <= 99)
		{
			cout<<"Ya Mon! You're in Jamaican weather territory now."<<endl;
			
			}
}
cout<<endl<<endl;
/*-----------------------------------------------------------------------------------------*/
/* Count for warm days/cold days */
cout<<"The number of warm days: "<<warmDay<<endl<<endl;

cout<<"The number of cold days: "<<coldDay<<endl<<endl;
/*-----------------------------------------------------------------------------------------*/
/* Calculates average tempature*/
averageTemp = total / 14.0f;
/*-----------------------------------------------------------------------------------------*/
/* Show average temperature*/
cout<<"The average high temperature: "<<setprecision(2)<<fixed<<averageTemp<<endl<<endl;
/*-----------------------------------------------------------------------------------------*/
/* Average tempature statements */
	if (averageTemp < 50)
	{
		cout<<"These two weeks were basically cold"<<endl<<endl<<endl;
	}
	else if (averageTemp < 59 )
		{
			cout<<"These two weeks were somewhat cold"<<endl<<endl<<endl;
		}
		else if (averageTemp < 69)
			{
				cout<<"These two weeks were decent for Michigan"<<endl<<endl<<endl;
			}
			else if (averageTemp < 79)
				{
					cout<<"These two weeks were hot for Michigan"<<endl<<endl<<endl;
				}
				else if (averageTemp < 89)
					{
						cout<<"These two weeks were quite hot"<<endl<<endl<<endl;
					}
					else
					{
						cout<<"These two weeks were blazing hot"<<endl<<endl<<endl;
					}
/*-----------------------------------------------------------------------------------------*/
/* Closing message */
cout<<"Thank you for using the Weather Analyzer!";
	
return 0;
}