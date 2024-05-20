#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

public:
    // Constructor
    mahasiswa(int pId, string pNama, float pNilai) : id(pId), nama(pNama), nilai(pNilai) {}

    // Destructor
    ~mahasiswa() {
        cout << "id     = " << id << endl;
        cout << "Nama   = " << nama << endl;
        cout << "Nilai  = " << nilai << endl;
    }
};

int main() {
    // Creating an object of mahasiswa with the correct number of arguments
    mahasiswa mhs(12, "Asroni", 90.5);

    return 0;
}
