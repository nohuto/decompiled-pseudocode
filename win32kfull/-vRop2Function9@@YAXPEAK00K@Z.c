/*
 * XREFs of ?vRop2Function9@@YAXPEAK00K@Z @ 0x1C0307890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function9(unsigned int *a1, char *a2, char *a3, int a4)
{
  signed __int64 v5; // rdx
  unsigned int v6; // ecx

  if ( a4 )
  {
    v5 = a2 - a3;
    do
    {
      v6 = *(_DWORD *)a3 ^ *(_DWORD *)&a3[v5];
      a3 += 4;
      *a1++ = ~v6;
      --a4;
    }
    while ( a4 );
  }
}
