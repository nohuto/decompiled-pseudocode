/*
 * XREFs of KiAbTryReclaimOrphanedEntries @ 0x14032F8C8
 * Callers:
 *     MiLockDriverMappings @ 0x14020B4F8 (MiLockDriverMappings.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14021022C (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     InsertEventEntryInLookUpTable @ 0x140212F80 (InsertEventEntryInLookUpTable.c)
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D30 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14021BAA0 (MiCreatePrototypePtes.c)
 *     MiSplitPrivatePage @ 0x14021CE64 (MiSplitPrivatePage.c)
 *     ExpSaAllocatorAllocate @ 0x1402236F0 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14022397C (ExpSaPageGroupAllocateMemory.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14022F760 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402308C0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230C40 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     CcUnpinFileDataEx @ 0x14025D6F0 (CcUnpinFileDataEx.c)
 *     CcPinFileData @ 0x140263770 (CcPinFileData.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402751A0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x140275410 (MiLockVadShared.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x140287B70 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140288650 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x14028940C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140289764 (MiSetVadDeleted.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140289F20 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiRemoveVad @ 0x14028A350 (MiRemoveVad.c)
 *     MiMakeDriverPagesPrivate @ 0x140291930 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x140292044 (MiLockLoaderEntry.c)
 *     MiLockVad @ 0x14029C6B0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029C82C (LOCK_ADDRESS_SPACE.c)
 *     MiManageSubsectionView @ 0x1402A03E0 (MiManageSubsectionView.c)
 *     MmResourcesAvailable @ 0x1402AEEA0 (MmResourcesAvailable.c)
 *     CcSetDirtyInMask @ 0x1402C8FC0 (CcSetDirtyInMask.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x1402D4970 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F068C (MiLockControlAreaFileObjectShared.c)
 *     MiGetChannelInformation @ 0x1402F9C74 (MiGetChannelInformation.c)
 *     PfLockSharedTryAcquire @ 0x1402FA288 (PfLockSharedTryAcquire.c)
 *     CcSetDirtyPinnedData @ 0x1402FC580 (CcSetDirtyPinnedData.c)
 *     FsRtlCheckOplockEx2 @ 0x1402FD950 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140304790 (FsRtlAcquireEofLock.c)
 *     MiPerformVadSplitting @ 0x14030B4C4 (MiPerformVadSplitting.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140326430 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlReleaseEofLock @ 0x140328600 (FsRtlReleaseEofLock.c)
 *     NtCancelTimer @ 0x14032E090 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14032E684 (ExpSetTimerObject.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14032F640 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14032F790 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiCoalesceFreeLargePages @ 0x140332C20 (MiCoalesceFreeLargePages.c)
 *     FsRtlInsertPerStreamContext @ 0x140333C20 (FsRtlInsertPerStreamContext.c)
 *     MmOutSwapWorkingSet @ 0x140341B10 (MmOutSwapWorkingSet.c)
 *     MiLockDynamicMemoryShared @ 0x140345EE4 (MiLockDynamicMemoryShared.c)
 *     MmDecodeExportSection @ 0x14034B4CC (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14034B668 (MmEncodeExportSection.c)
 *     MiDeleteEmptyPageTables @ 0x1403571A0 (MiDeleteEmptyPageTables.c)
 *     ExpSaAllocatorFree @ 0x14035C324 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14035C544 (ExpSaPageGroupFreeMemory.c)
 *     ExpDeleteTimer @ 0x140360A70 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x140366114 (MiDereferenceExtendInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x140374A38 (CmpNotifyMachineHiveLoaded.c)
 *     MmSetPfnListInfo @ 0x140389DC0 (MmSetPfnListInfo.c)
 *     MiLateInitializeSystemCache @ 0x1403AD7E8 (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403B1E20 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B5190 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C577C (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTryLockVad @ 0x1403C68B8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C8B20 (ExAcquireFastResourceShared.c)
 *     MmCheckProcessShadow @ 0x1403CFBE0 (MmCheckProcessShadow.c)
 *     FlushLookUpTableBucket @ 0x1403CFDB8 (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403D54E4 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x14045F528 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C8AD8 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExGetWakeTimerList @ 0x14060B698 (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x14060C2E0 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060C57C (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060D110 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060D2E0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060DC10 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060E628 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061020C (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140613540 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140613830 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x14061B614 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x14061B734 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x14061B854 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiReferenceRemovePartition @ 0x14061BE1C (MiReferenceRemovePartition.c)
 *     MiSplitReducedCommitClonePage @ 0x14061CAD4 (MiSplitReducedCommitClonePage.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140621688 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140625F6C (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x140626940 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x14062896C (MiSetPagesModified.c)
 *     MiRemoveBadPages @ 0x14062A4B0 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636550 (MiLocateSharedPageViews.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14063B760 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063E684 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063F8DC (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x140643814 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140647550 (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x1406528B0 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x140652CBC (MmOutSwapVirtualAddresses.c)
 *     MiProcessTransitionHeatBatch @ 0x1406546A4 (MiProcessTransitionHeatBatch.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140655380 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiZeroPageMakeHot @ 0x140655C7C (MiZeroPageMakeHot.c)
 *     MiClearPartitionPageBitMap @ 0x140659030 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1406594F8 (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x14065A118 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x14065A4F0 (MiInsertPartitionPages.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660294 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     WheaInitialize @ 0x140B4C7E8 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B674AC (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B73D5C (MiInitializePagedPoolEvents.c)
 *     KiForceSymbolReferences @ 0x140B96628 (KiForceSymbolReferences.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbTryReclaimOrphanedEntries(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r9
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // cl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v7 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v7;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0x10u);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v5 = *SchedulerAssist;
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    return 0LL;
  }
}
