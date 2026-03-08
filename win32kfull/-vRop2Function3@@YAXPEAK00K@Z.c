/*
 * XREFs of ?vRop2Function3@@YAXPEAK00K@Z @ 0x1C0152570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRop2Function3(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  int v4; // eax

  for ( ; a4; --a4 )
  {
    v4 = *a3++;
    *a1++ = ~v4;
  }
}
