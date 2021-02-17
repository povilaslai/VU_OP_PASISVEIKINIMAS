
#include <iostream>
#include <string>
using namespace std;

int main() {
    string vardo_eilute, vardas;
    vardo_eilute = "* Sveiki, ";
    
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    vardo_eilute += vardas + "! *";
    
    char plotis = vardo_eilute.size();
    string pirma_eilute(plotis, '*'), paskutine_eilute(plotis, '*');
    
    string tarpai(plotis-2, ' ');
    string antra_eilute = "*" + tarpai + "*";
    string ketvirta_eilute = "*" + tarpai + "*";
    
    cout<<pirma_eilute<<endl
    <<antra_eilute<<endl
    <<vardo_eilute<<endl
    <<ketvirta_eilute<<endl
    <<paskutine_eilute<<endl;
}
