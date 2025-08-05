#include <iostream>
#include <string>
using namespace std;

string removeSubstring(string s, string part) {
    while (s.length() != 0 && s.find(part) < s.length()) {
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main() {
    string s, part;
    
    cout << "Enter the main string: ";
    getline(cin, s);

    cout << "Enter the substring to remove: ";
    getline(cin, part);

    string result = removeSubstring(s, part);

    cout << "String after removal: " << result << endl;

    return 0;
}
