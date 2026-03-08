/*
 * XREFs of ?MergePattern@@YAXPEAKJJJ@Z @ 0x1C0305EB8
 * Callers:
 *     vFetchAndMerge @ 0x1C0005994 (vFetchAndMerge.c)
 *     vFetchShiftAndMerge @ 0x1C0305FF0 (vFetchShiftAndMerge.c)
 * Callees:
 *     <none>
 */

void __fastcall MergePattern(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int *v4; // r10
  int v5; // eax
  unsigned __int64 v6; // r10

  v4 = &a1[a2];
  if ( (a2 & 1) != 0 )
  {
    *a1++ ^= a4;
    if ( a2 == 1 )
      return;
    v5 = a4;
    a4 = a3;
    a3 = v5;
  }
  v6 = (unsigned __int64)(v4 - 2);
  while ( (unsigned __int64)a1 <= v6 )
  {
    *a1 ^= a4;
    a1[1] ^= a3;
    a1 += 2;
  }
}
