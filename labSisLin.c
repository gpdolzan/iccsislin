#include <stdio.h>
#include <math.h>

#include "utils.h"
#include "sislin.h"
#include "Metodos.h"

#define TESTSIZE 10

int main ()
{
  // inicializa gerador de números aleatóreos
  srand(202202);
  
  // código do programa aqui
  unsigned int v[TESTSIZE] = {10, 30, 50, 128, 256, 512, 1000, 2000, 3000};
  SistLinear_t *SL;
  SistLinear_t **vSL = malloc(sizeof(*SL) * TESTSIZE);

  for(int i = 0; i < TESTSIZE; i++)
  {
    vSL[i] = alocaSisLin(v[i]);
    iniSisLin(vSL[i], diagDominante, COEF_MAX);
  }

  

  for(int i = 0; i < TESTSIZE; i++)
  {
    liberaSisLin(vSL[i]);
  }
  free(vSL);
}

