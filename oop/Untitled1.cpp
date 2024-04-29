#include <iostream>
#include <string>

using namespace std;

class DocGia {
protected:
    string ma;
    string ho;
    string ten;
    int so_thang_hieu_luc;

public:
    DocGia(string ma, string ho, string ten, int so_thang_hieu_luc) {
        this->ma = ma;
        this->ho = ho;
        this->ten = ten;
        this->so_thang_hieu_luc = so_thang_hieu_luc;
    }
    
    virtual void nhap(){
			cout<<"Nhap ma: ";
			fflush(stdin);
			getline(cin, ma);
			
			cout<<"Nhap ho: ";
			//fflush(stdin);
			getline(cin, ho); 
			
			cout<<"Nhap ten: ";
			getline(cin, ten);
			
			cout<<"Nhap so thang hieu luc: ";
			cin>>so_thang_hieu_luc; 
		} 
		
		virtual void xuat(){
			cout<<"Ma: "<<ma<<endl
				<<"Ho: "<<ho<<endl
				<<"Ten: "<<ten<<endl
				<<"So thang hieu luc: "<<so_thang_hieu_luc<<endl; 
		} 
};

class DGTre : public DocGia {
private:
    int nam_sinh;

public:
    DGTre(string ma, string ho, string ten, int so_thang_hieu_luc, int nam_sinh)
        : DocGia(ma, ho, ten, so_thang_hieu_luc) {
        this->nam_sinh = nam_sinh;
    }
    
     	void nhap(){
			DocGia::nhap(); 
			
			cout<<"Nhap nam sinh: ";
			cin>>nam_sinh; 
		} 
		
		 void xuat(){
			DocGia::xuat(); 
			
			cout<<"Ngay sinh: "<<nam_sinh<<endl; 
		}
};

class DGLon : public DocGia {
private:
    string nghe_nghiep;

public:
    DGLon(string ma, string ho, string ten, int so_thang_hieu_luc, string nghe_nghiep)
        : DocGia(ma, ho, ten, so_thang_hieu_luc) {
        this->nghe_nghiep = nghe_nghiep;
    }
    
    	void nhap(){
			DocGia::nhap(); 
			
			cout<<"Nhap nghe nghiep: ";
			fflush(stdin); 
			getline(cin, nghe_nghiep); 
		} 
		
		void xuat(){
			DocGia::xuat(); 
			
			cout<<"Nghe nghiep: "<<nghe_nghiep<<endl; 
		} 
};

int main() {
    DGTre tre("M001", "Nguyen", "Van", 12, 2005);
    DGLon lon("M002", "Tran", "Thi", 6, "Giao vien");
	cout << "hello world";
    return 0;
}
