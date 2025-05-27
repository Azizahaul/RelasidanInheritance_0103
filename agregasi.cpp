#include <iostream>
#include <vector>
using namespace std;

#include "anak.hpp"
#include "ibu.hpp"

int main(){
    ibu* varibu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varanak1 = new anak("tono");
    anak* varanak2 = new anak("rini");
    anak* varanak3 = new anak("dewi")

    varIbu->tambahAnak(varanak1);
    varibu->tambahAnak(varanak2);
    varibu2->tambahAnak(varanak3);
    varibu2->tambahAnak(varanak1);

    varibu->cetakAnak();
    varibu->cetakAnak();


}