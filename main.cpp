#include <iostream>
using namespace std;

int main () {
    string nome;
    int i, n;
    cout << "Quanti atleti ci sono in gara?" << endl;
    cin >> n;
    for (i = 0; i <= n; i++) {
        cout << "Inserisci il nome dell'atleta" << endl;
        cin >> nome;
        cout << "ciao" << nome << endl;
        }
    return 0;
    
    int n, m, i;
    cout << "elenco i numeri da N a M con passo 2" << endl;
    cout << "Inserisci N" << endl;
    cin >> n;
    cout << " inserisci M" << endl;
    cin >> m;
    for  (i = m; i <= n; i += 2) {
        cout  << i  << endl;
    }
     return 0;
}

int i, n, contpari, contdispari, restodue, x;
do {
    cout<<"quanti numeri da generare?";
    cin>>n;
} while (n<0);
contpari=0;
contdispari=0;
i=0;
for (i=0; i<= n; i++) {
    x=rand() % 1001;
    restodue=x%2;
    if(restodue==0) {
        contpari=contpari+1;
    } else {
        contdispari=contdispari+1;
    }
    cout <<i+1<<"numero generato"<<x<<;
}
cout<<"sono stati generati"<<contpari<<"numeri pari e"<<contdispari<<"numeri dispari";
return=0; 