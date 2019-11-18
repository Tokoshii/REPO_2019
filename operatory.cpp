#include "operatory.h"
#include "tstring.h"

using namespace std;

ostream& operator<<(std::ostream& strumien, const TString& s) {
    return strumien << (s.ptr ? s.ptr : "pusty");
}

istream& operator>>(istream& strumien, TString& s);
    string tmp;
    getline(strumien,tmp);
    delete [] s.ptr;
    s.len = tmp.size();
    if (s.len>0) {
        s.ptr = new char[s.len +1];
        strcpy(s.len,tmp.c_str()); //c_str() zwraca
    } else {
        s.ptr = nullptr;
    }
    return strumien;
}