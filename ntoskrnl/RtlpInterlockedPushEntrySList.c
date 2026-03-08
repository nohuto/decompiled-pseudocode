/*
 * XREFs of RtlpInterlockedPushEntrySList @ 0x1404204A0
 * Callers:
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertInPageBlock @ 0x140287BF8 (MiInsertInPageBlock.c)
 *     PfFbLogEntryReserve @ 0x14028D1C0 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14028D2D0 (PfFbLogEntryComplete.c)
 *     EtwpCancelPendingStackWalkApcs @ 0x14028E24C (EtwpCancelPendingStackWalkApcs.c)
 *     KeFreeInterrupt @ 0x14028E364 (KeFreeInterrupt.c)
 *     KeAllocateInterrupt @ 0x14028F83C (KeAllocateInterrupt.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     RtlpHpVsContextFree @ 0x1402B6740 (RtlpHpVsContextFree.c)
 *     ExFreeToLookasideListEx @ 0x1402C0A60 (ExFreeToLookasideListEx.c)
 *     MiDecayPfnFullyInitialized @ 0x1402D6FA4 (MiDecayPfnFullyInitialized.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1402E6D80 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     PfTFullEventListAdd @ 0x1402EE12C (PfTFullEventListAdd.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x140302B00 (MiAllocatePfnRepurposeLogDispatch.c)
 *     VfPoolDelayFreeIfPossible @ 0x1403031F8 (VfPoolDelayFreeIfPossible.c)
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmDeleteKernelStackEx @ 0x140318070 (MmDeleteKernelStackEx.c)
 *     ExpWorkerFactoryCheckCreate @ 0x140340CC0 (ExpWorkerFactoryCheckCreate.c)
 *     MiQueuePageAccessLog @ 0x14035B540 (MiQueuePageAccessLog.c)
 *     PfpReturnAccessBuffer @ 0x14035B644 (PfpReturnAccessBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 *     MiZeroPageCalibrateDpc @ 0x140389C70 (MiZeroPageCalibrateDpc.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x14039C190 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     PfFbBufferListAllocate @ 0x14039C990 (PfFbBufferListAllocate.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     HalpDmaReleaseBufferMappings @ 0x1404541D8 (HalpDmaReleaseBufferMappings.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14045DB42 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     EtwpFinalizePendingApc @ 0x140460334 (EtwpFinalizePendingApc.c)
 *     EtwpPopFreeApcEntry @ 0x140460490 (EtwpPopFreeApcEntry.c)
 *     EtwpQueueStackWalkApc @ 0x140460526 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackWalk @ 0x140460A6C (EtwpTraceStackWalk.c)
 *     EtwpDereferenceStackEntry @ 0x140460D12 (EtwpDereferenceStackEntry.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x140461B58 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140461C2A (EtwpCovSampCaptureReleaseToLookaside.c)
 *     CmpFreeCallbackContext @ 0x1404632AA (CmpFreeCallbackContext.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     RtlStdReleaseStackTrace @ 0x1405A7180 (RtlStdReleaseStackTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CD7B0 (ViGrowPoolAllocation.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x1405FD964 (EtwpReleaseStackLookasideListEntry.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 *     EtwpCovSampLookasideGrow @ 0x140601528 (EtwpCovSampLookasideGrow.c)
 *     ExpTrackRaiseLimitNotification @ 0x1406066A4 (ExpTrackRaiseLimitNotification.c)
 *     MiDeleteCachedKernelShadowStack @ 0x140641F64 (MiDeleteCachedKernelShadowStack.c)
 *     MiRemoveNonIdealCachedStacks @ 0x1406429F8 (MiRemoveNonIdealCachedStacks.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140643030 (MmDeleteKernelShadowStack.c)
 *     MiFreeTransitionPageHeatList @ 0x1406518B8 (MiFreeTransitionPageHeatList.c)
 *     MiReplenishTransitionPageHeatList @ 0x14065227C (MiReplenishTransitionPageHeatList.c)
 *     MiStoreFreeWriteSupport @ 0x140659CD0 (MiStoreFreeWriteSupport.c)
 *     MiRemovePteTracker @ 0x14065F020 (MiRemovePteTracker.c)
 *     MiRepurposeDecayNode @ 0x14065F294 (MiRepurposeDecayNode.c)
 *     MiFreeUltraMdlContext @ 0x14065F358 (MiFreeUltraMdlContext.c)
 *     MiDeleteCloneDescriptor @ 0x140661860 (MiDeleteCloneDescriptor.c)
 *     MiClearPageFileHash @ 0x1406635B0 (MiClearPageFileHash.c)
 *     ObpFreeObjectNameBuffer @ 0x140699240 (ObpFreeObjectNameBuffer.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406B5020 (IoCreateStreamFileObjectEx2.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x140768AD0 (ObDeleteCapturedInsertInfo.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     ObpFreeObject @ 0x1407C3980 (ObpFreeObject.c)
 *     IopFreeMiniCompletionPacket @ 0x1407C40A0 (IopFreeMiniCompletionPacket.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     WdipSemFastFree @ 0x140833700 (WdipSemFastFree.c)
 *     EtwpEnableStackCaching @ 0x1408A385A (EtwpEnableStackCaching.c)
 *     ObpFreeWorkItemBlock @ 0x140979BBC (ObpFreeWorkItemBlock.c)
 *     ObpInitStackAndObjectTables @ 0x140979F68 (ObpInitStackAndObjectTables.c)
 *     ObpPushRefDerefInfo @ 0x14097A13C (ObpPushRefDerefInfo.c)
 *     EtwpAllocateStackwalkApcPool @ 0x1409E5C44 (EtwpAllocateStackwalkApcPool.c)
 *     EtwpReferenceStackLookasideList @ 0x1409E5D6C (EtwpReferenceStackLookasideList.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1409ED67C (EtwpReferenceLastBranchLookasideList.c)
 *     CmpCleanupPathInfo @ 0x140A10E00 (CmpCleanupPathInfo.c)
 *     PopInvokeStateHandlerTargetProcessor @ 0x140AA53B0 (PopInvokeStateHandlerTargetProcessor.c)
 *     PopInvokeSystemStateHandler @ 0x140AA542C (PopInvokeSystemStateHandler.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     ViFreeTrackedPool @ 0x140ACE3FC (ViFreeTrackedPool.c)
 *     MiInitializeDecayPfns @ 0x140B60264 (MiInitializeDecayPfns.c)
 *     WheapInitializeEventing @ 0x140B63B48 (WheapInitializeEventing.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B8DE04 (HalpDmaAllocateReservedMappingArray.c)
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
