
#include <iostream>
#include <string>
using namespace std;

int main() {
    string vardo_eilute, vardas;
    int remo_dydis;
    cout<<"Iveskite savo varda: ";
    cin>>vardas;
    cout<<"Iveskite remo dydi (sveikasis skaicius, prasidedantis nuo '1'): ";
    cin>>remo_dydis;
    
    
    if (vardas.back() == 'a') {
        vardo_eilute = "* Sveika, ";
    } else if (vardas.back() == 'e'){
        vardo_eilute = "* Sveika, ";
    } else {
        vardo_eilute = "* Sveikas, ";
    }
    
    vardo_eilute += vardas + "! *";
    
    char ilgis = vardo_eilute.size();
    string remu_eilute(ilgis, '*');
    
    string tarpai(ilgis-2, ' ');
    string pustuste_eilute = "*" + tarpai + "*";
    
    int eiluciu_skaicius = remo_dydis * 2 + 3;
    string kortele[eiluciu_skaicius];
    kortele[0] = remu_eilute;
    kortele[eiluciu_skaicius - 1] = remu_eilute;
    
    
    for(int i=1; i<=eiluciu_skaicius - 2; i++)
    {
        if (i!= eiluciu_skaicius / 2)
        {
            kortele[i] = pustuste_eilute;
            kortele[eiluciu_skaicius / 2] = vardo_eilute;
        }
    }
    
    for(int i=0; i < eiluciu_skaicius; i++){
        cout<< kortele[i] <<endl;
    }
}
