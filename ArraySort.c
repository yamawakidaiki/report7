#include <stdio.h>

// 配列を降順に並べ替える関数
void sort_descending(int array[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] < array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}

int main()
{
	// 実行例１
	const int SIZE = 5; // 定数として配列のサイズを宣言
	int scores[SIZE] = {0, 60, 70, 100, 90};
	// // 実行例２
	// const int SIZE = 6; // 定数として配列のサイズを宣言
	// int scores[SIZE] = {100, 60, 70, 100, 90, 80};

	// 処理コード
	printf("scores =");
	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d", scores[i]);
	}
	printf("\n");

	// 並び替え
	sort_descending(scores, SIZE);

	printf("results =");
	for (int i = 0; i < SIZE; i++)
	{
		printf(" %d", scores[i]);
	}
	printf("\n");

	return 0;
}
