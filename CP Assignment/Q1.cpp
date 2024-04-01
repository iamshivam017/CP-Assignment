#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> numbers;
    double sum = 0;
    int mode = 0, max_count = 0;

    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
        sort(numbers.begin(), numbers.end());
        sum += num;

        int count = 1;
        if (i > 0 && num == numbers[i - 1]) {
            count += 1;
        }
        if (count > max_count) {
            max_count = count;
            mode = num;
        }

        int min_num = numbers[0];
        int max_num = numbers[i];
        double avg = sum / (i + 1);

        cout << "min, max, sum, average and mode after addition of " << num << " is " << min_num << ", " << max_num << ", " << sum << ", " << avg << ", " << mode << "." << endl;
    }

    return 0;
}