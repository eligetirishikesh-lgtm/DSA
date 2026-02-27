#include<iostream>
using namespace std;
int main(){
int choice;
cout << "1.tea\n 2.coffee\n3. Juice\n";
cout <<"Enter your choice : ";
cin >> choice;
switch (choice){
    case 1:
    cout << "you selected Tea ";
    break ;
 case 2:
    cout << "you selected Coffee ";
    break ;
 case 3:
    cout << "you selected Juice ";
    break ;
 default:
 cout<< "invalid choice ";
 break;
}
    return 0;
}