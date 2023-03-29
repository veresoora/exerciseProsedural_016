#include <iostream>
using namespace std;

int n, diterima = 0, gagal = 0;
float math[20], bahasa[20], rarata[20];
string siswa[20], hasil[20];

float rata(float a, float b) {		// Menghitung rata-rata nilai
	return (a + b) / 2;
}

string status(float r, float n) {
	if (r >= 70 or n >= 80) {
		return "Diterima";
	}
	else {
		return "Ditolak";
	}
}

void input() {
	while (true)
		cout << "\nMasukkan jumlah siswa : ";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else
		{
			cout << "Jumlah siswa maks";
		}
}

cout << endl;
cout << "================================" << endl;
cout << "Masukkan nama dan nilai siswa : " << endl;
cout << "================================" << endl;

for (int i = 0; i < n; i++)
{
	cout << (i + 1) << ". " << "Masukkan nama siswa : ";
	cin >> siswa[i];
	cout >> "Masukkan nilai math : ";
	cin >> math[i]
	cout << "Masukkan nilai bahasa : ";
	cin >> bahasa[i];
	rerata[i] = rata(math[i], bahasa[i])
}

void status() {
	for (int j = 0; j < n; j++) {
		if (math[j] + bahasa[j] / 2 >= 70 || math[j] > 80) {
			diterima++;
		}
		else {
			tidak diterima++;
		}
	}
}

void display() {
	cout << endl;
	cout << "==========" << endl;
	cout << "data siswa" << endl;
	cout << "Nama\t\Status\t\tnilai matematika\t\tbahasa" << endl;

	for (int j = 0; j < n; j++) {
		cout << siswa[j] << "\t\t" << status(rerata[j], math[j]) << "\t\t" << math[j] << "\t\t\t\t" << bahasa[j] << endl;
	}
}

int main() {
	input();
	display();
	status1();
	cout << "Jumlah yang diterima : " << diterima << endl;
	cout << "Jumlah yang tidak diterima : " << tidak diterima << endl;
}