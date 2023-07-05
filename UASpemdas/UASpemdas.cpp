#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	void setY(int b) {
		this->y = b;
	}
	int getY() {
		return y;
	}
};
class Lingkaran :public bidangDatar {
public:
	void input() {
		cout << "masukkan jejari :";
		int r;
		cin >> r;
		setX(r);
	}
	float Luas(int r) {
		return 3.14 * r * r;
	}
	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
	void cekUkuran() {
		float keliling = Keliling(getX());
		if (keliling > 40)
			cout << "ukuran lingkaran besar" << endl;
		else if (keliling < 20)
			cout << "ukuran lingkaran sedang" << endl;
		else if (keliling < 10)
			cout << "ukurannya lingkaran kecil" << endl;
	}
};

class Persegipanjang :public bidangDatar {
public:
	void input() {
		cout << "masukkan panjang :";
		int p;
		cin >> p;
		setX(p);
		cout << "masukkan lebar :";
		int l;
		cin >> l;
		setY(l);
	}
	float Luas(int p, int l) {
		return p * l;
	}
	float Keliling(int p, int l) {
		return 2 * (p + l);
	}
	void cekUkuran() {
		float keliling = Keliling(getX(), getY());
		if (keliling > 40)
			cout << "ukuran persegipanjang besar" << endl;
		else if (keliling < 20)
			cout << "ukuran persegipanjang sedang" << endl;
		else if (keliling < 10)
			cout << "ukuran persegipanjang kecil" << endl;
	}
};
int main() { 
	char mengulang;
	
	do {
		cout << "lingkaran dibuat" << endl;
		Lingkaran lk;
		lk.input();
		cout << "luas lingkaran = " << lk.Luas(lk.getX()) << endl;
		cout << "keliling lingkaran = " << lk.Keliling(lk.getX()) << endl;
		lk.cekUkuran();

		cout << "persegipanjang dibuat" << endl;
		Persegipanjang pp;
		pp.input();
		cout << "luas persegipanjang = " << pp.Luas(pp.getX(), pp.getY()) << endl;
		cout << "keliling persegipanjang = " << pp.Keliling(pp.getX(), pp.getY()) << endl;
		pp.cekUkuran();

		cout << "Apakah anda ingin mengulang program? (Y/N): ";
		cin >> mengulang;

	} while (mengulang == 'Y');

	return 0;
}