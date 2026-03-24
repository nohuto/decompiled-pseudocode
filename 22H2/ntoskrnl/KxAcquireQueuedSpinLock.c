/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402D1100
 * Callers:
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiUnlinkPageFromList @ 0x140217870 (MiUnlinkPageFromList.c)
 *     IoGetAttachedDeviceReference @ 0x14022C380 (IoGetAttachedDeviceReference.c)
 *     CcFlushCachePriv @ 0x14022C510 (CcFlushCachePriv.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     ExpApplyPriorityBoost @ 0x14022E970 (ExpApplyPriorityBoost.c)
 *     MiZeroLargePages @ 0x140231E90 (MiZeroLargePages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiDeleteBatch @ 0x140237DC0 (MiDeleteBatch.c)
 *     MmEnforceWorkingSetLimit @ 0x140251A38 (MmEnforceWorkingSetLimit.c)
 *     MiDrainSystemAccessLog @ 0x14025B3E0 (MiDrainSystemAccessLog.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402726C0 (KiAbEntryGetLockedHeadEntry.c)
 *     CcUninitializeCacheMap @ 0x140276F30 (CcUninitializeCacheMap.c)
 *     MiInsertLargePageChain @ 0x14027EE04 (MiInsertLargePageChain.c)
 *     MiInsertLargePageInNodeList @ 0x14027F0D0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x14027F560 (MiIncreaseAvailablePages.c)
 *     MiWakePageZeroing @ 0x14027F7A8 (MiWakePageZeroing.c)
 *     MiLargePageFreeToZero @ 0x1402843C0 (MiLargePageFreeToZero.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MiObtainSystemCacheView @ 0x140292B80 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x1402A1C20 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A6550 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInList @ 0x1402A6E90 (MiInsertPageInList.c)
 *     MiInsertProtectedStandbyPage @ 0x1402A9B00 (MiInsertProtectedStandbyPage.c)
 *     CcMapAndCopyInToCache @ 0x1402B2300 (CcMapAndCopyInToCache.c)
 *     MiVolunteerForTrimFirst @ 0x1402B78C0 (MiVolunteerForTrimFirst.c)
 *     MiDeletePagablePteRange @ 0x1402B79F0 (MiDeletePagablePteRange.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402D0610 (ExIsResourceAcquiredSharedLite.c)
 *     IopDecrementVpbRefCount @ 0x1402D5240 (IopDecrementVpbRefCount.c)
 *     IoBoostThreadIoPriority @ 0x1402D8E10 (IoBoostThreadIoPriority.c)
 *     MiRemoveWsleList @ 0x1402E4B70 (MiRemoveWsleList.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     MiGetPerfectColorHeadPage @ 0x1402EC698 (MiGetPerfectColorHeadPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiRebuildLargeZeroPage @ 0x1402FA800 (MiRebuildLargeZeroPage.c)
 *     MiRestoreTransitionPte @ 0x1402FB620 (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x1403090F0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14030FEE0 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x1403119F0 (CcSetLogHandleForFileEx.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x14031AC1C (CcUpdateTimeOnLogHandles.c)
 *     MmQuerySystemWorkingSetInformation @ 0x14031AE60 (MmQuerySystemWorkingSetInformation.c)
 *     MiUpdatePageAttributeStamp @ 0x140321670 (MiUpdatePageAttributeStamp.c)
 *     MiLockWorkingSetCoreExclusive @ 0x14032A9D4 (MiLockWorkingSetCoreExclusive.c)
 *     WmipNotificationIrpCancel @ 0x14032B000 (WmipNotificationIrpCancel.c)
 *     CcSetLoggedDataThreshold @ 0x14032BA20 (CcSetLoggedDataThreshold.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403326D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x140336380 (MiReplaceTransitionPage.c)
 *     MiEmptyDecayClusterTimers @ 0x14033AE10 (MiEmptyDecayClusterTimers.c)
 *     MiSignalLargePageRebuild @ 0x14033BFF0 (MiSignalLargePageRebuild.c)
 *     KeStartThread @ 0x140340A7C (KeStartThread.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     MiUpdateWorkingSetPrivateSize @ 0x14036A858 (MiUpdateWorkingSetPrivateSize.c)
 *     MiPreUnlockWorkingSetShared @ 0x14036BB60 (MiPreUnlockWorkingSetShared.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B860 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiPurgeLargeZeroNodePages @ 0x1403843D8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384A30 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x14038521C (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x1403888D0 (MiLockMemoryLists.c)
 *     MiRebuildLargePages @ 0x14038CFC0 (MiRebuildLargePages.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14038DCA0 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14038DEEC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14038E280 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E5D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038E9B0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038EC80 (ExAcquireFastResourceShared.c)
 *     ExDisownFastResource @ 0x14038F020 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x14038F4C0 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x140391E24 (CcNotifyExternalCaches.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C64E8 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x1404DF290 (IvtAllocateContextTable.c)
 *     IvtAttachDeviceDomainInternal @ 0x1404DF508 (IvtAttachDeviceDomainInternal.c)
 *     IvtFlushTbInternal @ 0x1404DF9E4 (IvtFlushTbInternal.c)
 *     IvtIommuSendCommand @ 0x1404E0770 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0970 (IvtIommuWaitCommand.c)
 *     HsaAttachDeviceDomainInternal @ 0x1404E2438 (HsaAttachDeviceDomainInternal.c)
 *     HsaFlushTbInternal @ 0x1404E2D3C (HsaFlushTbInternal.c)
 *     HsaIommuSendCommand @ 0x1404E3C48 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1404E49D4 (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1404E9A6C (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x1404EA950 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x1404EB484 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140515FE0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140516070 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140516590 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiSetHugeRangePartitionId @ 0x140533920 (MiSetHugeRangePartitionId.c)
 *     MiPurgeBadFileOnlyPages @ 0x140541830 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x140541EAC (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x140543664 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x14054A618 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x14054ED8C (MiFreeListPageContentsChanged.c)
 *     MiMoveBadPageCrossPartition @ 0x14054EF2C (MiMoveBadPageCrossPartition.c)
 *     MiSetPfnRemovalRequested @ 0x14054F368 (MiSetPfnRemovalRequested.c)
 *     MiUnlinkPageFromBadList @ 0x14054F480 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x140550708 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x140551310 (MiSwapNumaStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14055300C (MiGetSlabStandbyPage.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x1405B45F0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B49D0 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022E810 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051630C (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v6; // rdx
  __int64 result; // rax
  int v8; // eax
  bool v9; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v8 = SchedulerAssist[6];
      v9 = v8 == -1;
      result = (unsigned int)(v8 + 1);
      SchedulerAssist[6] = result;
      if ( v9 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v6 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v6 )
    return KxWaitForLockOwnerShip(a1, v6);
  return result;
}
