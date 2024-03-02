/* AverageTemp.cpp by Steven Conyers 
Created: 4/06/2021
Updated: 3/2/2024 */

#include <iostream>
#include <iomanip>  /* I/O library */

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
} while (day[temp] < 0 || day[temp] > 100);
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
