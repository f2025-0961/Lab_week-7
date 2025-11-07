#include <iostream>
using namespace std;

void checkEven();
void countDigits(int);
void sumofDigits(int);
bool isDivby3(int);
bool checkPrime(int);
void menu();
int getChoice();
void navigation();
int getNumber();
bool runLoop = true;
void stopProgram();

int main()
{
    do
    {
        menu();
        navigation();
    } while (runLoop);

    return 0;
}

void countDigits(int n)
{
    int counter = 0;
    while (n != 0)
    {
        n = n / 10;
        counter++;
    }
    cout << "Numbr of digits in entered number are:" << counter << endl;
}

void sumofDigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    cout << "Sum of entered number is:" << sum << endl;
    cout << "Is Divided by 3:" << isDivby3(sum);
}

bool isDivby3(int a)
{
    cout << boolalpha;
    if (a % 3 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkPrime(int p)
{
    cout << boolalpha;
    if (p <= 1)
    {
        return false;
    }
    else
    {
        int i = 2;
        while (i <= p / 2)
        {
            if (p % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

void menu()
{
    cout << "\t--------Number Analyzer--------\n\t___Select Choice___\n1.Check Even/Odd\n2.Count Digits\n3.Sum of Digits\n4.Prime Check\n5.Exit" << endl;
}

int getChoice()
{
    int num;
    cout << "Enter choice number Between 1&5:" << endl;
    cin >> num;
    if (num < 1 || num > 5)
    {
        cout << "Invalid input!" << endl;
    }
    return num;
}

int getNumber()
{
    int number;
    cout << "Enter your number:" << endl;
    cin >> number;
    return number;
}

void checkEven()
{
   int a = getNumber();
    string status;
    if (a % 2 == 0)
    {
        status = "Even";
    }
    else
    {
        status = "Odd";
    }
    cout << "Number is " << status << endl;
}

void stopProgram()
{
    runLoop = false;
}

void navigation()
{
    
    switch (getChoice())
    {
    case 1:
        checkEven();
        break;
    case 2:
        countDigits(getNumber());
        break;
    case 3:
        sumofDigits(getNumber());
        break;
    case 4:
        checkPrime(getNumber());
        break;
    case 5:
        stopProgram();
        break;
    default:
        cout << "Invalid Input!" << endl;
        break;
    }
}