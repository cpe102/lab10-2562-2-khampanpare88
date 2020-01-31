#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;
int main(){
    string grade[9]={"A","B+","B","C+","C","D+","D","F","W"};
    string x;
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int i=rand()%9;
    cout << "You will get "<< grade[i] <<" in this 261102.";
    return 0;
}














// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
