/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140407B10
 * Callers:
 *     IoMakeAssociatedIrpPriv @ 0x14020D298 (IoMakeAssociatedIrpPriv.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     MiSlistGetFreePage @ 0x140215DB0 (MiSlistGetFreePage.c)
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     PfTFullEventListAdd @ 0x14023602C (PfTFullEventListAdd.c)
 *     EtwpAdjustTraceBuffers @ 0x140240D60 (EtwpAdjustTraceBuffers.c)
 *     MiStoreWriteModifiedPages @ 0x1402548F0 (MiStoreWriteModifiedPages.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x14025FBE0 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiAdjustCachedStacks @ 0x1402604D8 (MiAdjustCachedStacks.c)
 *     PfFbLogEntryReserve @ 0x140273BCC (PfFbLogEntryReserve.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140288EC4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1402918F0 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x140292D48 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     IoAllocateMdl @ 0x140299F00 (IoAllocateMdl.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x1402E3774 (MiGetInPageSupportBlock.c)
 *     CcAllocateWorkQueueEntry @ 0x140301520 (CcAllocateWorkQueueEntry.c)
 *     PfFileInfoNotify @ 0x140328350 (PfFileInfoNotify.c)
 *     MmCreateKernelStack @ 0x1403352B0 (MmCreateKernelStack.c)
 *     CcSetDirtyInMask @ 0x1403411C0 (CcSetDirtyInMask.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     KeAllocateInterrupt @ 0x14037726C (KeAllocateInterrupt.c)
 *     MiEmptyKernelStackCache @ 0x1403D0414 (MiEmptyKernelStackCache.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     HalpDmaAcquireBufferMappings @ 0x1404C67E8 (HalpDmaAcquireBufferMappings.c)
 *     HalpMemoryErrorDeferredRecovery @ 0x1404D0170 (HalpMemoryErrorDeferredRecovery.c)
 *     HalpPmemErrorDeferredRecovery @ 0x1404D0388 (HalpPmemErrorDeferredRecovery.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     MiFreeClonePool @ 0x14055AB00 (MiFreeClonePool.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14055F5A8 (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x14055F868 (MiGetTransitionPageHeatList.c)
 *     ObpDeferPushRefDerefInfo @ 0x140564E68 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x140586500 (RtlpStdGetSpaceForTrace.c)
 *     EtwpGetStackLookasideListEntry @ 0x1405A6E40 (EtwpGetStackLookasideListEntry.c)
 *     EtwpQueueStackWalkApc @ 0x1405A6E70 (EtwpQueueStackWalkApc.c)
 *     EtwpTraceStackKey @ 0x1405ADFDC (EtwpTraceStackKey.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF73C (EtwpCovSampLookasidePop.c)
 *     EtwpTraceLastBranchRecord @ 0x1405B04E4 (EtwpTraceLastBranchRecord.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DE140 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     CmpExpandPathInfo @ 0x1405F4E30 (CmpExpandPathInfo.c)
 *     RtlpGetRegistryHandle @ 0x140637270 (RtlpGetRegistryHandle.c)
 *     ObOpenObjectByNameEx @ 0x14064AAF0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x14064B4D0 (ObpCaptureObjectName.c)
 *     IopCreateFile @ 0x14069AF70 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14069C9A0 (FsRtlAllocateExtraCreateParameterList.c)
 *     IopAllocateMiniCompletionPacket @ 0x1406ABF1C (IopAllocateMiniCompletionPacket.c)
 *     ObReferenceObjectByNameEx @ 0x1406CDDFC (ObReferenceObjectByNameEx.c)
 *     AlpcpSendMessage @ 0x1406D3F60 (AlpcpSendMessage.c)
 *     CmpAllocateKeyControlBlock @ 0x1406DF70C (CmpAllocateKeyControlBlock.c)
 *     CmpBounceContextStart @ 0x1406E3F10 (CmpBounceContextStart.c)
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 *     CmpCreateKeyBody @ 0x140713A70 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x1408E0F5C (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x14092EAC0 (VmAccessFault.c)
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 *     ViGrowPoolAllocation @ 0x1409D6484 (ViGrowPoolAllocation.c)
 *     VfPoolCheckForLeaks @ 0x1409E1120 (VfPoolCheckForLeaks.c)
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
