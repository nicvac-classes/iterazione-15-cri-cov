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

int main () {
    int n, m, i;
    cout<<"elenco i numeri da N a M con passo 2";
    cout<<"inserisci N";
    cin>>n;
    cout<<"inserisci M";
    cin>>m;
    for (i=m; i<=n; i += 2) {
        cout <<i<<;
    }
    return=0;
}