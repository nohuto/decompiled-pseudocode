/*
 * XREFs of KeAbPreAcquire @ 0x1402CA920
 * Callers:
 *     MiDeleteVad @ 0x14021BFB0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x140235610 (MiCoalesceFreePages.c)
 *     MiInitializeInPageSupport @ 0x14023E950 (MiInitializeInPageSupport.c)
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KeAcquireGuardedMutex @ 0x14026F9E0 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x140273160 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x140273240 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140273310 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     FsRtlAcquireHeaderMutex @ 0x1402C9760 (FsRtlAcquireHeaderMutex.c)
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     MiWaitForCollidedFaultComplete @ 0x1402E2190 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x1402E3D10 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x1402ED1E0 (KiWaitForAllObjects.c)
 *     KiWaitSatisfyAny @ 0x1402ED5CC (KiWaitSatisfyAny.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1402F63F0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     MiLockControlAreaSectionExtend @ 0x1402F963C (MiLockControlAreaSectionExtend.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402FAF60 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14031C3B4 (ExfAcquireReleasePushLockExclusive.c)
 *     CmpAcquireWriteQueue @ 0x140322B90 (CmpAcquireWriteQueue.c)
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 *     MiRebuildLargePages @ 0x14038CFC0 (MiRebuildLargePages.c)
 *     ExAcquireFastResourceExclusive @ 0x14038E5D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14038E9B0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x14038EC80 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140390300 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140390A70 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopValidateAndGetWriteParameters @ 0x1403F178C (IopValidateAndGetWriteParameters.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x1403F8AA0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     KiSatisfyThreadWait @ 0x140522A34 (KiSatisfyThreadWait.c)
 *     MiChangingSubsectionProtos @ 0x14053F858 (MiChangingSubsectionProtos.c)
 *     MiDeleteExtentPfns @ 0x1405406C0 (MiDeleteExtentPfns.c)
 *     MiWaitForExtentDeletions @ 0x140542620 (MiWaitForExtentDeletions.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x1405B3DE0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x1405B3EB0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D6600 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     WbAddWarbirdEncryptionSegment @ 0x1405D6CE0 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1405D6EA4 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x1405D6F68 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x1405D702C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1405D71A8 (WbGetWarbirdEncryptionSegment.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405E9260 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpCreateKeyControlBlock @ 0x1405EF650 (CmpCreateKeyControlBlock.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     ExpWnfCreateNameInstance @ 0x14060DE94 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E474 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E73C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14060EA3C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14060F814 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F914 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14060FFA4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140610198 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x1406105C0 (ExpWnfUpdateSubscription.c)
 *     ExpWnfWriteStateData @ 0x140610910 (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140610CEC (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610E60 (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfDeleteNameInstance @ 0x140611230 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406115D4 (ExpWnfDeleteStateData.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140611AFC (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x140613348 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140613588 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140613A18 (ExpWnfDeleteScopeById.c)
 *     IopQueryXxxInformation @ 0x140633A38 (IopQueryXxxInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1406405D0 (CmpPerformSingleKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x140648D30 (CmpDereferenceKeyControlBlock.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     WbAllocateUserMemory @ 0x1406672B4 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x14066759C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140667CF0 (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140667E04 (WbAddHeapExecutedBlockToLRU.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     WbRemoveWarbirdProcess @ 0x1406872A4 (WbRemoveWarbirdProcess.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406874E8 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406875FC (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140687700 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     ExpWnfCreateProcessContext @ 0x14068AD34 (ExpWnfCreateProcessContext.c)
 *     sub_14068BA0C @ 0x14068BA0C (sub_14068BA0C.c)
 *     WbFreeMemoryBlockRegion @ 0x14068BB14 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfNotifySubscription @ 0x14068E4D4 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14068E674 (ExpWnfDispatchKernelSubscription.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     CmpTryToLockHashEntryExclusive @ 0x14069B388 (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x14069CBF0 (NtAllocateUuids.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x14069E568 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     CmpTryToLockKcbExclusive @ 0x1406A2964 (CmpTryToLockKcbExclusive.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406A3528 (ExpWnfEnumerateScopeInstances.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406C6310 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x1406C6744 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1406C7890 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x1406C7E04 (WbGetWarbirdProcess.c)
 *     IopGetSetSecurityObject @ 0x1406C8520 (IopGetSetSecurityObject.c)
 *     BuildQueryDirectoryIrp @ 0x1406C8A70 (BuildQueryDirectoryIrp.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     PfpPrefetchSharedStart @ 0x14070BF54 (PfpPrefetchSharedStart.c)
 *     ExUuidCreate @ 0x14071FC80 (ExUuidCreate.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x140733554 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     NtSetVolumeInformationFile @ 0x14076C940 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x14077BFD0 (IoSetInformation.c)
 *     ExRegisterExtension @ 0x14079DC30 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x14079DE50 (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x1407A501C (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407C7220 (NtSetUuidSeed.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14087268C (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140875CB0 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140884290 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408DFC40 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408DFCB0 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x14091BB1C (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x140956A50 (ExUnregisterExtension.c)
 *     NtReleaseKeyedEvent @ 0x14095B290 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x14095B650 (NtWaitForKeyedEvent.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095BA1C (ExpKdPullRemoteFileForUser.c)
 *     ExpWnfDeleteScopeInstances @ 0x14095CC4C (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x14095D470 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x14095D5F0 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x14095D8C4 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x14095E614 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x14095E790 (WheapPredictiveFailureAnalysis.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140980070 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     WheaConfigureErrorSource @ 0x1409A00B0 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x1409B38B0 (WheaUnconfigureErrorSource.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F889C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v12; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al

  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( a2 )
    {
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a2);
      v12 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      *(_DWORD *)(v3 + 88) = v12;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_140C4F9C8[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v3 + 40) = SessionId;
      *(_QWORD *)(v3 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v3 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !v3 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    v3 = (__int64)&CurrentThread->LockEntries[v6];
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v3 = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9);
  return v3;
}
