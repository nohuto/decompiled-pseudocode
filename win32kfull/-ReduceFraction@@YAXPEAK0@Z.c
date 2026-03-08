/*
 * XREFs of ?ReduceFraction@@YAXPEAK0@Z @ 0x1C01BA51C
 * Callers:
 *     GetHimetricScaleForMonitor @ 0x1C01BAE08 (GetHimetricScaleForMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall ReduceFraction(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // edi
  unsigned int v3; // r9d
  unsigned int i; // r10d
  unsigned int v5; // r8d

  v2 = *a2;
  v3 = *a1;
  for ( i = *a2; v3; i = v5 )
  {
    v5 = v3;
    v3 = i % v3;
  }
  *a1 /= i;
  *a2 = v2 / i;
}
