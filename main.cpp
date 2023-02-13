#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T* ar(int size)
{
	T* array = new T[size];
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << '\t';
	}
	int num_pos;
	cout << "\nEnter pos for changes ->";
	cin >> num_pos;
	int num_size;
	cout << "\nEnter size for changes ->";
	cin >> num_size;
	array[num_pos] = array[num_pos + num_size];
	int size_ch = size + num_size;
	for (size_t i = num_pos-1; i < num_pos + num_size-1; i++)
	{
		cout << "\nEnter a number -->";
		int num;
		cin >> num;
		array[i] = num;
		
	}
	cout << "\n\n\n";
	for (size_t i = 0; i < size_ch; i++)
	{
		cout << array[i] << '\t';
	}
	return 0;
}

int main() {
	srand(time(0));
	int size;
	cout << "Enter a size ";
	cin >> size;
	int* array = ar<int>(size);
}