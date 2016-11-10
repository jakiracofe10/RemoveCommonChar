#include <iostream>
#include <vector>

using namespace std;

int main() {
    string input1, input2;
    cin >> input1 >> input2;
    vector<int> removals(256,0);
    for (auto i : input2) {
        while (input1.find(i) != string::npos) {
            int index = input1.find(i);
            input1.erase(index,1);
        }
    }
    cout << input1;
    return 0;
}