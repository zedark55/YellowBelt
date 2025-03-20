﻿/*
 * Вычислите суммарную массу имеющих форму прямоугольного параллелепипеда бетонных блоков одинаковой плотности,
 * но разного размера.
 * Указание
 * Считайте, что размеры блоков измеряются в сантиметрах, плотность — в граммах на кубический сантиметр,
 * а итоговая масса — в граммах. Таким образом, массу блока можно вычислять как простое произведение плотности
 * на объём.
 * Формат ввода
 * В первой строке вводятся два целых положительных числа: количество блоков N и плотность каждого блока R.
 * Каждая из следующих N строк содержит три целых положительных числа W, H, D — размеры очередного блока.
 * Гарантируется, что:
 * -количество блоков N не превосходит 10^5;
 * -плотность блоков R не превосходит 100;
 * -размеры блоков W, H, D не превосходят 10^4.

*/

#include "Task_2_Blocks.h"

using namespace std;

int main()
{
	unsigned int N, R = 0;
	uint64_t W, H, D,sum = 0;

	cin >> N >> R;

	while (N > 0) {
		cin >>W>>H>>D;
		sum += (W * H * D * R);
		--N;
	}

	cout << sum;
	return 0;
}
