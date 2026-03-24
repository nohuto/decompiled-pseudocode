/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410
 * Callers:
 *     MiWalkPageTables @ 0x140209280 (MiWalkPageTables.c)
 *     MiWalkPageTablesRecursively @ 0x14020BD60 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14020EAB0 (MiLockPageTableInternal.c)
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiReferencePageRuns @ 0x14022F500 (MiReferencePageRuns.c)
 *     KeSetDisableQuantumProcess @ 0x140251964 (KeSetDisableQuantumProcess.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     PopPepWork @ 0x140260D5C (PopPepWork.c)
 *     PopPepLockActivityLink @ 0x1402617D8 (PopPepLockActivityLink.c)
 *     MiOutPageSingleKernelStack @ 0x1402638B0 (MiOutPageSingleKernelStack.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiRemoveUnusedSubsection @ 0x140279184 (MiRemoveUnusedSubsection.c)
 *     MiCopyDataPageToImagePage @ 0x140284A68 (MiCopyDataPageToImagePage.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiBeginPageAccessor @ 0x1402954C8 (MiBeginPageAccessor.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiRemoveUnusedSegment @ 0x1402D7B58 (MiRemoveUnusedSegment.c)
 *     MiInsertUnusedSegment @ 0x1402D7D10 (MiInsertUnusedSegment.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiReferenceIoPages @ 0x1402E8B74 (MiReferenceIoPages.c)
 *     MiWaitForPageWriteCompletion @ 0x1402ED00C (MiWaitForPageWriteCompletion.c)
 *     MiCheckForControlAreaDeletion @ 0x1402F4FB8 (MiCheckForControlAreaDeletion.c)
 *     MiClearFilePointer @ 0x1402F50B8 (MiClearFilePointer.c)
 *     MiInsertUnusedSubsection @ 0x1402F5120 (MiInsertUnusedSubsection.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x140302B34 (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeThawProcess @ 0x1403150C4 (KeThawProcess.c)
 *     KeFreezeProcess @ 0x14031529C (KeFreezeProcess.c)
 *     MiPreventControlAreaDeletion @ 0x14031E7D0 (MiPreventControlAreaDeletion.c)
 *     MiRemoveFaultNode @ 0x14032061C (MiRemoveFaultNode.c)
 *     KeSetExecuteOptions @ 0x1403251CC (KeSetExecuteOptions.c)
 *     MiZeroSectionObjectPointer @ 0x14032C98C (MiZeroSectionObjectPointer.c)
 *     MiReleasePageFileInfo @ 0x140330CC0 (MiReleasePageFileInfo.c)
 *     KeStartThread @ 0x140340A7C (KeStartThread.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     MiSectionCreated @ 0x140359E2C (MiSectionCreated.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetQuantumProcess @ 0x14035B384 (KeSetQuantumProcess.c)
 *     KeForceResumeProcess @ 0x14035BFB8 (KeForceResumeProcess.c)
 *     KeSetProcessSchedulingGroup @ 0x14035C0AC (KeSetProcessSchedulingGroup.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140372420 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     MmLockLoadedModuleListExclusive @ 0x140372D48 (MmLockLoadedModuleListExclusive.c)
 *     MiLockAllMemoryLists @ 0x1403821EC (MiLockAllMemoryLists.c)
 *     KeSetAffinityThread @ 0x140398CCC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5984 (KeSetCpuSetsProcess.c)
 *     KeSetAffinityProcess @ 0x1403CABCC (KeSetAffinityProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FC820 (VslIumEfiRuntimeService.c)
 *     KeAdjustTimerDelayProcess @ 0x14051370C (KeAdjustTimerDelayProcess.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C878 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeTransitionProcessorParkState @ 0x1405253EC (KeTransitionProcessorParkState.c)
 *     MiPurgeSubsection @ 0x14052A1F0 (MiPurgeSubsection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FCB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x140540074 (MiCopyImageExtentContents.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140546130 (MiDbgTranslatePhysicalAddress.c)
 *     MiFaultGetFileExtents @ 0x140548330 (MiFaultGetFileExtents.c)
 *     MiDecommitHardwareEnclavePages @ 0x140549968 (MiDecommitHardwareEnclavePages.c)
 *     MiNoPagesLastChance @ 0x140550708 (MiNoPagesLastChance.c)
 *     MiDrainCrossPartitionUsage @ 0x140561FDC (MiDrainCrossPartitionUsage.c)
 *     PspIumReplenishPartitionPages @ 0x140583EB8 (PspIumReplenishPartitionPages.c)
 *     DbgpInsertDebugPrintCallback @ 0x140585584 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405856DC (DbgpRemoveDebugPrintCallback.c)
 *     VmpFaultEntryInsert @ 0x1405A2FF8 (VmpFaultEntryInsert.c)
 *     VmpFaultEntryRemove @ 0x1405A31B0 (VmpFaultEntryRemove.c)
 *     VmpProcessContextLockExclusive @ 0x1405A489C (VmpProcessContextLockExclusive.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2BC (ViDeadlockDetectionLock.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140230F30 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5AE8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _DWORD *v3; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // rdx
  _DWORD *v8; // rcx
  bool v9; // zf
  unsigned __int32 v10; // eax
  char v11; // dl
  int v12; // eax
  int v13; // eax
  int v14; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v11 = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, v11);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v14 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v12 = SchedulerAssist[6];
        SchedulerAssist[6] = v12 + 1;
        if ( v12 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v8 = CurrentPrcb->SchedulerAssist;
      if ( v8 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = v8[6] - 1;
          v8[6] = v13;
          if ( !v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      LOBYTE(v1) = -1;
      v14 = ExpWaitForSpinLockExclusiveAndAcquire((unsigned __int64)SpinLock, v1, v2, v3);
    }
    v7 = *(unsigned int *)SpinLock;
    if ( (*SpinLock & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v7 & 0x40000000) == 0 )
        {
          v10 = _InterlockedCompareExchange(SpinLock, v7 | 0x40000000, v7);
          v9 = (_DWORD)v7 == v10;
          v7 = v10;
          if ( !v9 )
            continue;
        }
        KeYieldProcessorEx(&v14, v7, v2, (__int64)v3);
        v7 = *(unsigned int *)SpinLock;
      }
      while ( (v7 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
}
