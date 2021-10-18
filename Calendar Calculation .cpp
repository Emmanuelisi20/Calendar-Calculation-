// Emmanuel Isidahomen 
// Trying to get the actual days from the mounths
#include <iostream>
using namespace std;

int main()

{

	int month, days, years;

	// Enter Month
	cout << " Enter the month (1-12): " << endl;

	cin >> month;

	// Enter year
	cout << " Enter the Year " << endl;

	cin >> years;

	// if statement for the month you pick 

	if (month == 1)

	{
		cout << 31 << " day" << endl;
	}

	else if (((years % 100 == 0) && (years % 400 == 0)) || (years % 4 == 0))

	{ 

		cout << 28 << "day" << endl;

	}
			

	else if (month == 3)

	{
		cout << 31 << " days" << endl;
	}

	else if (month == 4)

	{
		cout << 30 << " days" << endl;
	}

	else if (month == 5)

	{
		cout << 31 << " days" << endl;
	}

	else if (month == 6)

	{
		cout << 30 << " days" << endl;
	}

	else if (month == 7)

	{
		cout << 31 << " days" << endl;
	}

	else if (month == 8)

	{
		cout << 31 << " days" << endl;
	}

	else if (month == 9)

	{
		cout << 30 << " days" << endl;
	}

	else if (month == 10)

	{
		cout << 31 << " days" << endl;
	}

	else if (month == 11)

	{
		cout << 30 << " days" << endl;
	}

	else if (month == 12)

	{
		cout << 31 << " days" << endl;
	}

	else

	{
		cout << " Dose not have a leap year" << endl;

	}

	system("pause");

	return 0;

}
