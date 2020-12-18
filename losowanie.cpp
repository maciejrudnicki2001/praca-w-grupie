#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main() {
    int zmienna;
    int podana;
    cout << "podaj liczbe";
    cin >> podana;
    zmienna = (rand()%50)+1;
    cout << zmienna;
    int liczba = abs(zmienna-podana);  
    if (liczba < 6) {
    cout << "Ciepło" << endl;
    
    }
    while ( zmienna != podana ) {
        cout << "podaj liczbe: ";
        cin >> podana;
        int liczba = abs(zmienna-podana);  
        if (liczba < 6) {
            
            cout << "Ciepło" << endl;
            cout << liczba << endl;
            
            
        
        }
    }
    cout << "Brawo zgadles liczba to:"; 
    cout << zmienna;    
        
    





    return 0;
}