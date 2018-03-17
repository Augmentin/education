#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    int g;
    ifstream input("input.txt");
    getline(input,line);
    cout << line;
    cout << "Hello";
    return 0;
}