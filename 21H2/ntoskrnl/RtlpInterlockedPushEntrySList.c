/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1404298C0
 * Callers:
 *     PfpReturnAccessBuffer @ 0x1402009E4 (PfpReturnAccessBuffer.c)
 *     ExFreeToPagedLookasideList @ 0x140203D50 (ExFreeToPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x140203D88 (ExFreeToNPagedLookasideList.c)
 *     MiDecayPfnFullyInitialized @ 0x1402302B0 (MiDecayPfnFullyInitialized.c)
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140237E3C (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfTFullEventListAdd @ 0x14024029C (PfTFullEventListAdd.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14024E07C (EtwpCancelPendingStackWalkApcs.c)
 *     MiInsertInPageBlock @ 0x1402745EC (MiInsertInPageBlock.c)
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402C6EB0 (MiInsertPageInFreeOrZeroedList.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     VfPoolDelayFreeIfPossible @ 0x1402DB890 (VfPoolDelayFreeIfPossible.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1402F8420 (ExpWorkerFactoryCheckCreate.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     IopFreeIrp @ 0x140348640 (IopFreeIrp.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     RtlpHpVsContextFree @ 0x14034CEB0 (RtlpHpVsContextFree.c)
 *     PfFbBufferListInsertInFree @ 0x14035FAE8 (PfFbBufferListInsertInFree.c)
 *     PfFbLogEntryReserve @ 0x14036053C (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x140360618 (PfFbLogEntryComplete.c)
 *     CmpFreeCallbackContext @ 0x1403765BC (CmpFreeCallbackContext.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140376DF0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14037AA7C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     MiStoreFreeWriteSupport @ 0x14037AF04 (MiStoreFreeWriteSupport.c)
 *     MiRepurposeDecayNode @ 0x14038EE6C (MiRepurposeDecayNode.c)
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     KeFreeInterrupt @ 0x1403AEB30 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x1403AF228 (KeAllocateInterrupt.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1403B72B4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     HalpDmaReleaseBufferMappings @ 0x140457742 (HalpDmaReleaseBufferMappings.c)
 *     EtwpDereferenceStackEntry @ 0x14046087A (EtwpDereferenceStackEntry.c)
 *     EtwpTraceLastBranchRecord @ 0x1404608E8 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140460CEC (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 *     MiDeleteCachedKernelShadowStack @ 0x1405A50AC (MiDeleteCachedKernelShadowStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1405A57F0 (MiRemoveNonIdealCachedStacks.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 *     MiRemovePteTracker @ 0x1405B6E94 (MiRemovePteTracker.c)
 *     MiFreeUltraMdlContext @ 0x1405B7108 (MiFreeUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1405B7728 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405B809C (MiReplenishTransitionPageHeatList.c)
 *     MiDeleteCloneDescriptor @ 0x1405BA624 (MiDeleteCloneDescriptor.c)
 *     PfFbBufferListAllocate @ 0x1405C6550 (PfFbBufferListAllocate.c)
 *     RtlStdReleaseStackTrace @ 0x1405E48CC (RtlStdReleaseStackTrace.c)
 *     ViGrowPoolAllocation @ 0x1405FF8F0 (ViGrowPoolAllocation.c)
 *     EtwpFinalizePendingApc @ 0x14063129C (EtwpFinalizePendingApc.c)
 *     EtwpPopFreeApcEntry @ 0x140631448 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1406314E0 (EtwpQueueStackWalkApc.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x1406317F4 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpTraceStackWalk @ 0x140631A8C (EtwpTraceStackWalk.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpTraceStackKey @ 0x1406342C8 (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasideGrow @ 0x140636708 (EtwpCovSampLookasideGrow.c)
 *     ExpTrackRaiseLimitNotification @ 0x14063BD64 (ExpTrackRaiseLimitNotification.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x140680050 (ObDeleteCapturedInsertInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     CmpBounceContextCleanup @ 0x1406A185C (CmpBounceContextCleanup.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     ObInsertObjectEx @ 0x140729C30 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IopFreeMiniCompletionPacket @ 0x14074F700 (IopFreeMiniCompletionPacket.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     AlpcpDestroyBlob @ 0x1407A5A90 (AlpcpDestroyBlob.c)
 *     AlpcpProcessSynchronousRequest @ 0x1407AD040 (AlpcpProcessSynchronousRequest.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     EtwpWriteUserEvent @ 0x1407B4D70 (EtwpWriteUserEvent.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x1407CDBA0 (ObpFreeObject.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     WdipSemFastFree @ 0x140815360 (WdipSemFastFree.c)
 *     EtwpEnableStackCaching @ 0x140883718 (EtwpEnableStackCaching.c)
 *     CmpCleanupPathInfo @ 0x140911848 (CmpCleanupPathInfo.c)
 *     ObpFreeWorkItemBlock @ 0x140985C14 (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140985FBC (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x140986190 (ObpPushRefDerefInfo.c)
 *     VmAccessFault @ 0x1409D8E00 (VmAccessFault.c)
 *     EtwpInitializeClassicStackTracing @ 0x1409E581C (EtwpInitializeClassicStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E591C (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409EE3D4 (EtwpReferenceLastBranchLookasideList.c)
 *     PopInvokeSystemStateHandler @ 0x140A4AF0C (PopInvokeSystemStateHandler.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140A4B520 (PopInvokeStateHandlerTargetProcessor.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140A90A7C (ViFreeTrackedPool.c)
 *     MiInitializeDecayPfns @ 0x140B1D550 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B24410 (WheapInitializeEventing.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B4BE3C (HalpDmaAllocateReservedMappingArray.c)
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
