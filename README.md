# Manual do usuário para o programa de Insertion Sort e Selection Sort

 - INSERTION SORT: O algorítimo de ordenação por inserção apresenta 3 possíveis níveis de complexidade: o pior caso, o médio caso e o melhor caso.

 - Pior caso: Como o algorítimo verifica sempre todos os elementos no vetor e faz a troca somente se necessário, o pior caso será quando o vetor está ordenado inversamente à ordenação que deseja, pois ele terá de fazer a ordenação em todas as verificações, gerando um nível de complexidade de O(n^2).
 - Médio caso: O médio caso classifica-se quando o vetor está com seus elementos desordenados ou aleatórios, fazendo com que tenha movimentação no momento da verificação ou não. Este caso apresenta uma complexidade de O((n^2)/4).
 - Melhor caso: O melhor caso é quando não há a necessidade da movimentação de nenhum elemento em nenhuma verificação, ou seja, quando o vetor já está ordenado da forma como desejada, fazendo com que faça somente a verificação e isto gera uma complexidade de O(n).

 - SELECTION SORT: O algorítimo de ordenação por seleção apresenta apenas um nível de complexidade pois ele realiza a verificação e já movimentação em todos os elementos da matriz, já os alocando para as posições necessárias.

 - Caso único: Como é feita sempre uma movimentação em toda verificação é equiparável ao pior caso do Insertion Sort, com uma complexidade de O(n^2).

 - Software [MENU]: No menu é apresentado quatro opções para o usuário selecionar, sendo elas os três possíveis casos de Insertion Sort e o único de Selection Sort. Foram criadas duas funções, uma para cada tipo de ordenação e uma para impressão, os elementos usados para alocação são números inteiros. 
 - [OP1]: Para o pior caso, é alocado uma ordenação inversa ao da ordenação do algorítmo utilizando um laço "for" para que ele faça a reordenação, assim simulando o pior caso.
 - [OP2]: Para o caso médio, a alocação foi feita de forma aleatória utilizando o recurso "rand()" da biblioteca "math.h", assim simulando o caso médio.
 - [OP3]: Para o melhor caso, é alocado ao vetor de forma ordenada usando um laço "for", assim simunalando o melhor caso.
 - [OP4]: Para o caso único de Selection Sort, foi alocado de forma aleatória também usando a ferramenta "rand()".

* Para todas funções do Menu escolhidas é impresso o vetor antes e depois da ordenação.