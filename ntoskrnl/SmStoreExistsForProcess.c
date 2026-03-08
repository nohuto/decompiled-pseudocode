/*
 * XREFs of SmStoreExistsForProcess @ 0x14035BD70
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1407E7DC0 (PfpPrivSourceEnum.c)
 *     SmProcessProcessStoreInfoRequest @ 0x1409D4344 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x1409DA524 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x14035BDC0 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2008) && SmpKeyedStoreEntryGet(v1 + 2072) != 0;
}
