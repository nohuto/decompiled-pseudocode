/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140406FB0
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140202C74 (ExAllocateFromNPagedLookasideList.c)
 *     MiGetPage @ 0x1402135D0 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x14023E894 (MiGetInPageSupportBlock.c)
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402659C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     PfFbLogEntryReserve @ 0x14026E634 (PfFbLogEntryReserve.c)
 *     CcAllocateWorkQueueEntry @ 0x140276E50 (CcAllocateWorkQueueEntry.c)
 *     PfFileInfoNotify @ 0x14029DC90 (PfFileInfoNotify.c)
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     CcSetDirtyInMask @ 0x1402B6B00 (CcSetDirtyInMask.c)
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x1402D2220 (IopAllocateIrpPrivate.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402E6098 (IoMakeAssociatedIrpPriv.c)
 *     MiSlistGetFreePage @ 0x1402EC520 (MiSlistGetFreePage.c)
 *     MiCreateDecayPfn @ 0x140306428 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x14030F56C (PfTFullEventListAdd.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1403128F0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140313878 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     EtwpAdjustTraceBuffers @ 0x14031BBB0 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x14032F960 (MiStoreWriteModifiedPages.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14033AC50 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustCachedStacks @ 0x14033B548 (MiAdjustCachedStacks.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     KeAllocateInterrupt @ 0x14037718C (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403CFBA4 (MiEmptyKernelStackCache.c)
 *     sub_1403DD750 @ 0x1403DD750 (sub_1403DD750.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C64E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CFE70 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0088 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x14055A800 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x14055ED20 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14055F2A8 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x14055F568 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x140564B68 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140586210 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6B50 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6B80 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405ADCEC (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF44C (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B01F4 (EtwpTraceLastBranchRecord.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     CmpAllocateKeyControlBlock @ 0x1405EFFAC (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     IopCreateFile @ 0x14060B920 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060D350 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x140645200 (NtQueryValueKey.c)
 *     CmpCreateKeyBody @ 0x140649DB0 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x140650820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140651EA0 (ObCreateObjectEx.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140662410 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     CmpExpandPathInfo @ 0x140679D00 (CmpExpandPathInfo.c)
 *     RtlpGetRegistryHandle @ 0x1406BB240 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x1406CEA90 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406CF470 (ObpCaptureObjectName.c)
 *     IopAllocateMiniCompletionPacket @ 0x14070250C (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x1407888C0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408E0E4C (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x14092E9B0 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45E0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D5494 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409E0130 (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (_SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !v1 )
      break;
    Alignment = ListHead->Alignment;
    v3 = *ListHead;
    LOWORD(Alignment) = ListHead->Alignment - 1;
    if ( _InterlockedCompareExchange128(
           (volatile signed __int64 *)ListHead,
           (signed __int64)v1->Next,
           Alignment,
           (signed __int64 *)&v3) )
    {
      return v1;
    }
  }
  _InterlockedOr64((volatile signed __int64 *)ListHead, 0LL);
  return v1;
}
