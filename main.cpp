
#include <iostream>
#include <string>
using namespace std;

int main() {
    string vardo_eilute, vardas;
    
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    
    if (vardas.back() == 'a') {
        vardo_eilute = "* Sveika, ";
    } else if (vardas.back() == 'e'){
        vardo_eilute = "* Sveika, ";
    } else {
        vardo_eilute = "* Sveikas, ";
    }
    
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
