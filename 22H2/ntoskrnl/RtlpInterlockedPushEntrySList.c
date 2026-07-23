/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140406FF0
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x140234880 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140242860 (ExpWorkerFactoryCheckCreate.c)
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     MiQueuePageAccessLog @ 0x14025B88C (MiQueuePageAccessLog.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x140266D70 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x1402688B8 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14026D2EC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfFbLogEntryReserve @ 0x14026E634 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14026E710 (PfFbLogEntryComplete.c)
 *     PfFbBufferListInsertInFree @ 0x14026E808 (PfFbBufferListInsertInFree.c)
 *     PfpReturnAccessBuffer @ 0x14026EDF8 (PfpReturnAccessBuffer.c)
 *     CcFreeWorkQueueEntry @ 0x14027733C (CcFreeWorkQueueEntry.c)
 *     MiInsertInPageBlock @ 0x14027CFDC (MiInsertInPageBlock.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     RtlpHpVsContextFree @ 0x1402C1E90 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x1402D3D20 (IopFreeIrp.c)
 *     MiDecayPfnFullyInitialized @ 0x1403035CC (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1403036F4 (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x14030F56C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x140324CD4 (MiClearPageFileHash.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     KeFreeInterrupt @ 0x14037677C (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14037718C (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B860 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037E460 (VfPoolDelayFreeIfPossible.c)
 *     PfFbBufferListAllocate @ 0x1403C4C84 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C54DC (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C7DCC (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CFC00 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CFE70 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0088 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404EC79C (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x140559F34 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x14055EFA0 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14055F214 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F534 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14055FFA0 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x140585CDC (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5CD4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A6AEC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6B80 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A7074 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405AD9F8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405ADCEC (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AEFA8 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF0A0 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405AF2FC (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B01F4 (EtwpTraceLastBranchRecord.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E4380 (IopFreeMiniCompletionPacket.c)
 *     AlpcpUnlockBlob @ 0x1405E7880 (AlpcpUnlockBlob.c)
 *     CmpBounceContextCleanup @ 0x1405F4E70 (CmpBounceContextCleanup.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CD80 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CE40 (FsRtlFreeExtraCreateParameter.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     ObpFreeObject @ 0x14063DC40 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140645C90 (NtQueryKey.c)
 *     CmpCleanupPathInfo @ 0x1406492F0 (CmpCleanupPathInfo.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x140650820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1406520B0 (ObInsertObjectEx.c)
 *     CmpFreeKeyControlBlock @ 0x14066D340 (CmpFreeKeyControlBlock.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObpFreeObjectNameBuffer @ 0x1406DA108 (ObpFreeObjectNameBuffer.c)
 *     ObDeleteCapturedInsertInfo @ 0x1406EAD40 (ObDeleteCapturedInsertInfo.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140719B60 (IoCreateStreamFileObjectEx2.c)
 *     WdipSemFastFree @ 0x140788894 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408DE614 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408DE9C0 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DEDD4 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x14092E9B0 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x14093580C (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140935970 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140941CE4 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140948100 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x14099324C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140993830 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D5298 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D5494 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A62F24 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A68188 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8C8F4 (HalpDmaAllocateReservedMappingArray.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPushEntrySList(PSLIST_HEADER ListHead, PSLIST_ENTRY ListEntry)
{
  _SLIST_HEADER v5; // rax
  _SLIST_ENTRY *Region; // r8
  _SLIST_HEADER v7; // rt0
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
