#include <iostream>

using namespace std;

int age;

int main()
{
    cout << "How old are You? ";
    cin >> age;

    if (age < 18)
    {
        cout << "You`re under age ";
    }
    else if ((age >= 18) && (age<35))
    {
        cout << "You`re of age, but You can`t be our president";
    }
    else
    {
        cout << "You`re of age and You can be our president!";
    }
    return 0;
}
