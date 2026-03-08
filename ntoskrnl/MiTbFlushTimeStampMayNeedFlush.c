/*
 * XREFs of MiTbFlushTimeStampMayNeedFlush @ 0x14029A144
 * Callers:
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 *     MiInsertCachedPte @ 0x14027D0C0 (MiInsertCachedPte.c)
 *     MiReleaseSmallPteMappings @ 0x14027D4D0 (MiReleaseSmallPteMappings.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MiEmptyPteBins @ 0x140299F00 (MiEmptyPteBins.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402B49B4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttribute @ 0x14036CE40 (MiChangePageAttribute.c)
 *     MiFreeSlabEntry @ 0x1403B33B0 (MiFreeSlabEntry.c)
 *     MiDeleteStaleCacheMaps @ 0x14062B5C0 (MiDeleteStaleCacheMaps.c)
 *     MiReleaseLargePdeMappings @ 0x14065D1F4 (MiReleaseLargePdeMappings.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiTbFlushTimeStampMayNeedFlush(int a1, int a2, int a3)
{
  unsigned int v3; // edx
  bool result; // al

  v3 = a3 & (a2 - a1);
  if ( v3 > 2 )
    return 0;
  result = 1;
  if ( (a1 & 1) == 0 )
    return v3 < 2;
  return result;
}
