/*
 * Даны значения температуры, наблюдавшиеся в течение N подряд идущих дней. Найдите номера дней
 * (в нумерации с нуля) со значением температуры выше среднего арифметического за все N дней.
 * Гарантируется, что среднее арифметическое значений температуры является целым числом.
 * Формат ввода
 * Вводится число N, затем N целых чисел — значения температуры в 0-й, 1-й, ... (N−1)-й день.
 * Гарантируется, что N не превышает миллиона (10^6), а значения температуры, измеряющиеся в миллионных
 * долях градусов по Цельсию, лежат в диапазоне от −10^8 до 10^8. Проверять соблюдение этих ограничений не
 * нужно: вы можете ориентироваться на них при выборе наиболее подходящих типов для переменных.
 * Формат вывода
 * Первое число K — количество дней, значение температуры в которых выше среднего арифметического.
 * Затем K целых чисел — номера этих дней.
 */

#include "avgTemp.h"

using namespace std;

int averageTemp(const vector<int>& vec) {

	int sum = 0;

	for (const auto& i : vec) {
		sum += i;
	}

	return sum / static_cast<int>(vec.size());
}

vector<int> findDays(const vector<int>& vec, const int& avgTemp) {
	
	vector<int> result;

	for (auto i = 0; i<static_cast<int>(vec.size()); ++i) {
		if (vec[i] > avgTemp) {
			result.push_back(i);
		}
	}

	return result;
}

ostream& operator << (ostream& stream, const vector<int>& vec) {
	for (const auto& i : vec) {
		stream << i << " ";
	}
	return stream;
}

int main()
{
	int n = 0;
	cin >> n;
	vector<int> vecTemp(n);

	for (int i = 0; i < static_cast<int>(vecTemp.size()); ++i) {
		int temp = 0;
		cin >> temp;
		vecTemp[i] = temp;
	}

	int avgTemp = averageTemp(vecTemp);

	vector<int> daysHightAvgTemp = findDays(vecTemp, avgTemp);

	cout << daysHightAvgTemp.size()<<" "<<daysHightAvgTemp<< endl; // тут можно попробовать через лямбду

	return 0;
}
