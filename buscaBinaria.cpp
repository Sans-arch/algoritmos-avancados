#include <iostream>
using namespace std;

int binary_search(int array[], int item, int begin = 0, int end = -1);

int main()
{
  int lista[] = {2, 3, 4};
  int elementoABuscar;

  cout << "Digite qual elemento buscar na lista: ";
  cin >> elementoABuscar;

  int result = binary_search(lista, elementoABuscar);

  if (result == -1)
  {
    cout << "Elemento não existe na lista!!" << '\n';
    return -1;
  }

  cout << "Elemento " << elementoABuscar << " encontrado no índice: " << result << '\n';

  return 0;
}

int binary_search(int array[], int item, int begin, int end)
{
  if (end == -1)
  {
    end = (sizeof(*array) / sizeof(int)) - 1;
  }

  if (begin <= end)
  {
    int meio = (begin + end) / 2;

    if (array[meio] == item)
    {
      return meio;
    }
    if (item < array[meio])
    {
      return binary_search(array, item, begin, meio - 1);
    }
    else
    {
      return binary_search(array, item, meio + 1, end);
    }
  }
  else
  {
    return -1;
  }
}