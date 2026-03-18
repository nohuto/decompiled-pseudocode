/*
 * XREFs of ?vRop2Function6@@YAXPEAK00K@Z @ 0x1C0125AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function6(unsigned int *a1, char *a2, char *a3, int a4)
{
  signed __int64 v4; // r10
  unsigned int v5; // edx

  if ( a4 )
  {
    v4 = a2 - a3;
    do
    {
      ++a1;
      v5 = *(_DWORD *)a3 ^ *(_DWORD *)&a3[v4];
      a3 += 4;
      *(a1 - 1) = v5;
      --a4;
    }
    while ( a4 );
  }
}
