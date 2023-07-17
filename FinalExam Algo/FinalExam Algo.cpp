#include <iostream>
#include <string>
using namespace std;
//isi disini
	const int MAX_MAHASISWA = 100;
	int NIM[MAX_MAHASISWA];
	string nama[MAX_MAHASISWA];
	int tahunMasuk[MAX_MAHASISWA];
	int jumlahMahasiswa = 0;
	string jurusan [MAX_MAHASISWA];
//isi disini
	void tambahMahasiswa(int MAX_MAHASISWA) {
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Jurusan : ";
			getline(cin, jurusan[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}
	}
//isi disini
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Kosong" << endl;
	}
	else {
		cout << "" << endl;
	}
}
void algorithmacariMahasiswaByNIM() {
	if (jumlahMahasiswa == 0) {
		cout << "Kosong" << endl;
	}
	else {
		cout << "" << endl;
	}
}

void algorithmaSortByTahunMasuk() {
	if (jumlahMahasiswa == 0) {
		cout << "Kosong" << endl;
	}
	else {
		cout << "" << endl;
	}
}

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> (pilihan);
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}//2.Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan?//jawab: di sini algoritma yang digunakan yaitu sort dan search//3.Jelaskan perbedaan mendasar antara algorithma stack dan queue! //jawab:stack adalah cara menyimpan dengan cara di timpa dan menggunakan metode LIFO (Last in First out)// lalu queue adalah element paling akhir dengan menggunakan metode FIFO (First in First out)//4.Jelaskan pada saat bagaimana harus menggunakan algorithma stack?//jawab: pada saat implementing function calls, evaluating exprestion//5. a. 5//   b. bener preorder 25 20 10 5 1 8 12 15 22 36 30 28 40 38 48 45 50 