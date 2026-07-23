/*
 * XREFs of ViRaiseIrqlToDpcLevel @ 0x1405A2760
 * Callers:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405A2458 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405A25B8 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockAfterCallDriver @ 0x1409DECB4 (VfDeadlockAfterCallDriver.c)
 *     VfDeadlockBeforeCallDriver @ 0x1409DED24 (VfDeadlockBeforeCallDriver.c)
 *     VfDeadlockInitializeResource @ 0x1409DF1B4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DF338 (VfDeadlockReleaseResource.c)
 *     ViDeadlockDetectionApplySettings @ 0x1409E025C (ViDeadlockDetectionApplySettings.c)
 *     ViDeadlockEmptyDatabase @ 0x1409E0314 (ViDeadlockEmptyDatabase.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x1409E0F48 (ViIsThreadInsidePagingCodePaths.c)
 * Callees:
 *     <none>
 */

unsigned __int8 ViRaiseIrqlToDpcLevel()
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int8 v1; // cl
  struct _KPRCB *CurrentPrcb; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && v1 <= 0xFu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int8)(1LL << (v1 + 1)) - 1) & 4;
      }
    }
  }
  return CurrentIrql;
}
