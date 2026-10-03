#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N, k, i;
    double P;

    cout << "N = "; cin >> N;
    cout << "k = "; cin >> k;

    P = 1;
    i = k;
    while (i <= N){
        P *= ((1.0 * k / i) + (1.0 * i / N));
        i++;
}
    cout << "P = " << P << endl;
    
    P = 1;
    i = k;
    do {
        P *= ((1.0 * k / i) + (1.0 * i / N));
        i++;
    } while (i <= N);
    cout << "P = " << P << endl;

    P = 1;
    for (i = k; i <= N; i++){
        P *= ((1.0 * k / i) + (1.0 * i / N));
    }
    cout << "P = " << P << endl;

    P = 1;
    for (i = N; i >= k; i--){
        P *= ((1.0 * k / i) + (1.0 * i / N));
    }
    cout << "P = " << P << endl;
    
    return 0;
}