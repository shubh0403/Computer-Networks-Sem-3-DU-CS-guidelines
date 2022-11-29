// 6. Simulate Classful Addressing by taking the IP address (Dotted-Decimal notation) as input and print the corresponding class.

#include <iostream>
#include <string>
using namespace std;

char findClass(string str)
{
    string arr;
    int i = 0;
    while (str[i] != '.')
    {
        arr = arr + str[i];
        i++;
    }
    int ip = stoi(str);

    if (ip >= 1 && ip <= 126)
    {
        return 'A';
    }
    else if (ip >= 128 && ip <= 191)
    {
        return 'B';
    }
    else if (ip >= 192 && ip <= 223)
    {
        return 'C';
    }
    else if (ip >= 224 && ip <= 239)
    {
        return 'D';
    }
    else if (ip >= 240 && ip <= 255)
    {
        return 'E';
    }
    else
    {
        return 'I';
    }
}

int main()
{
    string str;
    char ch = 'y';
    do
    {
        cout << "Enter IP : ";
        cin >> str;
        char ipClass = findClass(str);
        if (ipClass == 'I')
        {
            cout << "Invalid IP address" << endl;
        }
        else
        {
            cout << "Given IP address belongs to Class " << ipClass << endl;
        }

        cout << "Do you want to continue(y/n) : ";
        cin >> ch;

        if (ch != 'y')
        {
            break;
        }

    } while (ch == 'y');

    return 0;
}
