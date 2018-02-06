#include <iostream>

class sinhvien
{
protected:
  int mssv;
  int diemkt1;
  int diemkt2;
public:
  void nhapDiemKiemTra()
  {
    std::cout << "Nhap MSSV: ";
    std::cin >> mssv;
    std::cout << "Nhap hai diem: ";
    std::cin >> diemkt1 >> diemkt2;
  }
};

class gdthechat
{
protected:
  int diemtc;
public:
  void nhapdiemgdtc()
  {
    std::cout << "\nNhap diem GDTC: ";
    std::cin >> diemtc;
  }
};

class thongtinsv : public sinhvien, public gdthechat
{
protected:
  int tongdiem;
  float trungbinh;
public:
  void display()
  {
    tongdiem = (diemkt1 + diemkt2 + diemtc);
    trungbinh = tongdiem / 3.0;
    std::cout << "\n\n\tMSSV: " << mssv <<
                 "\n\tTong diem: " << tongdiem <<
                 "\n\tDiem trung binh: " << trungbinh << std::endl;
  }
};

int main()
{

  std::cout<< "Hello" << std::endl;

  thongtinsv obj;
  obj.nhapDiemKiemTra();
  obj.nhapdiemgdtc();
  obj.display();

  return 0;
}
