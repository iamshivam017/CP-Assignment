
#include <iostream>
using namespace std;
int main() {
    int a, b, m;
    cout << "Enter the values for a, b and m: ";
    cin >> a >> b >> m;

    int result = 1;
    for (int i = 0; i < b; i++) {
        result = (result * a) % m;
    }

    cout << "The result of (a^b) % m is: " << result;

    return 0;
}
