/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x140407B50
 * Callers:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402298BC (MiDeleteParentDecayNode.c)
 *     PfTFullEventListAdd @ 0x14023602C (PfTFullEventListAdd.c)
 *     MiClearPageFileHash @ 0x140249FA4 (MiClearPageFileHash.c)
 *     PfpReturnAccessBuffer @ 0x140272DA8 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x140273370 (PfFbBufferListInsertInFree.c)
 *     PfFbLogEntryReserve @ 0x140273BCC (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140273CA8 (PfFbLogEntryComplete.c)
 *     MiQueuePageAccessLog @ 0x14027D59C (MiQueuePageAccessLog.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14028A270 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14028BDB8 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402907EC (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     IoFreeMdl @ 0x14029A950 (IoFreeMdl.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402E7740 (ExpWorkerFactoryCheckCreate.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     MiInsertInPageBlock @ 0x1403076AC (MiInsertInPageBlock.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     RtlpHpVsContextFree @ 0x14034C550 (RtlpHpVsContextFree.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     IopCompleteRequest @ 0x14034D870 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x14035E2C0 (IopFreeIrp.c)
 *     KeFreeInterrupt @ 0x14037685C (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14037726C (KeAllocateInterrupt.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14037B940 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x14037E640 (VfPoolDelayFreeIfPossible.c)
 *     PfFbBufferListAllocate @ 0x1403C5454 (PfFbBufferListAllocate.c)
 *     HalpInitializeGhesRecovery @ 0x1403C5CAC (HalpInitializeGhesRecovery.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404C80CC (HalpDmaReleaseBufferMappings.c)
 *     HalpErrorDeferredHandler @ 0x1404CFF00 (HalpErrorDeferredHandler.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404D0170 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0388 (HalpPmemErrorDeferredRecovery.c)
 *     CmpFreeCallbackContext @ 0x1404ECA9C (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     MiDeleteCloneDescriptor @ 0x14055A234 (MiDeleteCloneDescriptor.c)
 *     MiRemovePteTracker @ 0x14055F2A0 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14055F514 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x14055F834 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405602A0 (MiReplenishTransitionPageHeatList.c)
 *     RtlStdReleaseStackTrace @ 0x140585FCC (RtlStdReleaseStackTrace.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwpFinalizePendingApc @ 0x1405A6DDC (EtwpFinalizePendingApc.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x1405A7364 (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x1405ADCE8 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x1405ADFDC (EtwpTraceStackKey.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF298 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF390 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasideGrow @ 0x1405AF5EC (EtwpCovSampLookasideGrow.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObpFreeObjectNameBuffer @ 0x140656168 (ObpFreeObjectNameBuffer.c)
 *     ObDeleteCapturedInsertInfo @ 0x140667490 (ObDeleteCapturedInsertInfo.c)
 *     EtwpWriteUserEvent @ 0x140690950 (EtwpWriteUserEvent.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14069C3D0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14069C490 (FsRtlFreeExtraCreateParameter.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     IopFreeMiniCompletionPacket @ 0x1406D3AE0 (IopFreeMiniCompletionPacket.c)
 *     AlpcpUnlockBlob @ 0x1406D6FE0 (AlpcpUnlockBlob.c)
 *     CmpBounceContextCleanup @ 0x1406E45D0 (CmpBounceContextCleanup.c)
 *     ObpFreeObject @ 0x140707900 (ObpFreeObject.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 *     CmpCleanupPathInfo @ 0x140712FB0 (CmpCleanupPathInfo.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     WdipSemFastFree @ 0x140788B54 (WdipSemFastFree.c)
 *     ObpFreeWorkItemBlock @ 0x1408DE724 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x1408DEAD0 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408DEEE4 (ObpRefillWorkItemFreeList.c)
 *     VmAccessFault @ 0x14092EAC0 (VmAccessFault.c)
 *     EtwpInitializeStackTracing @ 0x14093598C (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x140935AF0 (EtwpReferenceStackLookasideList.c)
 *     EtwpEnableStackCaching @ 0x140941E64 (EtwpEnableStackCaching.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140948280 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140994050 (PopInvokeStateHandlerTargetProcessor.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     ViFreeTrackedPool @ 0x1409D6288 (ViFreeTrackedPool.c)
 *     ViGrowPoolAllocation @ 0x1409D6484 (ViGrowPoolAllocation.c)
 *     WheapInitializeEventing @ 0x140A63F24 (WheapInitializeEventing.c)
 *     MiInitializeDecayPfns @ 0x140A69188 (MiInitializeDecayPfns.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8D8F4 (HalpDmaAllocateReservedMappingArray.c)
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
