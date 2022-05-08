#include<iostream>
#include<math.h>
using namespace std;
template<class T,class V>
	class test{
		public:
			void input(T arr[],V n){
				for(int i=0;i<n;i++){
					cout<<"a["<<i<<"] = ";	
					cin>>arr[i];
				}
			}
			void output(T arr[],V n){
				for(int i=0;i<n;i++){
					cout<<"a["<<i<<"] = "<<arr[i]<<endl;	
				}
			}
			void sorf(T arr[],V n){
				for(int i=0;i<n;i++){
					T temp;
					for(int j=i+1;j<n;j++){
						if(arr[i]<arr[j]){
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
			}
			void sorf1(T arr[],V n){
				for(int i=0;i<n;i++){
					T temp;
					for(int j=i+1;j<n;j++){
						if(arr[i]>arr[j]){
							temp=arr[i];
							arr[i]=arr[j];
							arr[j]=temp;
						}
					}
				}
			}
			bool csnt(V a) {
				if(a<2)
					return false;
				else if(a>2){
					if(a%2==0)
						return false;
					for(int i=3;i<=sqrt(a);i++){
						if(a%i==0)
							return false;
					}
				}
				return true;
			}
			void snt(T arr[], V n){
				for(int i=0; i<n; i++){
					if(csnt(arr[i])==true)
						cout<<"a["<<i<<"] = "<<arr[i]<<endl;
				}
			}

	};
int main(){
	float arr[100];
	int n;
	cout<<"=========================INPUT======================="<<endl;
	cout<<"Nhap vao so luong phan tu : ";
	cin>>n;
	test <float,int> ts;
	ts.input(arr,n);
	cout<<"=========================OUTPUT======================="<<endl;
	ts.output(arr,n);
	cout<<"=========================SORF-========================="<<endl;
	ts.sorf(arr,n);
	ts.output(arr,n);
	cout<<"=========================SORT+========================="<<endl;
	ts.sorf1(arr,n);
	ts.output(arr,n);
	cout<<"=====================PRIME_NUMBER======================"<<endl;
	ts.snt(arr,n);
	return 0;
}
