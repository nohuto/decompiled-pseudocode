/*
 * XREFs of ?vRop2Function3@@YAXPEAK00K@Z @ 0x1C02DC760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function3(char *a1, unsigned int *a2, char *a3, int a4)
{
  signed __int64 v4; // rcx

  if ( a4 )
  {
    v4 = a1 - a3;
    do
    {
      *(_DWORD *)&a3[v4] = ~*(_DWORD *)a3;
      a3 += 4;
      --a4;
    }
    while ( a4 );
  }
}
