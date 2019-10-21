#include <iostream>
using namespace std;
 
int result;
 
void cetakPesan (){
    cout<<"FUNCTION"<<endl;
}
 
int tambah (int a, int b){
    result = a+b;
    return a+b;
}
 
int main () {
    cetakPesan();
 
    cout<<"penjumlahan(8,7) = "<<tambah(8,7)<<endl;
    cout<<"hasil = "<<result<<endl;
 
    return 0;
}
