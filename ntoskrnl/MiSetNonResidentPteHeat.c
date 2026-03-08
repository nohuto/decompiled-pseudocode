/*
 * XREFs of MiSetNonResidentPteHeat @ 0x140287A90
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiRewriteTrimPteAsDemandZero @ 0x1402DC734 (MiRewriteTrimPteAsDemandZero.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x14031D5F0 (MiUpdatePfnForPrefetchByPte.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MiCanBatchSystemCacheUnmapPages @ 0x14062C6E4 (MiCanBatchSystemCacheUnmapPages.c)
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 *     MiSetActivePfnHeat @ 0x1406522D8 (MiSetActivePfnHeat.c)
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
