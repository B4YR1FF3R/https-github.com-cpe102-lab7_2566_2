#include <iostream>
using namespace std;

int main(){
    //input name
    cout <<  "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    string name;
    getline(cin,name);
    //input student ID
    cout << "Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    int ID;
    cin >> ID;
    ID = ID/10000000;
    cout << "Fahsai: I think you may be GEAR " << ID-12 << ". I have a free movie ticket for you.\n";
    //input movie
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    cin.ignore();
    string movie;
    getline(cin,movie);
    //input day
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    string Day;
    getline(cin,Day);
    cout << "Fahsai: " << Day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n";
    //input something to tell
    string x;
    getline(cin,x);
    cout << "Fahsai: 555+ see you " << Day << ". Bye Bye \(^ ^)/";
}