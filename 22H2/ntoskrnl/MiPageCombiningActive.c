/*
 * XREFs of MiPageCombiningActive @ 0x140283EA0
 * Callers:
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiSignalLargePageRebuild @ 0x14033BFF0 (MiSignalLargePageRebuild.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiPageCombiningActive(__int64 a1)
{
  bool v1; // zf

  if ( a1 )
    v1 = *(_DWORD *)(a1 + 6512) == 0;
  else
    v1 = dword_140C4E544 == 0;
  return !v1;
}
