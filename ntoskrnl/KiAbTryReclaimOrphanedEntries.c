/*
 * XREFs of KiAbTryReclaimOrphanedEntries @ 0x1403585E8
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     MI_LOCK_RELOCATIONS_EXCLUSIVE @ 0x14020B028 (MI_LOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiRemoveFromSystemSpace @ 0x14020E5C8 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x14020EB30 (MiInsertInSystemSpace.c)
 *     MiSplitPrivatePage @ 0x14021114C (MiSplitPrivatePage.c)
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14023A860 (ExAcquireAutoExpandPushLockExclusive.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x140240AC0 (FsRtlAcquireEofLock.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140241910 (FsRtlLookupPerStreamContextInternal.c)
 *     CcSetDirtyPinnedData @ 0x140242420 (CcSetDirtyPinnedData.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402621D0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140262550 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     ExpSaAllocatorFree @ 0x140295774 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x140295994 (ExpSaPageGroupFreeMemory.c)
 *     MiGetChannelInformation @ 0x140295C20 (MiGetChannelInformation.c)
 *     ExpSaAllocatorAllocate @ 0x140296390 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14029661C (ExpSaPageGroupAllocateMemory.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402A0D4C (MiLockControlAreaFileObjectShared.c)
 *     MiMakeDriverPagesPrivate @ 0x1402A6440 (MiMakeDriverPagesPrivate.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1360 (FsRtlLookupPerFileObjectContext.c)
 *     FsRtlReleaseEofLock @ 0x1402C3460 (FsRtlReleaseEofLock.c)
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 *     FsRtlInsertPerStreamContext @ 0x1402C99C0 (FsRtlInsertPerStreamContext.c)
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     MiPerformVadSplitting @ 0x1402D581C (MiPerformVadSplitting.c)
 *     MiLockDynamicMemoryShared @ 0x1402DAC90 (MiLockDynamicMemoryShared.c)
 *     MmOutSwapWorkingSet @ 0x1402DAFF8 (MmOutSwapWorkingSet.c)
 *     MiDeleteEmptyPageTables @ 0x1402EB5E0 (MiDeleteEmptyPageTables.c)
 *     ExpDeleteTimer @ 0x1402F5CD0 (ExpDeleteTimer.c)
 *     MiDereferenceExtendInfo @ 0x1402FAE84 (MiDereferenceExtendInfo.c)
 *     MmResourcesAvailable @ 0x140311DB0 (MmResourcesAvailable.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiInsertVad @ 0x1403312E0 (MiInsertVad.c)
 *     MiAddViewsForSection @ 0x140331DC0 (MiAddViewsForSection.c)
 *     MiLockAddressSpaceToo @ 0x140332B7C (MiLockAddressSpaceToo.c)
 *     MiSetVadDeleted @ 0x140332ED8 (MiSetVadDeleted.c)
 *     MiRemoveVad @ 0x140333090 (MiRemoveVad.c)
 *     MiManageSubsectionView @ 0x140335DC0 (MiManageSubsectionView.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     LOCK_ADDRESS_SPACE @ 0x14034CA58 (LOCK_ADDRESS_SPACE.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14034CD5C (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVad @ 0x14034CF60 (MiLockVad.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140357B60 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1403584B0 (ExTryAcquirePushLockExclusiveEx.c)
 *     PfLockSharedTryAcquire @ 0x14035B800 (PfLockSharedTryAcquire.c)
 *     MmDecodeExportSection @ 0x14035D424 (MmDecodeExportSection.c)
 *     MmEncodeExportSection @ 0x14035D5C0 (MmEncodeExportSection.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     MiCreatePrototypePtes @ 0x14036862C (MiCreatePrototypePtes.c)
 *     MiLockDriverMappings @ 0x14036C498 (MiLockDriverMappings.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     CmpNotifyMachineHiveLoaded @ 0x1403887C0 (CmpNotifyMachineHiveLoaded.c)
 *     MiLateInitializeSystemCache @ 0x1403A852C (MiLateInitializeSystemCache.c)
 *     MiFreeUnusedPfnPages @ 0x1403AD0D0 (MiFreeUnusedPfnPages.c)
 *     MiLockPartitionSystemThreads @ 0x1403B04F0 (MiLockPartitionSystemThreads.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403BFEBC (ExpSaPageGroupDescriptorAllocate.c)
 *     MiTryLockVad @ 0x1403C0FF8 (MiTryLockVad.c)
 *     ExAcquireFastResourceShared @ 0x1403C3C70 (ExAcquireFastResourceShared.c)
 *     MmCheckProcessShadow @ 0x1403CA630 (MmCheckProcessShadow.c)
 *     FlushLookUpTableBucket @ 0x1403CA80C (FlushLookUpTableBucket.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1403CFF54 (ExpSaPageGroupDescriptorFree.c)
 *     IopProcessIoTracking @ 0x140457588 (IopProcessIoTracking.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x1405C6628 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExGetWakeTimerList @ 0x140609248 (ExGetWakeTimerList.c)
 *     ExInitializeDeviceAts @ 0x140609E90 (ExInitializeDeviceAts.c)
 *     ExUninitializeDeviceAts @ 0x14060A134 (ExUninitializeDeviceAts.c)
 *     ExSvmBeginDeviceReset @ 0x14060ACD0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14060AEA0 (ExSvmFinalizeDeviceReset.c)
 *     ExpShareAddressSpaceWithDevice @ 0x14060B7D4 (ExpShareAddressSpaceWithDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14060C208 (ExpSvmDereferenceDevice.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14060DDEC (WheaSelLogSetNtSchedulerAvailability.c)
 *     WheaRegisterErrorSourceOverride @ 0x140611120 (WheaRegisterErrorSourceOverride.c)
 *     WheaUnregisterErrorSourceOverride @ 0x140611410 (WheaUnregisterErrorSourceOverride.c)
 *     MiLockDynamicMemoryExclusive @ 0x140619164 (MiLockDynamicMemoryExclusive.c)
 *     MiLockDynamicMemoryNestedExclusive @ 0x140619288 (MiLockDynamicMemoryNestedExclusive.c)
 *     MiLockDynamicMemoryNestedParentExclusive @ 0x1406193A8 (MiLockDynamicMemoryNestedParentExclusive.c)
 *     MiReferenceRemovePartition @ 0x140619970 (MiReferenceRemovePartition.c)
 *     MiSplitReducedCommitClonePage @ 0x14061A624 (MiSplitReducedCommitClonePage.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiMarkHugePfnBad @ 0x14061F1D0 (MiMarkHugePfnBad.c)
 *     MiUpControlAreaRefs @ 0x140623ABC (MiUpControlAreaRefs.c)
 *     MiFinishResume @ 0x1406244A0 (MiFinishResume.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiPersistMdl @ 0x14063C214 (MiPersistMdl.c)
 *     MiTransferFileExtent @ 0x14063D474 (MiTransferFileExtent.c)
 *     MiCommitPageTableRangesForVad @ 0x1406413B4 (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 *     MiContractWsSwapPageFileWorker @ 0x140650250 (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x14065065C (MmOutSwapVirtualAddresses.c)
 *     MiProcessTransitionHeatBatch @ 0x140652050 (MiProcessTransitionHeatBatch.c)
 *     MiSendParkedCoreUpdateToAllChildPartitions @ 0x140652D30 (MiSendParkedCoreUpdateToAllChildPartitions.c)
 *     MiZeroPageMakeHot @ 0x140653630 (MiZeroPageMakeHot.c)
 *     MiClearPartitionPageBitMap @ 0x1406569F0 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 *     MiGetPartitionNodeInformation @ 0x140657AE0 (MiGetPartitionNodeInformation.c)
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14065DC44 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     WheaInitialize @ 0x140B3E1A0 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x140B6383C (ExpWorkerInitialization.c)
 *     MiInitializePagedPoolEvents @ 0x140B6FC8C (MiInitializePagedPoolEvents.c)
 *     KiForceSymbolReferences @ 0x140B92408 (KiForceSymbolReferences.c)
 * Callees:
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14045EAC6 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbTryReclaimOrphanedEntries(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // dl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v9 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v9;
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
      v7 = *SchedulerAssist;
      do
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
      }
      while ( v8 != v7 );
      if ( (v7 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      EtwTraceAutoBoostEntryExhaustion(a2, a1);
    return 0LL;
  }
}
