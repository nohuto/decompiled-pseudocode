/*
 * XREFs of ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810
 * Callers:
 *     MiAbortCombineScan @ 0x14021467C (MiAbortCombineScan.c)
 *     MiEmptyDecayClusterTimers @ 0x140224EE0 (MiEmptyDecayClusterTimers.c)
 *     MiLockPagableImageSection @ 0x1402252E0 (MiLockPagableImageSection.c)
 *     MiCheckVirtualAddress @ 0x140225600 (MiCheckVirtualAddress.c)
 *     MmLockLoadedModuleListShared @ 0x1402280EC (MmLockLoadedModuleListShared.c)
 *     MiVadSupportsCombine @ 0x1402285E0 (MiVadSupportsCombine.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140228730 (MiCaptureWriteWatchDirtyBit.c)
 *     KiAbEntryRemoveFromTree @ 0x14024BC30 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     MiLockPageTableInternal @ 0x14026A0D0 (MiLockPageTableInternal.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmIsSessionExecutionValid @ 0x140282320 (MmIsSessionExecutionValid.c)
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     KeQueryPrimaryGroupAffinityProcess @ 0x1402960A4 (KeQueryPrimaryGroupAffinityProcess.c)
 *     KeQueryAffinityProcess @ 0x14029A300 (KeQueryAffinityProcess.c)
 *     MiLockIoPfnTree @ 0x14029C1B0 (MiLockIoPfnTree.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14029DA1C (MiUpdateWorkingSetPrivateSize.c)
 *     MiUnparkedCoreCount @ 0x1402A85DC (MiUnparkedCoreCount.c)
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 *     MiGetSharedProtosAtDpcLevel @ 0x1402CCE88 (MiGetSharedProtosAtDpcLevel.c)
 *     MiFreePageToSlabAllocator @ 0x1402CE4E0 (MiFreePageToSlabAllocator.c)
 *     KeQueryBasePriorityThread @ 0x1402DD398 (KeQueryBasePriorityThread.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402DD950 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReassessZeroThreads @ 0x1402E477C (MiReassessZeroThreads.c)
 *     KeQueryPrimaryGroupProcess @ 0x1402FA680 (KeQueryPrimaryGroupProcess.c)
 *     KiSetLegacyAffinityThread @ 0x1402FDE2C (KiSetLegacyAffinityThread.c)
 *     MiPurgeSlabEntries @ 0x140300024 (MiPurgeSlabEntries.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140303B6C (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiLockPageListAndLastPage @ 0x1403232E0 (MiLockPageListAndLastPage.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 *     MiInsertSlabEntry @ 0x140349C90 (MiInsertSlabEntry.c)
 *     MiCreateCombineAnchor @ 0x14034A2A4 (MiCreateCombineAnchor.c)
 *     KiRundownMutants @ 0x140353C9C (KiRundownMutants.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1403548F8 (KiActivateWaiterQueueWithNoLocks.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     KeSetUserGroupAffinityThread @ 0x1403A8A60 (KeSetUserGroupAffinityThread.c)
 *     DbgEnumerateCallback @ 0x1403D1390 (DbgEnumerateCallback.c)
 *     KiSelectCandidateProcessor @ 0x14045A5B4 (KiSelectCandidateProcessor.c)
 *     VmpProcessContextLockShared @ 0x14045E744 (VmpProcessContextLockShared.c)
 *     KeQueryCpuSetsProcess @ 0x140572B54 (KeQueryCpuSetsProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140573640 (KeSetSelectedCpuSetsThread.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405A55A8 (DbgpRemoveDebugPrintCallback.c)
 *     RtlpAcquirePropStoreLockShared @ 0x1405A8904 (RtlpAcquirePropStoreLockShared.c)
 *     ViPtAcquireTreeLockAtDpcLevelSafe @ 0x1405CFEE0 (ViPtAcquireTreeLockAtDpcLevelSafe.c)
 *     VmpInvalidateOutstandingFaults @ 0x1405F7288 (VmpInvalidateOutstandingFaults.c)
 *     MiGetPageInHugePageBadStatus @ 0x14061DAC4 (MiGetPageInHugePageBadStatus.c)
 *     MiLocatePageCollisionNodeByPfn @ 0x14064CDD4 (MiLocatePageCollisionNodeByPfn.c)
 *     MiLockPageListAndFirstPage @ 0x14064E5E4 (MiLockPageListAndFirstPage.c)
 *     MiMoveBackgroundZeroThreads @ 0x1406529D0 (MiMoveBackgroundZeroThreads.c)
 *     MiGetSlabStandbyListWorker @ 0x140654790 (MiGetSlabStandbyListWorker.c)
 *     ViDeadlockDetectionLock @ 0x140AD5DD8 (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockSharedAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  char v2; // dl
  signed __int32 v3; // [rsp+38h] [rbp+10h]
  signed __int32 v4; // [rsp+38h] [rbp+10h]
  signed __int32 v5; // [rsp+40h] [rbp+18h]

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v2 = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(SpinLock, v2);
  }
  else
  {
    _m_prefetchw((const void *)SpinLock);
    v3 = *SpinLock & 0x7FFFFFFF;
    v5 = _InterlockedCompareExchange(SpinLock, v3 + 1, v3);
    v1 = (unsigned int)v5;
    if ( v5 != v3 )
    {
      while ( v5 >= 0 )
      {
        v4 = v5;
        v5 = _InterlockedCompareExchange(SpinLock, v5 + 1, v5);
        v1 = (unsigned int)v5;
        if ( v5 == v4 )
          return;
      }
      LOBYTE(v1) = -1;
      ExpWaitForSpinLockSharedAndAcquire(SpinLock, v1);
    }
  }
}
