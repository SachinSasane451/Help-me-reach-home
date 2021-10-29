#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main (){
  srand(time(0));
  const int size=50;
  char x;
  int position = size /5;
  string n;
  cout<<"enter player name : \n";
  cin>> n;
  cout<<endl<<endl;
  cout<<"****************************** WELCOME "<<n<<" TO DRUNKEN MAN ******************************"<<endl;
  cout<<endl;
  cout<<"**************************************************/___________ by MASTER SACHIN SASANE /****"<<endl;
  cout<<endl<<endl;
  cout << "Enter any letter to start the race :\n ";
  cin>> x;
  cout<<endl;
//   cout<<x<<endl;
  while (true) {
    cout << "|START|" ;
    for (int i=0; i<size;i++) {
      if (i == position) 
        cout << x;
      else cout << " ";}
    cout << "|HOME|" << endl;
    int move= rand()%3 -1;
    position = position + move; 
    if (position <1) {cout << "SORRY" <<n<< "U LOSE! TRY AGAIN" <<endl; break;}
    if (position >size-1) {cout << "WHOOO!" <<n<<"CONGRATS U WON THE RACE" <<endl; break;}
    for(int sleep=0; sleep< 1000000 ; ++ sleep);
  }   
  return 0; 
}