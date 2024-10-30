#include <iostream>
using namespace std;

int main()
{
    float percentage;

    cout << "Enter student's percentage: ";
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100)
    {
    cout << "Grade: A" << "\n";
    }
    else if (percentage >= 80 && percentage < 90)
    {
        cout << "Grade: B" << "\n";
    }
    else if (percentage >= 70 && percentage < 80)
    {
        cout << "Grade: C" << "\n";
    }
    else if (percentage >= 60 && percentage < 70)
    {
        cout << "Grade: D" << "\n";
    }
    else if (percentage < 60)
    {
        cout << "Grade: F" << "\n";
    }
    else
    {
        cout << "Invalid percentage entered." << "\n";
    }

    return 0;
}
