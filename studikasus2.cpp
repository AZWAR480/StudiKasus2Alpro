#include <iostream>
#include <conio.h>
using namespace std;


int kode,harga,jumlah,total,dibayar;
char lagi;

int main ()
{
awal:
    
    cout<<"+----------------------------------+"<<endl;
    cout<<"|            List Barang           |"<<endl;
    cout<<"+----------------------------------+"<<endl;
    cout<<"| 1. Roti Gandum        Rp. 23.000 |"<<endl;
    cout<<"| 2. Air Mineral        Rp. 2.000  |"<<endl;
    cout<<"| 3. Shampoo Sunsilk    Rp. 20.000 |"<<endl;
    cout<<"| 4. Teh Botol          Rp. 5.000  |"<<endl;
    cout<<"| 5. Doritos            Rp. 15.000 |"<<endl;
    cout<<"| 6. Buku Sidu(36 lmbr) Rp. 21.000 |"<<endl;
    cout<<"| 7. Pulsa              Rp. 25.000 |"<<endl;
    cout<<"| 8. Pensil 2B (12pcs)  Rp. 10.000 |"<<endl;
    cout<<"| 9. Pulpen (12pcs)     Rp. 17.500 |"<<endl;



    cout<<"Masukkan Pilihan Anda = ";
    cin>>kode;

    switch(kode)
    {

    case 1 :
        cout<<"Roti Gandum"<<endl;
        harga=23000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR = ";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 2 :
        cout<<"Air Mineral"<<endl;
        harga=2000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 3 :
        cout<<"Shampoo Sunsilk"<<endl;
        harga=20000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 4 :
        cout<<"Teh Botol"<<endl;
        harga=5000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 5 :
        cout<<"Doritos"<<endl;
        harga=15000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 6 :
        cout<<"Buku Sidu(36 lmbr)"<<endl;
        harga=21000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 7 :
        cout<<"Pulsa"<<endl;
        harga=25000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 8 :
        cout<<"Pensil 2B (12pcs)"<<endl;
        harga=10000;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        cout<<"DIBAYAR =";
        cin>>dibayar;
        cout<<endl;
        cout<<"Kembalian ="<<dibayar-total<<endl;
        break;
    case 9 :
        cout<<"Pulpen (12pcs)"<<endl;
        harga=17500;
        cout<<"Masukkan Jumlah =";
        cin>>jumlah;
        cout<<endl;
        total = jumlah*harga;
        cout<<"Total harga yaitu ="<<total<<endl;
        break;
    default:
    cout<<"Kode tersebut tidak ada dalam list"<<endl;
    }
    cout<<"Anda Ingin Mengulangi Lagi (Y?N): ";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if (lagi=='N' || lagi=='n'){
            goto selesai;
        }
selesai:
	cout<<"---------------------------------"<<endl;
	
    cout<<"Terima Kasih Atas Kunjungan Anda ";
    
getch();

return 0;
}
