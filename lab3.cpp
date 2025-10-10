// Online C++ compiler to run C++ program online
#include <iostream>
#include<iomanip>
using namespace std;
int main() {
float price1,price2,total;
int Q1,Q2; 
string p1Name,p2Name;
    cout<<"enter the p1Name"<<endl;
             cin>>p1Name;
                cout<<"enter the Q1"<<endl;
                          cin>>Q1;
                            cout<<"enter the price1"<<endl;
                                    cin>>price1;
                                   

cout<<left<<setw(20)<<"p1Name"<<right<<setw(20)<<p1Name<<endl;
cout<<left<<setw(20)<<"Q1"<<right<<setw(20)<<Q1<<endl;
cout<<left<<setw(15)<<"price1"<<right<<setw(20)<<price1<<endl;

        cout<<"enter the p2Name"<<endl;
             cin>>p2Name;
                 cout<<"enter the Q2"<<endl;
                            cin>>Q2;
                               cout<<"enter the price2"<<endl;
                                      cin>>price2;
total=(Q1+Q2)*(price1+price2);
                                      
cout<<left<<setw(20)<<"p2Name"<<right<<setw(20)<<p2Name<<endl;
cout<<left<<setw(20)<<"Q2"<<right<<setw(20)<<Q2<<endl;
cout<<left<<setw(15)<<"price2"<<right<<setw(20)<<price2<<endl;
cout<<left<<setw(15)<<"total"<<right<<setw(20)<<total<<endl;

    return 0;
}