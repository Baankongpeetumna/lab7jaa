#include <iostream>
#include<string>
using namespace std;

int main() {
    int S;
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n" ;
    string N;
    cout << "?????: ";
    getline(cin,N);
    cout << "Fahsai: Wow!!! " << N <<" is a really cool name."<<"\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? \n" ;
    cout << N << ": ";
    cin >> S;
    cin.ignore();
    while (S >= 100) {
        S /= 10; 
    }
    int Gear = S - 12;
    cout << "Fahsai: I think you may be GEAR " << Gear << "."<< " I have a free movie ticket for you. \n";
    cout << "Fahsai: Let's go to the cinema together!!! \n";
    
    cout << "Fahsai: What movie do you want to watch? \n";
    
    string Mv;
    cout << N << ": ";
    getline(cin,Mv);
    
    cout << "Fahsai: So....which day are you free to go with me? \n";
    
    string D;
    cout << N << ": ";
    getline(cin,D);
    
    cout << "Fahsai: " << D << "....that is OK!!! I'm looking forward to watching " << Mv << " with you. \n";
    string B;
    cout << N << ": ";
    getline(cin,B);
    cout << "Fahsai: 555+ see you " << D << "." << " Bye Bye \\(^ ^)/";
    
    
}