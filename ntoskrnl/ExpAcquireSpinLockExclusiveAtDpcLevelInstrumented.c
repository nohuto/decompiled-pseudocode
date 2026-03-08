/*
 * XREFs of ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8
 * Callers:
 *     MiComputeAgingAmount @ 0x140224C50 (MiComputeAgingAmount.c)
 *     MiReferenceControlAreaPfn @ 0x140224DA0 (MiReferenceControlAreaPfn.c)
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     PsImpersonateContainerOfThread @ 0x140225F60 (PsImpersonateContainerOfThread.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402493A0 (RtlpHpSegPageRangeAllocate.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlpHpSegPageRangeShrink @ 0x14024DB00 (RtlpHpSegPageRangeShrink.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiMakePageAvoidRead @ 0x140272670 (MiMakePageAvoidRead.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140276500 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPfPutPagesInTransition @ 0x140288890 (MiPfPutPagesInTransition.c)
 *     MiGetVadWakeList @ 0x140289A20 (MiGetVadWakeList.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402CB850 (RtlpHpVsSubsegmentCommitPages.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiAgePte @ 0x1403260A0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x140326EF0 (MiLogPageAccess.c)
 *     MmDoesFileHaveUserWritableReferences @ 0x140330F30 (MmDoesFileHaveUserWritableReferences.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExDeleteResourceLite @ 0x140336580 (ExDeleteResourceLite.c)
 *     MiGetLargePage @ 0x14034EF30 (MiGetLargePage.c)
 *     MiLockFreeLargePageLists @ 0x14034F4A0 (MiLockFreeLargePageLists.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140350330 (RtlpHpAcquireQueuedLockExclusive.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x140224E80 (ExpAcquireSpinLockExclusive.c)
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

__int64 __fastcall ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(volatile signed __int32 *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // ebp
  int v3; // r14d
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // esi
  __int64 result; // rax
  int v8; // r9d
  unsigned __int64 v9; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v5;
  }
  else
  {
    v4 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  result = ExpAcquireSpinLockExclusive(a1);
  v8 = result;
  if ( (_DWORD)result )
  {
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += result;
  }
  if ( v4 )
  {
    v9 = __rdtsc();
    return PerfLogSpinLockAcquire(v3, v9, (int)v9 - v2, v8, InterruptCount, 3);
  }
  return result;
}
