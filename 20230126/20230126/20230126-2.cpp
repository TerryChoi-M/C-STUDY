//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class first
//{
//private:
//	int num1, num2;
//public:
//	first(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
//	{
//
//	}
//	void showdata() const
//	{
//		cout << num1 << num2 << endl;
//	}
//	first& operator=(const first& ref)
//	{
//		cout << "first operaotr =" << endl;
//		num1 = ref.num1;
//		num2 = ref.num2;
//		return *this;
//	}
//};
//class second : public first
//{
//private:
//	int num3, num4;
//public:
//	second(int n1, int n2, int n3, int n4) :first(n1, n2)
//	{
//		num3 = n3;
//		num4 = n4;
//	}
//	void showdata() const
//	{
//		first::showdata();
//		cout << num3 << num4 << endl;
//	}
//	second& operator=(const second& ref)
//	{
//		first::operator=(ref);
//		cout << "second operaotr =" << endl;
//		num3 = ref.num3;
//		num4 = ref.num4;
//		return *this;
//	}
//};
//
//int main()
//{
//	second sc1(111, 222, 333, 444);
//	second sc2(0, 0, 0, 0);
//	sc2 = sc1;
//	sc2.showdata();
//	sc1.showdata();
//	return 0;
//}