#include <iostream>
#include <clocale>
#include <string>
#include<istream>
using namespace std;

struct Forvard
{
    char Surname[64];
    char Amplua[64];
    int Age;
    int Game;
    int Gol;
   
};

int main()
{

    const int N = 3;
    Forvard group[N];

    for (int i = 0; i < N; i++)
    {
        cout << "\nProfile [" << i+1 << "]" << endl;
        cout << "\nSurname: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(group[i].Surname, 64);
        cout << "\nAmplua: ";
        cin.ignore(std::cin.rdbuf()->in_avail());
        cin.getline(group[i].Amplua, 64);
        cout << "\nAge: ";
        cin >> (group[i].Age);
        cout << "\nNumber of games ";
        cin >> (group[i].Game);
        cout << "\nNumber of goals ";
        cin >> (group[i].Gol);    
        cin.clear();
    }
    for (int i = 0; i < N; i++)
    {

        cout << "\n" << endl;
        cout << "Profile [" << i + 1 << "]" << endl;
        cout << "\nSurname: " << group[i].Surname << endl;
        cout << "\nAmplua: " << group[i].Amplua << endl;
        cout << "\nAge: " << group[i].Age << endl;
        cout << "\nNumber of games: " << group[i].Game << endl;
        cout << "\nNumber of goals: " << group[i].Gol << endl;

    }
    int best=5;
    for (int i = 0; i < N; i++)
    {
        
        if (group[i].Game < best)
        {      
            best = i;
         cout << "\nResult" << endl;
         cout << "\nSurname: " << group[best].Surname << endl;
         cout << "\nAmplua: " << group[best].Amplua << endl;
         cout << "\nAge: " << group[best].Age << endl;
        cout << "\nNumber of games: " << group[best].Game << endl;
        cout << "\nNumber of goals: " << group[best].Gol << endl;
         }
        else 
        {
            cout <<"\nResult"<< "\nPlayer not found" << endl;
        }

    }
}
