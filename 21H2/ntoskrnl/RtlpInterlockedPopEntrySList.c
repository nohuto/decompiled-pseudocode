/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140429880
 * Callers:
 *     ExAllocateFromNPagedLookasideList @ 0x140202234 (ExAllocateFromNPagedLookasideList.c)
 *     EtwpAdjustTraceBuffers @ 0x14020B000 (EtwpAdjustTraceBuffers.c)
 *     IoMakeAssociatedIrpPriv @ 0x14020BA48 (IoMakeAssociatedIrpPriv.c)
 *     MiGetPageSlist @ 0x140220360 (MiGetPageSlist.c)
 *     MiSlistGetFreePage @ 0x14022FFB8 (MiSlistGetFreePage.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1402378F8 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     PfTFullEventListAdd @ 0x14024029C (PfTFullEventListAdd.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x140267820 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiPruneCachedStackList @ 0x1402690B4 (MiPruneCachedStackList.c)
 *     CcAllocateWorkQueueEntry @ 0x1402768E4 (CcAllocateWorkQueueEntry.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     CcSetDirtyInMask @ 0x14029D860 (CcSetDirtyInMask.c)
 *     IopAllocateIrpPrivate @ 0x1402AACD0 (IopAllocateIrpPrivate.c)
 *     PfFileInfoNotify @ 0x1402CCCF0 (PfFileInfoNotify.c)
 *     MiCreateDecayPfn @ 0x1402E48A0 (MiCreateDecayPfn.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x14033C424 (MiGetInPageSupportBlock.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     PfFbLogEntryReserve @ 0x14036053C (PfFbLogEntryReserve.c)
 *     MiStoreWriteModifiedPages @ 0x14037B44C (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14037BD80 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140393778 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     KeAllocateInterrupt @ 0x1403AF228 (KeAllocateInterrupt.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     HalpDmaAcquireBufferMappings @ 0x140456CC6 (HalpDmaAcquireBufferMappings.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460740 (EtwpGetStackLookasideListEntry.c)
 *     EtwpTraceLastBranchRecord @ 0x1404608E8 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampLookasidePop @ 0x140460E30 (EtwpCovSampLookasidePop.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 *     MiInsertPteTracker @ 0x1405B6C18 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1405B719C (MiGetUltraMdlContext.c)
 *     MiGetTransitionPageHeatList @ 0x1405B775C (MiGetTransitionPageHeatList.c)
 *     MiFreeClonePool @ 0x1405BAEEC (MiFreeClonePool.c)
 *     ObpDeferPushRefDerefInfo @ 0x1405C5DC8 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405E4E04 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1405FF8F0 (ViGrowPoolAllocation.c)
 *     EtwpPopFreeApcEntry @ 0x140631448 (EtwpPopFreeApcEntry.c)
 *     EtwpGetCrimsonStackKey @ 0x140633B20 (EtwpGetCrimsonStackKey.c)
 *     EtwpTraceStackKey @ 0x1406342C8 (EtwpTraceStackKey.c)
 *     ObReferenceObjectByNameEx @ 0x1406686C8 (ObReferenceObjectByNameEx.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x14066F3B0 (FsRtlAllocateExtraCreateParameterList.c)
 *     CmpExpandPathInfo @ 0x140681500 (CmpExpandPathInfo.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14071E5C0 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     ObCreateObjectEx @ 0x14072B3B0 (ObCreateObjectEx.c)
 *     IopAllocRealFileObject @ 0x14072DDC0 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x14072E210 (CmpCreateKeyBody.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     RtlpGetRegistryHandle @ 0x14077FDA0 (RtlpGetRegistryHandle.c)
 *     AlpcpSendMessage @ 0x1407A9ED0 (AlpcpSendMessage.c)
 *     IopCreateFile @ 0x1407ADB90 (IopCreateFile.c)
 *     CmpBounceContextStart @ 0x1407C1A00 (CmpBounceContextStart.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1407CD000 (ObpCaptureObjectName.c)
 *     SepDuplicateToken @ 0x1407CDED0 (SepDuplicateToken.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D57AC (IopAllocateMiniCompletionPacket.c)
 *     WdipSemFastAllocate @ 0x14081538C (WdipSemFastAllocate.c)
 *     CmpAllocateKeyControlBlock @ 0x1409157D0 (CmpAllocateKeyControlBlock.c)
 *     PfFbBufferListCleanup @ 0x140989350 (PfFbBufferListCleanup.c)
 *     VmAccessFault @ 0x1409D8E00 (VmAccessFault.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VfPoolCheckForLeaks @ 0x140A9A25C (VfPoolCheckForLeaks.c)
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
