#include <iostream>
using namespace std;

int main() {
    int choose = 0;
    long euro = 0, nixe = 0;
    cout << "Willkommen beim Nixenrechner.";

    cout << "Moechtest du Euro in Nixe (1) oder Nixe in Euro (2) umrechnen?" << endl;
    cin >> choose;

    if (choose == 1 || choose == 2) {
        cout << "Gebe die " << (choose == 1 ? "Euro" : "Nixe") << "-Anzahl an:" << endl;
        cin >> ((choose == 1) ? euro : nixe);

        if ((choose == 1 && euro >= 0) || (choose == 2 && nixe >= 0)) {
            cout << "Das sind " << ((choose == 1) ? euro * 42 : nixe / 42) << " " << ((choose == 1) ? "Nixe" : "Euro") << "." << endl;
            cout << "Zum erneuten Rechnen Programm neu starten." << endl;
        } else {
            cout << "Die angegebene Zahl ist negativ. Bitte versuche es erneut und gib eine positive " << ((choose == 1) ? "Euro" : "Nixe") << "-Anzahl an." << endl;
        }
    } else {
        cout << "Ungueltige Angabe. Bitte erneut versuchen." << endl;
    }

    return 0;
}
