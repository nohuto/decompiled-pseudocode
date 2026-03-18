/*
 * XREFs of MiPageCombiningActive @ 0x14021AB7C
 * Callers:
 *     MiAbortCombineScan @ 0x14021AACC (MiAbortCombineScan.c)
 *     MiSignalLargePageRebuild @ 0x14021D444 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x14036ED6C (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x14061AF68 (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140C67344 != 0;
  if ( *(_DWORD *)(a1 + 16584) )
    return 1;
  return result;
}
