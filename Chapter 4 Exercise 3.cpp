#include <iostream>
using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter the month (1-12): ";
    cin >> month;

    cout << "Enter the day (1-31): ";
    cin >> day;

    cout << "Enter a two-digit year (0-99): ";
    cin >> year;

  
    if (month < 1 || month > 12 ||
        day < 1 || day > 31 ||
        year < 0 || year > 99)
    {
        cout << "Invalid date input." << endl;
    }
    else
    {

        if (month * day == year)
        {
            cout << "The date is magic!" << endl;
        }
        else
        {
            cout << "The date is not magic." << endl;
        }
    }

    return 0;
}
