// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Найти номер его последнего максимального элемента.
int task1(int A[], size_t n)
{
  int n = 0;
int ind = 0;
for (int i = 0; i < n; i++)
{
	if (A[i] >= n)
	{
		n = A[i];
		ind = i;
	}
  return ind;
}
