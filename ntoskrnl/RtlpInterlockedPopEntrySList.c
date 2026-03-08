/*
 * XREFs of RtlpInterlockedPopEntrySList @ 0x140420460
 * Callers:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     CcAllocateWorkQueueEntry @ 0x140219880 (CcAllocateWorkQueueEntry.c)
 *     CcSetDirtyInMask @ 0x14021C370 (CcSetDirtyInMask.c)
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     MiPruneCachedStackList @ 0x140236C6C (MiPruneCachedStackList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14023FE20 (ExAllocateFromNPagedLookasideList.c)
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     MiGetPage @ 0x14026ED40 (MiGetPage.c)
 *     MiGetInPageSupportBlock @ 0x14028A054 (MiGetInPageSupportBlock.c)
 *     PfFbLogEntryReserve @ 0x14028D1C0 (PfFbLogEntryReserve.c)
 *     KeAllocateInterrupt @ 0x14028F83C (KeAllocateInterrupt.c)
 *     EtwpAdjustTraceBuffers @ 0x1402948E0 (EtwpAdjustTraceBuffers.c)
 *     IoMakeAssociatedIrpPriv @ 0x1402B19E8 (IoMakeAssociatedIrpPriv.c)
 *     MiSlistGetFreePage @ 0x1402D76AC (MiSlistGetFreePage.c)
 *     PfTFullEventListAdd @ 0x1402EE12C (PfTFullEventListAdd.c)
 *     MiCreateDecayPfn @ 0x14030D2F0 (MiCreateDecayPfn.c)
 *     ExAllocateFromLookasideListEx @ 0x14030DE20 (ExAllocateFromLookasideListEx.c)
 *     ExAllocateHeapPool @ 0x1403101C0 (ExAllocateHeapPool.c)
 *     IopAllocateIrpPrivate @ 0x1403122C0 (IopAllocateIrpPrivate.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1403566B4 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1403615B4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiWakeOnlyParticipatingProcessorsFromAssignedNode @ 0x14038A28C (MiWakeOnlyParticipatingProcessorsFromAssignedNode.c)
 *     MiZeroPageCalibrate @ 0x1403A50D0 (MiZeroPageCalibrate.c)
 *     MiGetPageSlist @ 0x1403D1650 (MiGetPageSlist.c)
 *     HalpDmaAcquireBufferMappings @ 0x140453764 (HalpDmaAcquireBufferMappings.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14045CBDC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     EtwpGetStackLookasideListEntry @ 0x140460460 (EtwpGetStackLookasideListEntry.c)
 *     EtwpPopFreeApcEntry @ 0x140460490 (EtwpPopFreeApcEntry.c)
 *     EtwpTraceStackKey @ 0x140461010 (EtwpTraceStackKey.c)
 *     EtwpTraceLastBranchRecord @ 0x140461546 (EtwpTraceLastBranchRecord.c)
 *     EtwpCovSampLookasidePop @ 0x140461CA8 (EtwpCovSampLookasidePop.c)
 *     MiStoreWriteModifiedPages @ 0x14046554A (MiStoreWriteModifiedPages.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     ObpDeferPushRefDerefInfo @ 0x140580638 (ObpDeferPushRefDerefInfo.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405A76A4 (RtlpStdGetSpaceForTrace.c)
 *     ViGrowPoolAllocation @ 0x1405CD7B0 (ViGrowPoolAllocation.c)
 *     EtwpGetCrimsonStackKey @ 0x1405FF81C (EtwpGetCrimsonStackKey.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x140643030 (MmDeleteKernelShadowStack.c)
 *     MiGetTransitionPageHeatList @ 0x1406518EC (MiGetTransitionPageHeatList.c)
 *     MiInsertPteTracker @ 0x14065EDA4 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x14065F3EC (MiGetUltraMdlContext.c)
 *     MiFreeClonePool @ 0x14066213C (MiFreeClonePool.c)
 *     RtlpGetRegistryHandle @ 0x14069BBB0 (RtlpGetRegistryHandle.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     ObOpenObjectByNameEx @ 0x1406E7F70 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1406EA0F0 (ObpCaptureObjectName.c)
 *     ObReferenceObjectByNameEx @ 0x140710ADC (ObReferenceObjectByNameEx.c)
 *     CmpExpandPathInfo @ 0x14073A0C4 (CmpExpandPathInfo.c)
 *     IopAllocRealFileObject @ 0x1407BA090 (IopAllocRealFileObject.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 *     IopAllocateMiniCompletionPacket @ 0x1407D0108 (IopAllocateMiniCompletionPacket.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     WdipSemFastAllocate @ 0x14083362C (WdipSemFastAllocate.c)
 *     PfFbBufferListCleanup @ 0x14097D380 (PfFbBufferListCleanup.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VfPoolCheckForLeaks @ 0x140AD708C (VfPoolCheckForLeaks.c)
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
