#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
//Create a class to hold data from both files
class rev_exp {
public:
	double file_revenue;
	double file_expense;
};
//Load both files
void LoadFile(rev_exp data[], int&count)
{
	ifstream f("C:\\Users\\Dell\\Desktop\\hw#2_2015_revenue.txt");
	ifstream file("C:\\Users\\Dell\\Desktop\\hw#2_2015_expenses.txt");
	if (f.good())
	{
		while (!f.eof())
		{
			f >> data[count].file_revenue;
			file >> data[count].file_expense;
			count++;
		}
	}
	f.close();
}
//Print both files
void printFile(rev_exp data[], int count)
{
	for (int i = 0; i < count; i++)
	{
		cout << data[i].file_revenue << " " << data[i].file_expense << endl;
	}
}
//Task function #1
void functionOne(int fVs[], int &count)
{
	cout << "Enter Present Value:" << endl;
	double pV;
	cin >> pV;

	cout << "Enter Interest rate:" << endl;
	double iR;
	cin >> iR;
	iR = 1 + iR;

	cout << "Enter number of Periods:" << endl;
	double nOp;
	cin >> nOp;

	double exp = pow(iR, nOp);
	double fV = exp * pV;

	cout << "The future value of your investment is: " << fV << endl;
	fVs[count] = fV;
}
//Task function #2
void functionTwo(int rOis[], int&count)
{
	cout << "Enter Total Revenue: " << endl;
	double tR;
	cin >> tR;

	cout << "Enter Total Expense:" << endl;
	double tE;
	cin >> tE;
	double nP = tR - tE;

	cout << "Enter Cost of Investment:" << endl;
	double cOI;
	cin >> cOI;

	double rOI = (nP - cOI) / cOI;
	cout << "Your Return on Investment is: " << rOI << endl;
	rOis[count] = rOI;
}
//Task function #3
void functionThree(int aTrs[], int&count)
{
	cout << "Enter Current Assets: " << endl;
	double cA;
	cin >> cA;

	cout << "Enter Current Liabilities: " << endl;
	double cL;
	cin >> cL;

	cout << "Enter Inventory: " << endl;
	double inv;
	cin >> inv;

	double aTR = (cA - inv) / cL;
	cout << "Your Acid Test Ratio is: " << aTR << endl;
	aTrs[count] = aTR;
	count++;
}
//Task function #4
void functionFour(int fVs[], int rOis[], int aTrs[], int &count)
{
	for (int i = 0; i < count; i++)
	{
		cout << "Your future value was: " << fVs[i] << endl;
		cout << "Your Return On Investment was: " << rOis[i] << endl;
		cout << "Your Acid Test Ratio was: " << aTrs[i] << endl;
		cout << endl;
	}
}
//Search Revenue file for value
void functionSix(rev_exp data[], int count)
{
	cout << "Enter a revenue value: " << endl;
	double revenueValue;
	cin >> revenueValue;

	double month;
	int year = 2014;

	for (int i = 0; i < count; i++)
	{
		int index = i + 1;
		if (revenueValue == data[i].file_revenue)
		{
			//Months
			//Jan
			if (index > 0 && index < 31)
			{
				month = 01;
			}
			//Feb
			else if (index > 31 && index <= 59)
			{
				month = 02;
			}
			//Mar
			else if (index > 59 && index <= 90)
			{
				month = 03;
			}
			//Apr
			else if (index > 90 && index <= 120)
			{
				month = 04;
			}
			//May
			else if (index > 120 && index <= 151)
			{
				month = 05;
			}
			//June
			else if (index > 151 && index <= 181)
			{
				month = 06;
			}
			//July
			else if (index > 181 && index <= 212)
			{
				month = 07;
			}
			//August
			else if (index > 212 && index <= 243)
			{
				month = 8;
			}
			//Sept
			else if (index > 243 && index <= 273)
			{
				month = 9;
			}
			//Oct
			else if (index > 273 && index <= 303)
			{
				month = 10;
			}
			//Nov
			else if (index > 303 && index <= 333)
			{
				month = 11;
			}
			//Dec
			else if (index > 333 && index <= 365)
			{
				month = 12;
			}
			//==================================
			int position = i + 1;
			//Date
			if (position > 31 && position < 59)
			{
				position -= 31;
			}
			else if (position > 59 && position < 90)
			{
				position -= 59;
			}
			else if (position > 90 && position < 120)
			{
				position -= 90;
			}
			else if (position > 120 && position < 151)
			{
				position -= 120;
			}
			else if (position > 151 && position < 181)
			{
				position -= 151;
			}
			else if (position > 181 && position < 212)
			{
				position -= 181;
			}
			else if (position > 212 && position < 243)
			{
				position -= 212;
			}
			else if (position > 243 && position < 273)
			{
				position -= 243;
			}
			else if (position > 273 && position < 304)
			{
				position -= 273;
			}
			else if (position > 304 && position < 334)
			{
				position -= 304;
			}
			else if (position > 334 && position < 365)
			{
				position -= 334;
			}
			cout << "The revenue value $" << data[i].file_revenue << " was found at position: " << i + 1 << "\tDate: " << month << "/" << position << "/" << year << endl;
		}

	}
	cout << endl;
}
//Search Expense file for value
void functionSeven(rev_exp data[], int count)
{
	cout << "Enter an expense value: " << endl;
	double expenseValue;
	cin >> expenseValue;
	double month;
	int year = 2014;

	for (int i = 0; i < count; i++)
	{
		int index = i + 1;
		if (expenseValue == data[i].file_expense)
		{
			//Months
			//Jan
			if (index > 0 && index < 31)
			{
				month = 01;
			}
			//Feb
			else if (index > 31 && index <= 59)
			{
				month = 02;
			}
			//Mar
			else if (index > 59 && index <= 90)
			{
				month = 03;
			}
			//Apr
			else if (index > 90 && index <= 120)
			{
				month = 04;
			}
			//May
			else if (index > 120 && index <= 151)
			{
				month = 05;
			}
			//June
			else if (index > 151 && index <= 181)
			{
				month = 06;
			}
			//July
			else if (index > 181 && index <= 212)
			{
				month = 07;
			}
			//August
			else if (index > 212 && index <= 243)
			{
				month = 8;
			}
			//Sept
			else if (index > 243 && index <= 273)
			{
				month = 9;
			}
			//Oct
			else if (index > 273 && index <= 303)
			{
				month = 10;
			}
			//Nov
			else if (index > 303 && index <= 333)
			{
				month = 11;
			}
			//Dec
			else if (index > 333 && index <= 365)
			{
				month = 12;
			}
			//==================================
			int position = i + 1;
			//Date
			if (position > 31 && position < 59)
			{
				position -= 31;
			}
			else if (position > 59 && position < 90)
			{
				position -= 59;
			}
			else if (position > 90 && position < 120)
			{
				position -= 90;
			}
			else if (position > 120 && position < 151)
			{
				position -= 120;
			}
			else if (position > 151 && position < 181)
			{
				position -= 151;
			}
			else if (position > 181 && position < 212)
			{
				position -= 181;
			}
			else if (position > 212 && position < 243)
			{
				position -= 212;
			}
			else if (position > 243 && position < 273)
			{
				position -= 243;
			}
			else if (position > 273 && position < 304)
			{
				position -= 273;
			}
			else if (position > 304 && position < 334)
			{
				position -= 304;
			}
			else if (position > 334 && position < 365)
			{
				position -= 334;
			}
			cout << "The expense value $" << data[i].file_expense << " was found at position: " << i + 1 << "\tDate: " << month << "/" << position << "/" << year << endl;
		}
	}
	cout << endl;
}
//Search Max from specified file
void functionEight(rev_exp data[], int count)
{
	char userChoice;
	cout << "Which file would you like to search the maximum value from?" << endl;
	cout << "E for Expense " << endl << "R for Revenue " << endl;
	cin >> userChoice;
	if (userChoice == 'E' || userChoice == 'e')
	{
		int day = 0;
		double month;
		int year = 2014;
		int position;
		int index;
		double maxExpense = 0;

		for (int i = 0; i < count; i++)
		{
			index = i + 1;

			if (data[i].file_expense > maxExpense)
			{
				maxExpense = data[i].file_expense;
				//Months
				//Jan
				if (index > 0 && index < 31)
				{
					month = 01;
				}
				//Feb
				else if (index > 31 && index <= 59)
				{
					month = 02;
				}
				//Mar
				else if (index > 59 && index <= 90)
				{
					month = 03;
				}
				//Apr
				else if (index > 90 && index <= 120)
				{
					month = 04;
				}
				//May
				else if (index > 120 && index <= 151)
				{
					month = 05;
				}
				//June
				else if (index > 151 && index <= 181)
				{
					month = 06;
				}
				//July
				else if (index > 181 && index <= 212)
				{
					month = 07;
				}
				//August
				else if (index > 212 && index <= 243)
				{
					month = 8;
				}
				//Sept
				else if (index > 243 && index <= 273)
				{
					month = 9;
				}
				//Oct
				else if (index > 273 && index <= 303)
				{
					month = 10;
				}
				//Nov
				else if (index > 303 && index <= 333)
				{
					month = 11;
				}
				//Dec
				else if (index > 333 && index <= 365)
				{
					month = 12;
				}
				//==================================
				position = i + 1;
				//Date
				if (position > 31 && position < 59)
				{
					position -= 31;
				}
				else if (position > 59 && position < 90)
				{
					position -= 59;
				}
				else if (position > 90 && position < 120)
				{
					position -= 90;
				}
				else if (position > 120 && position < 151)
				{
					position -= 120;
				}
				else if (position > 151 && position < 181)
				{
					position -= 151;
				}
				else if (position > 181 && position < 212)
				{
					position -= 181;
				}
				else if (position > 212 && position < 243)
				{
					position -= 212;
				}
				else if (position > 243 && position < 273)
				{
					position -= 243;
				}
				else if (position > 273 && position < 304)
				{
					position -= 273;
				}
				else if (position > 304 && position < 334)
				{
					position -= 304;
				}
				else if (position > 334 && position < 365)
				{
					position -= 334;
				}
			}
		}
		cout << "The maximum expense amount is $" << maxExpense << " Occured on: " << month << "/" << position << "/" << year << endl;
		cout << endl;
	}
	else if (userChoice == 'R' || userChoice == 'r')
	{
		double maxRevenue = 0;
		double month;
		int year = 2014;
		int position;
		int index;
		for (int i = 0; i < count; i++)
		{
			index = i + 1;
			if (data[i].file_revenue > maxRevenue)
			{
				//Months
				//Jan
				if (index > 0 && index < 31)
				{
					month = 01;
				}
				//Feb
				else if (index > 31 && index <= 59)
				{
					month = 02;
				}
				//Mar
				else if (index > 59 && index <= 90)
				{
					month = 03;
				}
				//Apr
				else if (index > 90 && index <= 120)
				{
					month = 04;
				}
				//May
				else if (index > 120 && index <= 151)
				{
					month = 05;
				}
				//June
				else if (index > 151 && index <= 181)
				{
					month = 06;
				}
				//July
				else if (index > 181 && index <= 212)
				{
					month = 07;
				}
				//August
				else if (index > 212 && index <= 243)
				{
					month = 8;
				}
				//Sept
				else if (index > 243 && index <= 273)
				{
					month = 9;
				}
				//Oct
				else if (index > 273 && index <= 303)
				{
					month = 10;
				}
				//Nov
				else if (index > 303 && index <= 333)
				{
					month = 11;
				}
				//Dec
				else if (index > 333 && index <= 365)
				{
					month = 12;
				}
				//==================================
				position = i + 1;
				//Date
				if (position > 31 && position < 59)
				{
					position -= 31;
				}
				else if (position > 59 && position < 90)
				{
					position -= 59;
				}
				else if (position > 90 && position < 120)
				{
					position -= 90;
				}
				else if (position > 120 && position < 151)
				{
					position -= 120;
				}
				else if (position > 151 && position < 181)
				{
					position -= 151;
				}
				else if (position > 181 && position < 212)
				{
					position -= 181;
				}
				else if (position > 212 && position < 243)
				{
					position -= 212;
				}
				else if (position > 243 && position < 273)
				{
					position -= 243;
				}
				else if (position > 273 && position < 304)
				{
					position -= 273;
				}
				else if (position > 304 && position < 334)
				{
					position -= 304;
				}
				else if (position > 334 && position < 365)
				{
					position -= 334;
				}
				maxRevenue = data[i].file_revenue;
			}
		}
		cout << "The maximum revenue amount is $" << maxRevenue << " Occured on: " << month << "/" << position << "/" << year << endl;
		cout << endl;
	}
}
//Search Min from specified file
void functionNine(rev_exp data[], int count)
{
	char userChoice;
	cout << "Which file would you like to search the minimum value from?" << endl;
	cout << "E for Expense " << endl << "R for Revenue " << endl;
	cin >> userChoice;
	if (userChoice == 'E' || userChoice == 'e')
	{
		double minExpense = 99999;
		double month;
		int year = 2014;
		int position;
		int index;

		for (int i = 0; i < count; i++)
		{
			index = i + 1;
			if (data[i].file_expense < minExpense)
			{
				//Months
				//Jan
				if (index > 0 && index < 31)
				{
					month = 01;
				}
				//Feb
				else if (index > 31 && index <= 59)
				{
					month = 02;
				}
				//Mar
				else if (index > 59 && index <= 90)
				{
					month = 03;
				}
				//Apr
				else if (index > 90 && index <= 120)
				{
					month = 04;
				}
				//May
				else if (index > 120 && index <= 151)
				{
					month = 05;
				}
				//June
				else if (index > 151 && index <= 181)
				{
					month = 06;
				}
				//July
				else if (index > 181 && index <= 212)
				{
					month = 07;
				}
				//August
				else if (index > 212 && index <= 243)
				{
					month = 8;
				}
				//Sept
				else if (index > 243 && index <= 273)
				{
					month = 9;
				}
				//Oct
				else if (index > 273 && index <= 303)
				{
					month = 10;
				}
				//Nov
				else if (index > 303 && index <= 333)
				{
					month = 11;
				}
				//Dec
				else if (index > 333 && index <= 365)
				{
					month = 12;
				}
				//==================================
				position = i + 1;
				//Date
				if (position > 31 && position < 59)
				{
					position -= 31;
				}
				else if (position > 59 && position < 90)
				{
					position -= 59;
				}
				else if (position > 90 && position < 120)
				{
					position -= 90;
				}
				else if (position > 120 && position < 151)
				{
					position -= 120;
				}
				else if (position > 151 && position < 181)
				{
					position -= 151;
				}
				else if (position > 181 && position < 212)
				{
					position -= 181;
				}
				else if (position > 212 && position < 243)
				{
					position -= 212;
				}
				else if (position > 243 && position < 273)
				{
					position -= 243;
				}
				else if (position > 273 && position < 304)
				{
					position -= 273;
				}
				else if (position > 304 && position < 334)
				{
					position -= 304;
				}
				else if (position > 334 && position < 365)
				{
					position -= 334;
				}
				minExpense = data[i].file_expense;
			}
		}
		cout << "The minimum expense amount is $" << minExpense << " Occured on: " << month << "/" << position << "/" << year << endl;
		cout << endl;
	}

	else if (userChoice == 'R' || userChoice == 'r')
	{
		double minRevenue = 99999;
		double month;
		int year = 2014;
		int position;
		int index;

		for (int i = 0; i < count; i++)
		{
			index = i + 1;

			if (data[i].file_revenue < minRevenue)
			{
				//Months
				//Jan
				if (index > 0 && index < 31)
				{
					month = 01;
				}
				//Feb
				else if (index > 31 && index <= 59)
				{
					month = 02;
				}
				//Mar
				else if (index > 59 && index <= 90)
				{
					month = 03;
				}
				//Apr
				else if (index > 90 && index <= 120)
				{
					month = 04;
				}
				//May
				else if (index > 120 && index <= 151)
				{
					month = 05;
				}
				//June
				else if (index > 151 && index <= 181)
				{
					month = 06;
				}
				//July
				else if (index > 181 && index <= 212)
				{
					month = 07;
				}
				//August
				else if (index > 212 && index <= 243)
				{
					month = 8;
				}
				//Sept
				else if (index > 243 && index <= 273)
				{
					month = 9;
				}
				//Oct
				else if (index > 273 && index <= 303)
				{
					month = 10;
				}
				//Nov
				else if (index > 303 && index <= 333)
				{
					month = 11;
				}
				//Dec
				else if (index > 333 && index <= 365)
				{
					month = 12;
				}
				//==================================
				position = i + 1;
				//Date
				if (position > 31 && position < 59)
				{
					position -= 31;
				}
				else if (position > 59 && position < 90)
				{
					position -= 59;
				}
				else if (position > 90 && position < 120)
				{
					position -= 90;
				}
				else if (position > 120 && position < 151)
				{
					position -= 120;
				}
				else if (position > 151 && position < 181)
				{
					position -= 151;
				}
				else if (position > 181 && position < 212)
				{
					position -= 181;
				}
				else if (position > 212 && position < 243)
				{
					position -= 212;
				}
				else if (position > 243 && position < 273)
				{
					position -= 243;
				}
				else if (position > 273 && position < 304)
				{
					position -= 273;
				}
				else if (position > 304 && position < 334)
				{
					position -= 304;
				}
				else if (position > 334 && position < 365)
				{
					position -= 334;
				}
				minRevenue = data[i].file_revenue;
			}
		}
		cout << "The minimum revenue amount is $" << minRevenue << " Occured on: " << month << "/" << position << "/" << year << endl;
		cout << endl;
	}
}
//Print Company X stats to a txt file
void functionTen(rev_exp data[], int rOis[], int count)
{
	double revSum = 0;
	double expSum = 0;
	double roi = 4.8;
	for (int i = 0; i < count; i++)
	{
		revSum += data[i].file_revenue;
		expSum += data[i].file_expense;
	}

	double netTotal = revSum - expSum;
	ofstream outfile("C:\\Users\\Dell\\Desktop\\companyxstats.txt");

	outfile << "For company X" << endl;
	outfile << "--------------" << endl;
	outfile << endl;
	outfile << "Profit Total:                      $" << setprecision(9) << revSum << endl;
	outfile << "Expense Total:                     $" << expSum << endl;
	outfile << endl;

	double minRevenue = 99999;
	double month;
	int day = 0;
	int year = 2014;
	int index;
	for (int i = 1; i < count; i++)
	{
		if (data[i].file_revenue < minRevenue)
		{
			minRevenue = data[i].file_revenue;
			index = i + 1;
			day = i + 1;

			//Date
			if (day > 31 && day < 59)
			{
				day -= 31;
			}
			else if (day > 59 && day < 90)
			{
				day -= 59;
			}
			else if (day > 90 && day < 120)
			{
				day -= 90;
			}
			else if (day > 120 && day < 151)
			{
				day -= 120;
			}
			else if (day > 151 && day < 181)
			{
				day -= 151;
			}
			else if (day > 181 && day < 212)
			{
				day -= 181;
			}
			else if (day > 212 && day < 243)
			{
				day -= 212;
			}
			else if (day > 243 && day < 273)
			{
				day -= 243;
			}
			else if (day > 273 && day < 304)
			{
				day -= 273;
			}
			else if (day > 304 && day < 334)
			{
				day -= 304;
			}
			else if (day > 334 && day < 365)
			{
				day -= 334;
			}

			//Months
			//Jan
			if (index > 0 && index < 31)
			{
				month = 01;
			}
			//Feb
			else if (index > 31 && index <= 59)
			{
				month = 02;
			}
			//Mar
			else if (index > 59 && index <= 90)
			{
				month = 03;
			}
			//Apr
			else if (index > 90 && index <= 120)
			{
				month = 04;
			}
			//May
			else if (index > 120 && index <= 151)
			{
				month = 05;
			}
			//June
			else if (index > 151 && index <= 181)
			{
				month = 06;
			}
			//July
			else if (index > 181 && index <= 212)
			{
				month = 07;
			}
			//August
			else if (index > 212 && index <= 243)
			{
				month = 8;
			}
			//Sept
			else if (index > 243 && index <= 273)
			{
				month = 9;
			}
			//Oct
			else if (index > 273 && index <= 303)
			{
				month = 10;
			}
			//Nov
			else if (index > 303 && index <= 333)
			{
				month = 11;
			}
			//Dec
			else if (index > 333 && index <= 365)
			{
				month = 12;
			}
		}
	}
	outfile << "Smallest Revenue:                  $" << minRevenue << "    [" << month << "/" << day << "/" << year << "]" << endl;

	int expDay = 0;
	double maxExpense = 0;
	for (int i = 0; i < count; i++)
	{
		if (data[i].file_expense > maxExpense)
		{
			maxExpense = data[i].file_expense;
			index = i + 1;
			expDay = i + 1;
			//Date
			if (expDay >= 181)
			{
				expDay = expDay - 181;
			}
			//Jan
			if (index > 0 && index < 31)
			{
				month = 01;
			}
			//Feb
			else if (index > 31 && index <= 59)
			{
				month = 02;
			}
			//Mar
			else if (index > 59 && index <= 90)
			{
				month = 03;
			}
			//Apr
			else if (index > 90 && index <= 120)
			{
				month = 04;
			}
			//May
			else if (index > 120 && index <= 151)
			{
				month = 05;
			}
			//June
			else if (index > 151 && index <= 181)
			{
				month = 06;
			}
			//July
			else if (index > 181 && index <= 212)
			{
				month = 07;
			}
			//August
			else if (index > 212 && index <= 243)
			{
				month = 8;
			}
			//Sept
			else if (index > 243 && index <= 273)
			{
				month = 9;
			}
			//Oct
			else if (index > 273 && index <= 303)
			{
				month = 10;
			}
			//Nov
			else if (index > 303 && index <= 333)
			{
				month = 11;
			}
			//Dec
			else if (index > 333 && index <= 365)
			{
				month = 12;
			}
		}
	}
	outfile << "Highest Expense:                   $" << maxExpense << " [" << month << "/" << expDay << "/" << year << "]" << endl;
	outfile << "-----------------------" << endl;
	outfile << endl;
	outfile << "Net Total:                         $" << netTotal << endl;
	outfile << "Return on Investment:              $" << roi << "%" << endl;
	//outfile << "Return on Investment:              " << rOis[count] << "%" << endl;

	outfile.close();
}
// Main function
int main()
{
	int fVs[100];
	int rOis[100];
	int aTrs[100];

	rev_exp data[2000];
	int count = 0;

	//Read the file
	LoadFile(data, count);

	while (true)
	{
		//Menu
		cout << "Welcome to financial calculator v3k!" << endl;
		cout << "What formula would you like to calculate?" << endl;
		cout << "1- Future Value" << endl;
		cout << "2- Return On Investment" << endl;
		cout << "3- Acid Test Ratio" << endl;
		cout << "4- Print Output" << endl;
		cout << "5- Print file contents" << endl;
		cout << "=============================" << endl;
		cout << "6- Search by Revenue" << endl;
		cout << "7- Search by Expense" << endl;
		cout << "8- Print the Maximum" << endl;
		cout << "9- Print the Minimum" << endl;
		cout << "10-Print Company X Stats" << endl;
		cout << "0- exit" << endl;

		int choice;
		cin >> choice;

		//Future Value
		if (choice == 1)
		{
			functionOne(fVs, count);
		}

		//Return On Investment
		else if (choice == 2)
		{
			functionTwo(rOis, count);
		}

		//Acid Test Ratio
		else if (choice == 3)
		{
			functionThree(aTrs, count);
		}

		//Print Output
		else if (choice == 4)
		{
			functionFour(fVs, rOis, aTrs, count);
		}

		//Print the both files
		else if (choice == 5)
		{
			printFile(data, count);
		}

		//Search by Revenue
		else if (choice == 6)
		{
			functionSix(data, count);
		}

		//Search by Expense
		else if (choice == 7)
		{
			functionSeven(data, count);
		}

		//Max function
		else if (choice == 8)
		{
			functionEight(data, count);
		}

		//Min function
		else if (choice == 9)
		{
			functionNine(data, count);
		}
		//Output file
		else if (choice == 10)
		{
			functionTen(data, rOis, count);
		}

		//Exit
		else if (choice == 0)
		{
			cout << "Thank you for using financial calculator v3k! " << endl;
			break;
		}
	}
	system("pause");
	return 0;
}