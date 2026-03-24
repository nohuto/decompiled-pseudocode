/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140407970
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234F10 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242EF0 (ExpWorkerFactoryCheckCreate.c)
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     MiQueuePageAccessLog @ 0x14025C02C (MiQueuePageAccessLog.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     MiDecayPfnFullyInitialized @ 0x1402AB654 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402AB77C (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x1402B7E4C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x1402CB854 (MiClearPageFileHash.c)
 *     PfpReturnAccessBuffer @ 0x1402D40D0 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1402D4690 (PfFbBufferListInsertInFree.c)
 *     PfFbLogEntryReserve @ 0x1402D4EEC (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1402D4FC8 (PfFbLogEntryComplete.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x1402D8F20 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x1402DAA68 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402DF49C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     IoFreeMdl @ 0x1402E9600 (IoFreeMdl.c)
 *     CcFreeWorkQueueEntry @ 0x1402F6CBC (CcFreeWorkQueueEntry.c)
 *     MiInsertInPageBlock @ 0x1402FC95C (MiInsertInPageBlock.c)
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     RtlpHpVsContextFree @ 0x140341800 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     IopCompleteRequest @ 0x140342B20 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140353570 (IopFreeIrp.c)
 *     KeFreeInterrupt @ 0x140376D0C (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14037771C (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037BDF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037EAF0 (VfPoolDelayFreeIfPossible.c)
 *     PfFbBufferListAllocate @ 0x1403C5024 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C587C (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C7E8C (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CFCC0 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CFF30 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0148 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404EC85C (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404F3430 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x140559FF4 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x14055F060 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14055F2D4 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F5F4 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x140560060 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x140585D9C (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5D94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A6BAC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6C40 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A7134 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405ADAB8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405ADDAC (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF068 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF160 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405AF3BC (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B02B4 (EtwpTraceLastBranchRecord.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E4380 (IopFreeMiniCompletionPacket.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060C920 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060C9E0 (FsRtlFreeExtraCreateParameter.c)
 *     EtwpWriteUserEvent @ 0x140627BC0 (EtwpWriteUserEvent.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObpFreeObjectNameBuffer @ 0x140661348 (ObpFreeObjectNameBuffer.c)
 *     ObDeleteCapturedInsertInfo @ 0x140671F50 (ObDeleteCapturedInsertInfo.c)
 *     ObpFreeObject @ 0x1406F0520 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x1406F8570 (NtQueryKey.c)
 *     CmpCleanupPathInfo @ 0x1406FBBD0 (CmpCleanupPathInfo.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     CmpFreeKeyControlBlock @ 0x140719B20 (CmpFreeKeyControlBlock.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x140788994 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408DE5C4 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408DE970 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DED84 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x14092E960 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x1409357BC (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140935920 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140941C94 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409480B0 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140993050 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D5288 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D5484 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A68188 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8C8F4 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  union _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  union _SLIST_HEADER v7; // rt0
  unsigned __int8 v8; // tt

  _m_prefetchw(ListHead);
  v5 = *ListHead;
  do
  {
    Region = (_SLIST_ENTRY *)v5.Region;
    LOBYTE(Region) = *((_BYTE *)&v5.HeaderX64 + 8) & 0xF0;
    ListEntry->Next = Region;
    v7 = v5;
    v8 = _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)ListEntry,
           v5.Alignment + 65537,
           (signed __int64 *)&v7);
    v5 = v7;
  }
  while ( !v8 );
  return Region;
}
