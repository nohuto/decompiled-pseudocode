/*
 * XREFs of SmStoreExistsForProcess @ 0x1402D6310
 * Callers:
 *     MmOutSwapWorkingSet @ 0x14035C7D0 (MmOutSwapWorkingSet.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
 *     PfpPrivSourceEnum @ 0x1406CE0D0 (PfpPrivSourceEnum.c)
 *     VmpPauseResumeNotify @ 0x14092F6F4 (VmpPauseResumeNotify.c)
 * Callees:
 *     SmpKeyedStoreEntryGet @ 0x1402D6348 (SmpKeyedStoreEntryGet.c)
 */

_BOOL8 SmStoreExistsForProcess()
{
  return SmpKeyedStoreEntryGet((ULONG_PTR)&qword_140D24188) != 0;
}
