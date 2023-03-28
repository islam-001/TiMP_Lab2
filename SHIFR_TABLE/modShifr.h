#pragma once
#include <vector>
#include <string>
#include <map>

using namespace std;

class modShifr {
    private:
        int key;
        inline int getValidKey(int key,const string & Text);
        inline string getValidOpenText(string & s);
        inline string getValidCipherText(string & s, string & open_text);
    public:
        modShifr() = delete;
        modShifr(int skey, string text);
        string encryption(string &text);
        string transcript(string &text, string &open_text);
};

class cipher_error: public invalid_argument {
    public:
        explicit cipher_error (const string& what_arg):
        invalid_argument(what_arg) {}
        explicit cipher_error (const char* what_arg):
        invalid_argument(what_arg) {}
};