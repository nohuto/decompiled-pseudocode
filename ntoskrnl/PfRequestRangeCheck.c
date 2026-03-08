/*
 * XREFs of PfRequestRangeCheck @ 0x140765FA0
 * Callers:
 *     PfPrefetchRequestVerify @ 0x140765CC0 (PfPrefetchRequestVerify.c)
 *     PfPrefetchRequestVerifyPath @ 0x140765F14 (PfPrefetchRequestVerifyPath.c)
 *     PfPrefetchRequestVerifyRanges @ 0x140765FE0 (PfPrefetchRequestVerifyRanges.c)
 * Callees:
 *     <none>
 */

char __fastcall PfRequestRangeCheck(unsigned int *a1, unsigned int a2, int a3, int a4, int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // edx

  if ( a2 < *a1 )
    return 0;
  v5 = a1[1];
  if ( a2 >= v5 )
  {
    if ( a3 )
      return 0;
  }
  v6 = a3 + a2;
  if ( v6 < *a1 || v6 > v5 || ((a4 - 1) & v6) != 0 )
    return 0;
  if ( a5 )
    *a1 = v6;
  return 1;
}
