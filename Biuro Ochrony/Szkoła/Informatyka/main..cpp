#include <windows.h> 
#include <iostream> 
#include <stdlib.h> 
using namespace std; 
int main() 
{ 
system("chcp 1250");
HANDLE hOut; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+------------------------------------------+"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY);
cout << "!   kolor            !   numer koloru      !"  << endl << endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "!   wszyst kolory    !   ���..........��.  !"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "!   bia�y            !   15 oraz 7         !"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14| 
FOREGROUND_INTENSITY); 
cout << "!   ��ty            !   14 oraz 6         !"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13| 
FOREGROUND_INTENSITY); 
cout << "!   purpurowy        !   13 oraz 5         !"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY); 
cout << "!   czerwony         !   12 oraz 4         !"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11| 
FOREGROUND_INTENSITY); 
cout << "!   jasnoniebieski   !   11 oraz 3         !"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| 
FOREGROUND_INTENSITY); 
cout << "!   zielony          !   10 oraz 2         !"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9| 
FOREGROUND_INTENSITY); 
cout << "!   ciemnoniebieski  !   9 oraz 1          !"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| 
FOREGROUND_INTENSITY); 
cout << "!   szary            !   8 oraz 0          !"  <<endl <<endl;
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15| 
FOREGROUND_INTENSITY); 
cout << "+--------------------!---------------------!"  <<endl <<endl;
system("PAUSE"); 
return 0; 
}
