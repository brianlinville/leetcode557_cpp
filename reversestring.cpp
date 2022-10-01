#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
    int len = s.length();

    string words = "";
    int stringPosition = 0;
    int k = 0;

    for (k = 0; k < len; k++) {
        if (s[k] == 32) {
            words = words + " ";
            stringPosition = k + 1;
        }
        else {
            words.insert(stringPosition, s , k, 1);
        }
    }

    return words;
    }
};


int main() {
    string s = "hello world and good night";
    Solution words;
    
    cout << words.reverseWords(s) << endl;

}




