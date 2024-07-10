
#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
private:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
   
    MasukUniversitas() : uangPendaftaran(0), uangSemesterPertama(0), uangBangunan(0), totalBiaya(0) {}

    virtual void namaJalurMasuk() = 0;
    virtual void hitungTotalBiaya() = 0;
    virtual void tampilkanTotalBiaya() = 0;
    virtual void input() = 0;

    void setUangPendaftaran(int nilai) 
    { this->uangPendaftaran = nilai; }
    int getUangPendaftaran() 
    { return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) { this->uangSemesterPertama = nilai; }
    int getUangSemesterPertama()  { return uangSemesterPertama; }

    void setUangBangunan(int nilai) { this->uangBangunan = nilai; }
    int getUangBangunan()  { return uangBangunan; }

    void setTotalBiaya(int nilai) { this->totalBiaya = nilai; }
    int getTotalBiaya()  { return totalBiaya; }
};

class SNBT : public MasukUniversitas {
public:
    void namaJalurMasuk() override {
        cout << "Jalur Masuk: SNBT" << endl;
    }

    void hitungTotalBiaya() override {
        int total = getUangPendaftaran() + getUangSemesterPertama() + getUangBangunan();
        setTotalBiaya(total);
    }

    void tampilkanTotalBiaya() override {
        cout << "Total Biaya: " << getTotalBiaya() << endl;
        if (getTotalBiaya() > 10000000) {
            cout << "Kategori: Mahal" << endl;
        }
        else if (getTotalBiaya() > 5000000) {
            cout << "Kategori: Sedang" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
        }
    }

    void input() override {
        int uangPendaftaran, uangSemesterPertama, uangBangunan;
        cout << "Masukkan Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        setUangPendaftaran(uangPendaftaran);

        cout << "Masukkan Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
        setUangSemesterPertama(uangSemesterPertama);

        cout << "Masukkan Uang Bangunan: ";
        cin >> uangBangunan;
        setUangBangunan(uangBangunan);
    }
};

class SNBP : public MasukUniversitas {
public:
    void namaJalurMasuk() override {
        cout << "Jalur Masuk: SNBP" << endl;
    }

    void hitungTotalBiaya() override {
        int total = getUangPendaftaran() + getUangSemesterPertama();
        setTotalBiaya(total);
    }

    void tampilkanTotalBiaya() override {
        cout << "Total Biaya: " << getTotalBiaya() << endl;
        if (getTotalBiaya() > 10000000) {
            cout << "Kategori: Mahal" << endl;
        }
        else if (getTotalBiaya() > 5000000) {
            cout << "Kategori: Sedang" << endl;
        }
        else {
            cout << "Kategori: Murah" << endl;
        }
    }

    void input() override {
        int uangPendaftaran, uangSemesterPertama;
        cout << "Masukkan Uang Pendaftaran: ";
        cin >> uangPendaftaran;
        setUangPendaftaran(uangPendaftaran);

        cout << "Masukkan Uang Semester Pertama: ";
        cin >> uangSemesterPertama;
        setUangSemesterPertama(uangSemesterPertama); 
    }
};

int main() {
    cout << "Pilih Jalur Masuk Universitas: " << endl;
    cout << "1. SNBT" << endl;
    cout << "2. SNBP" << endl;
    cout << "Masukkan pilihan (1/2): ";
    cin >> pilihan

    jalurMasuk->namaJalurMasuk();
    jalurMasuk->input();
    jalurMasuk->hitungTotalBiaya();
    jalurMasuk->tampilkanTotalBiaya();

    delete jalurMasuk;
    return 0;
}
