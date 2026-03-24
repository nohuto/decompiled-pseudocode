/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60
 * Callers:
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     KeQueryAffinityProcess @ 0x14025C0A0 (KeQueryAffinityProcess.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiAbortCombineScan @ 0x140283DF0 (MiAbortCombineScan.c)
 *     MmLockLoadedModuleListShared @ 0x14029CF18 (MmLockLoadedModuleListShared.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 *     KeQueryBasePriorityThread @ 0x1402FFDE0 (KeQueryBasePriorityThread.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeSetLegacyAffinityThread @ 0x14035E050 (KeSetLegacyAffinityThread.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 *     InsertEventEntryInLookUpTable @ 0x14036D608 (InsertEventEntryInLookUpTable.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140372420 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     DbgEnumerateCallback @ 0x140394CD0 (DbgEnumerateCallback.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A5B8C (MiGetSharedProtosAtDpcLevel.c)
 *     KeQueryCpuSetsProcess @ 0x14051C594 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CB20 (KeSetSelectedCpuSetsThread.c)
 *     KiSelectCandidateProcessor @ 0x140525AE4 (KiSelectCandidateProcessor.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405856DC (DbgpRemoveDebugPrintCallback.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405A3BD4 (VmpInvalidateOutstandingFaults.c)
 *     VmpProcessContextLockShared @ 0x1405A4914 (VmpProcessContextLockShared.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2BC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1402F3E80 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1405B5BA4 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v5; // ett
  _DWORD *v6; // rcx
  int v7; // eax
  int v8; // eax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, -1);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v7 = SchedulerAssist[6];
        SchedulerAssist[6] = v7 + 1;
        if ( v7 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw((const void *)SpinLock);
    v5 = *SpinLock & 0x7FFFFFFF;
    if ( v5 != _InterlockedCompareExchange(SpinLock, v5 + 1, v5) )
    {
      v6 = CurrentPrcb->SchedulerAssist;
      if ( v6 && CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v6[6] - 1;
        v6[6] = v8;
        if ( !v8 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
