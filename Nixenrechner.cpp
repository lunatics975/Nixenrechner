//dies ist ein nixenrechner von euro in nixe und andersherum
//bitte gebe die zahlen unereinabder ein, damit es funktioniert
//also 1: euro -> nixe
//also 2: nixe -> euro
//dann anzahl der nixe/euro
#include <iostream>
using namespace std;
long euro = 0;
long nixe = 0;
int choose = 0;
int main() {
cout<<"Willst du Euro in Nixe (1)?"<<endl;
cout<<"oder"<<endl;
cout<<"Nixe in Euro (2)?"<<endl;
cin >> choose;
if (choose == 1){
    cout<<"Gebe die Euroanzahl an:"<<endl;
    cin >> euro;
    nixe = euro*42;
    cout<<"Das sind "<< nixe << " Nixe."<<endl;
    cout<<"Zum erneutem Rechnen Programm neu starten."<<endl;
}

if (choose == 2){
    cout<<"Gebe die Nixeanzahl an:" <<endl;
    cin >> nixe;
    euro=nixe/42;
    cout << "Das sind " << euro << " Euro."<<endl;
    cout<<"Zum erneutem Rechnen Programm neu starten."<<endl;
}
	return 0;
}
