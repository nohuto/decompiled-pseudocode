/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     KeStartThread @ 0x1402385C4 (KeStartThread.c)
 *     KiAbEntryRemoveFromTree @ 0x14024BC30 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiRemoveWsleList @ 0x1402824E0 (MiRemoveWsleList.c)
 *     MiIncreaseAvailablePages @ 0x140288238 (MiIncreaseAvailablePages.c)
 *     MmEnforceWorkingSetLimit @ 0x140294980 (MmEnforceWorkingSetLimit.c)
 *     MiDeleteProcessShadow @ 0x1402A5828 (MiDeleteProcessShadow.c)
 *     CcIsThereDirtyLoggedPages @ 0x1402D8640 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x1402E1014 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x1402E6030 (CcSetLogHandleForFileEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1402EC7F0 (CcUpdateTimeOnLogHandles.c)
 *     IvtIommuWaitCommand @ 0x1402F4874 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1402F49A4 (IvtIommuSendCommand.c)
 *     WmipNotificationIrpCancel @ 0x1402FEA50 (WmipNotificationIrpCancel.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140302B00 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiInsertLargePageInNodeList @ 0x14031C970 (MiInsertLargePageInNodeList.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     CcUninitializeCacheMap @ 0x140336C50 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x1403373A0 (CcFlushCachePreProcess.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     MiRestoreTransitionPte @ 0x14036A9C4 (MiRestoreTransitionPte.c)
 *     CcSetLoggedDataThreshold @ 0x1403C0A50 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C43D0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C48B0 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403C5540 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403C5A70 (ExpReleaseFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403C5DA8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403C5EA4 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403C6EF0 (ExDisownFastResource.c)
 *     CcNotifyExternalCachesInternal @ 0x1403CD5F8 (CcNotifyExternalCachesInternal.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x14040F2AC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x14040F630 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x14040FE4C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140410B38 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140410CE8 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140410F34 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x14041109C (ExpReleaseFastResourceShared2.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x140528DA0 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x140529000 (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x140529388 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x140529B70 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x140529DE0 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14052A358 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x14052B160 (IvtSetDevicePasidTable.c)
 *     HsaAttachDeviceDomainInternal @ 0x14052CC78 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x14052E1A8 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x14052F02C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x1405339B4 (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x140535650 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x140535FC0 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x14056F040 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x1405DFF10 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x140607EA0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1406082E4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140A9A0AC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle) )
  {
    KxWaitForLockOwnerShip(LockHandle);
  }
}
