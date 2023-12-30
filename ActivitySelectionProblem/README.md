# O Problema de Seleção de Atividades

- *Objetivo*: Selecionar um subconjunto de tamanho máximo de atividades mutuamente compatíveis.

- *Entrada*: Conjunto $S = \{a_1, a_2, ..., a_n\}$ de $n$ atividades, onde cada atividade $a_i$ possui um tempo de início $s_i$ e um tempo de término $f_i$, com $0 \leq s_i \leq f_i < \infty$.

GREEDY-ACTIVITY-SELECTOR($S$)
    $S$ = SORT-BY-EARLIEST-FINISH($S$)


O procedimento GREEDY-ACTIVITY-SELECTOR resolve o problema do escalonamento de tarefas no tempo $\theta(n\log n)$.