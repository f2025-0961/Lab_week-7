#include <iostream>
using namespace std;

void countDigits(int);
void sumofDigits(int);
bool isDivby3(int);
bool checkPrime(int);

int main()
{
    cout << boolalpha;
    int num;
    cout << "Enter number:" << endl;
    cin >> num;
    countDigits(num);
    sumofDigits(num);
    bool checkP;
    checkP = checkPrime(num);
    cout << "is Prime:" << checkP;
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
    if (p <= 1)
    {
        return false;
    }
    else
    {
        int i = 2;
        while (i == p / 2)
        {
            if (p % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}