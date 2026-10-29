
#include <iostream>
using namespace std;
int main()
{
    int grade;
    cout << "Enter your grade (0-100): ";
    cin >> grade;
    if (grade < 0 || grade > 100)
        cout << "invalid grade!\n";

 else if (grade >= 90)
        cout << " Grade: A\n";
        
    else if (grade >= 80)
     cout << " Grade: B\n";
     
    else if (grade >= 70)
        cout << " Grade: C\n";
        
    else if (grade >= 60)
        cout << " Grade: D\n";
        
    else
        cout << " Grade: F\n";
        
    return 0;
}
