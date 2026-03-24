/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140407930
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x14023EF24 (MiGetInPageSupportBlock.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     MiStoreWriteModifiedPages @ 0x140266950 (MiStoreWriteModifiedPages.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140271C40 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustCachedStacks @ 0x140272538 (MiAdjustCachedStacks.c)
 *     MiSlistGetFreePage @ 0x1402993D0 (MiSlistGetFreePage.c)
 *     MiCreateDecayPfn @ 0x1402AECD8 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x1402B7E4C (PfTFullEventListAdd.c)
 *     EtwpAdjustTraceBuffers @ 0x1402C28C0 (EtwpAdjustTraceBuffers.c)
 *     PfFbLogEntryReserve @ 0x1402D4EEC (PfFbLogEntryReserve.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402D7B74 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402E05A0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402E19F8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     IoAllocateMdl @ 0x1402E8BB0 (IoAllocateMdl.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402ED8C8 (IoMakeAssociatedIrpPriv.c)
 *     CcAllocateWorkQueueEntry @ 0x1402F67D0 (CcAllocateWorkQueueEntry.c)
 *     PfFileInfoNotify @ 0x14031D600 (PfFileInfoNotify.c)
 *     MmCreateKernelStack @ 0x14032A560 (MmCreateKernelStack.c)
 *     CcSetDirtyInMask @ 0x140336470 (CcSetDirtyInMask.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     KeAllocateInterrupt @ 0x14037771C (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403D02A4 (MiEmptyKernelStackCache.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C65A8 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404CFF30 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0148 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404F2840 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x14055A8C0 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x14055EDE0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14055F368 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x14055F628 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x140564C28 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405862D0 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6C10 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6C40 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405ADDAC (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF50C (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B02B4 (EtwpTraceLastBranchRecord.c)
 *     ObReferenceObjectByNameEx @ 0x1405DE69C (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x1405E4800 (AlpcpSendMessage.c)
 *     CmpAllocateKeyControlBlock @ 0x1405EFFAC (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1405F47B0 (CmpBounceContextStart.c)
 *     IopCreateFile @ 0x14060B4C0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14060CEF0 (FsRtlAllocateExtraCreateParameterList.c)
 *     RtlpGetRegistryHandle @ 0x140642460 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x140655CD0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406566B0 (ObpCaptureObjectName.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140684300 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     CmpExpandPathInfo @ 0x1406958E0 (CmpExpandPathInfo.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406D4C3C (IopAllocateMiniCompletionPacket.c)
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x1406F7AE0 (NtQueryValueKey.c)
 *     CmpCreateKeyBody @ 0x1406FC690 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x1407030E0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140704810 (ObCreateObjectEx.c)
 *     WdipSemFastAllocate @ 0x1407889C0 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408E0DFC (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x14092E960 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D45D0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D5484 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409E0120 (VfPoolCheckForLeaks.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __stdcall RtlpInterlockedPopEntrySList(PSLIST_HEADER ListHead)
{
  struct _SLIST_ENTRY *v1; // r8
  unsigned __int64 Alignment; // rbx
  union _SLIST_HEADER v3; // rt0

  _m_prefetchw(ListHead);
  while ( 1 )
  {
    v1 = (struct _SLIST_ENTRY *)(ListHead->Region & 0xFFFFFFFFFFFFFFF0uLL);
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
