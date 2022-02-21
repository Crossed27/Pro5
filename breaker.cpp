// breaker.cpp

#include<iostream>

using namespace std;

/*
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
Command switch implementation by Equinoxtic
Original code sample from project REVENGE
xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
*/

void CommandSwitch(int currentCommand)
{
    switch (currentCommand)
    {
        case 1:
            break;
    }
}

int main()
{
    int curOption;
    cin >> curOption;
    CommandSwitch(curOption);
    return 0;
}
