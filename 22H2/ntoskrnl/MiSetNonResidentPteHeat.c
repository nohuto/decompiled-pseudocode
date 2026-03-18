/*
 * XREFs of MiSetNonResidentPteHeat @ 0x1402D90B0
 * Callers:
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140272F60 (MiUpdatePfnForPrefetchByPte.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MiPfnReferenceCountIsZero @ 0x1402D8FE0 (MiPfnReferenceCountIsZero.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x140346714 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140347C78 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiInitializeNewPfns @ 0x140375DC0 (MiInitializeNewPfns.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062EB64 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiMakeTransitionHeatBatch @ 0x140654328 (MiMakeTransitionHeatBatch.c)
 *     MiSetActivePfnHeat @ 0x140654928 (MiSetActivePfnHeat.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetNonResidentPteHeat(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 result; // rax

  v2 = *a1;
  v3 = 0LL;
  if ( (*a1 & 0x400) != 0 )
  {
    if ( a2 )
      v3 = 2048LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFF7FFuLL;
    *a1 = result;
  }
  else
  {
    if ( a2 )
      v3 = 8LL;
    result = v3 | v2 & 0xFFFFFFFFFFFFFFF7uLL;
    *a1 = result;
  }
  return result;
}
