#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double epsilon, x, sum=1;
    int64_t fact=1;
    int n=1;

    cin >> x;
    cin >> epsilon;

    while (epsilon < fabs((pow(x, n)/fact))) {
        fact = fact * n;
        sum = sum + (pow(x, n)/fact);
        n++;
    }

    cout << sum << endl;
    cout << pow(exp(1), x);
    return 0;
}
