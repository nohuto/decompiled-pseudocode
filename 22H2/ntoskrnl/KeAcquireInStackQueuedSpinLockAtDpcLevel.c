/*
 * XREFs of KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14029CAB0
 * Callers:
 *     MmEnforceWorkingSetLimit @ 0x14020C05C (MmEnforceWorkingSetLimit.c)
 *     KiAbEntryRemoveFromTree @ 0x14024B530 (KiAbEntryRemoveFromTree.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     CcInitializeCacheMapInternal @ 0x14025E7B0 (CcInitializeCacheMapInternal.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402708C0 (MiSetVaAgeList.c)
 *     MiRemoveWsle @ 0x14027B330 (MiRemoveWsle.c)
 *     MiDeleteProcessShadow @ 0x14029160C (MiDeleteProcessShadow.c)
 *     CcUninitializeCacheMap @ 0x14029BB20 (CcUninitializeCacheMap.c)
 *     CcFlushCachePreProcess @ 0x14029DD60 (CcFlushCachePreProcess.c)
 *     MiRemoveWsleList @ 0x1402A7CB0 (MiRemoveWsleList.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertLargePageInNodeList @ 0x1402D6BE0 (MiInsertLargePageInNodeList.c)
 *     MiIncreaseAvailablePages @ 0x1402DD9A8 (MiIncreaseAvailablePages.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     MiRestoreTransitionPte @ 0x14033501C (MiRestoreTransitionPte.c)
 *     CcIsThereDirtyLoggedPages @ 0x14033FEC0 (CcIsThereDirtyLoggedPages.c)
 *     CcWaitForUninitializeCacheMap @ 0x14034D9B4 (CcWaitForUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x1403529D0 (CcSetLogHandleForFileEx.c)
 *     CcUpdateTimeOnLogHandles @ 0x1403583D0 (CcUpdateTimeOnLogHandles.c)
 *     IvtIommuWaitCommand @ 0x14035FC64 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x14035FD94 (IvtIommuSendCommand.c)
 *     WmipNotificationIrpCancel @ 0x140369B70 (WmipNotificationIrpCancel.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14036E3C0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CcSetLoggedDataThreshold @ 0x1403C6310 (CcSetLoggedDataThreshold.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x1403C9280 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x1403C9760 (ExAcquireFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x1403CA3F0 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1403CA920 (ExpReleaseFastResourceShared.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1403CAC58 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1403CAD54 (ExpReleaseFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x1403CBDA0 (ExDisownFastResource.c)
 *     CcNotifyExternalCachesInternal @ 0x1403D2B98 (CcNotifyExternalCachesInternal.c)
 *     ExpAcquireFastResourceExclusiveSlow @ 0x1404140DC (ExpAcquireFastResourceExclusiveSlow.c)
 *     ExpAcquireFastResourceSharedSlow @ 0x140414460 (ExpAcquireFastResourceSharedSlow.c)
 *     ExpConvertFastResourceExclusiveToShared2 @ 0x140414C7C (ExpConvertFastResourceExclusiveToShared2.c)
 *     ExpReleaseDisownedFastResourceExclusive2 @ 0x140415968 (ExpReleaseDisownedFastResourceExclusive2.c)
 *     ExpReleaseDisownedFastResourceShared2 @ 0x140415B18 (ExpReleaseDisownedFastResourceShared2.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140415D64 (ExpReleaseFastResourceExclusiveSlow.c)
 *     ExpReleaseFastResourceShared2 @ 0x140415ECC (ExpReleaseFastResourceShared2.c)
 *     HalpDmaAcquireBufferMappings @ 0x14045B704 (HalpDmaAcquireBufferMappings.c)
 *     IvtAllocateContextTable @ 0x14052B2D0 (IvtAllocateContextTable.c)
 *     IvtAllocateScalableModePasidTables @ 0x14052B530 (IvtAllocateScalableModePasidTables.c)
 *     IvtAttachDeviceDomainInternal @ 0x14052B8B8 (IvtAttachDeviceDomainInternal.c)
 *     IvtConfigureAts @ 0x14052C0A0 (IvtConfigureAts.c)
 *     IvtDrainSvmPageRequests @ 0x14052C310 (IvtDrainSvmPageRequests.c)
 *     IvtFreeScalableModePasidTables @ 0x14052C888 (IvtFreeScalableModePasidTables.c)
 *     IvtSetDevicePasidTable @ 0x14052D630 (IvtSetDevicePasidTable.c)
 *     HsaAttachDeviceDomainInternal @ 0x14052F148 (HsaAttachDeviceDomainInternal.c)
 *     HsaIommuSendCommand @ 0x140530678 (HsaIommuSendCommand.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405314FC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 *     CcIncrementWriteBehindPriority @ 0x140535E84 (CcIncrementWriteBehindPriority.c)
 *     CcIsThereDirtyDataEx @ 0x140537B20 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538490 (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x1405716B0 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper @ 0x1405E23C0 (DifKeAcquireInStackQueuedSpinLockAtDpcLevelWrapper.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14060A2F0 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14060A734 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DC10 (ExpShareAddressSpaceWithDevice.c)
 *     PnprMirrorMarkedPages @ 0x140A9D1EC (PnprMirrorMarkedPages.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  signed __int64 *v3; // rdx

  LockHandle->LockQueue.Lock = SpinLock;
  LockHandle->LockQueue.Next = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(LockHandle, SpinLock);
  }
  else
  {
    v3 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
    if ( v3 )
      KxWaitForLockOwnerShip((signed __int64)LockHandle, v3);
  }
}
