/*
 * XREFs of MiPageCombiningActive @ 0x14021472C
 * Callers:
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     MiSignalLargePageRebuild @ 0x1403609B4 (MiSignalLargePageRebuild.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiInitializeDynamicPfns @ 0x140618AB8 (MiInitializeDynamicPfns.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiPageCombiningActive(__int64 a1)
{
  bool result; // al

  result = 0;
  if ( !a1 )
    return dword_140C66EC4 != 0;
  if ( *(_DWORD *)(a1 + 16584) )
    return 1;
  return result;
}
