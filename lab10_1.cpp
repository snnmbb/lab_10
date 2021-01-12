#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int main()
{
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    
    int i;
    i=rand()%9;
    string grade[9] ={"A","B+","B","C+","C","D+","D","F","W"};
    
    cout<<"You will get "<< grade[i] <<" in this 261102.";
}






