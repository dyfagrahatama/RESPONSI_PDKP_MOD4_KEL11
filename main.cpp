#include<iostream>
#include<string.h>

using namespace std;


    void encrypt()
    {
        string plainteks, cipherteks;
        int i;
        int k=11;
        char c;

        cout<<"Data Harus Huruf Kapital Ya "<<endl;
        cout<<"Ketikan Kata Yang Ingin di Encrypt : ";
        cin.ignore(); getline (cin, plainteks);
        cout<<"Jumlah Key Adalah 11 Karena Kita Kelompok 11 "<<endl;
        cipherteks = " ";

        for (i=0; i < plainteks.length(); i++)
        {
            c = plainteks[i];
            if (isalpha(c))
            {
                c = c - 65;
                c = (c + k) % 26;
                c = c + 65;
            }
            cipherteks = cipherteks + c;
        }
        cout << "Hasil Encryption Adalah : "<<cipherteks<<endl;
    }

    void decrypt()
    {
        string plainteks, cipherteks;
        int i;
        int k=11;
        char c;

        cout<<"Data Harus Huruf Kapital Ya "<<endl;
        cout<<"Ketikan Kode Enkripsi Anda : ";
        cin.ignore(); getline (cin, cipherteks);
        cout<<"Jumlah Key Adalah 11 Karena Kita Kelompok 11 "<<endl;
        plainteks = "";

    for (i=0; i<cipherteks.length(); i++)
        {
            c = cipherteks[i];
            if (isalpha(c))
            {
                c = c - 65;
                if (c - k < 0)
                c = 26 + (c - k);
                else
                c = (c - k) % 26;
                c = c + 65;
                c = tolower(c);
            }
            plainteks = plainteks + c;
        }
        cout<<"Hasil Dari Decryption Adalah : "<<plainteks<<endl;
    }

    void tampilan(){
        cout<<"==============================================================="<<endl;
        cout<<"Selamat Datang di Program Encrypt dan Decrypt Kelompok 11"<<endl;
        cout<<"   Disini Kami Menggunakan Key 11 Sesuai Kelompok Kami   "<<endl;
        cout<<"             Anggota Kami yang Terdiri Dari"<<endl;
        cout<<"             1. Hibatullah Dyfa Grahatama"<<endl;
        cout<<"             2. Muhammad Dhiva Pradigta"<<endl;
        cout<<"             3. Muhammad Rafi Anwar"<<endl;
        cout<<"             4. Muhammad Dzakwan Fakhri Habibie"<<endl;
        cout<<"==============================================================="<<endl;
    }
    void samaDengan(){
        cout<<"---------------------------------------------------------"<<endl;
    }

int main ()
{

    int pil;
    bool stop;
    stop = false;

    while (!stop)
    {
        tampilan();
        cout<<endl;

        samaDengan();
        cout<<"Daftar Pilihan: "<<endl;
        cout<<"1. Encryption "<<endl;
        cout<<"2. Decryption "<<endl;
        cout<<"3. Keluar "<<endl;
        cout<<"Pilih menu : "; cin>>pil;
        samaDengan();

        switch(pil)
        {
            case 1 : encrypt();break;
            case 2 : decrypt();break;
            case 3 : stop = true;break;
        }
    }
    return 0;
}
