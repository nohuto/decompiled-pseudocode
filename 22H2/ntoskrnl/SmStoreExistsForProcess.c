/*
 * XREFs of SmStoreExistsForProcess @ 0x1403445A4
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406192E8 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x140741CC0 (PfpPrivSourceEnum.c)
 *     SmProcessProcessStoreInfoRequest @ 0x1409D71E4 (SmProcessProcessStoreInfoRequest.c)
 *     VmpPauseResumeNotify @ 0x1409DD3C4 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1403445F4 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 __fastcall SmStoreExistsForProcess(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 2520) + 24LL);
  return a1 != *(_QWORD *)(v1 + 2008) && SmpKeyedStoreEntryGet(v1 + 2072) != 0;
}
