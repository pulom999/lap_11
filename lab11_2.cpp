#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
    ifstream source;
    ofstream dest;
    source.open("cheerbook.txt");
    dest.open("cheerbook_copy.txt");

    cout << "-------------------- BOOM ---------------------" << '\n';
    string textline;
    while (getline(source,textline)){
        cout << textline << '\n';
    }
    source.close();
    source.open("cheerbook_copy.txt");
    while (getline(source,textline)){
        cout << textline << '\n';
    }
    cout << "-------------------- HA!! ---------------------" << '\n';
    source.close();
    dest.close();
    return 0;
}