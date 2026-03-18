/*
 * XREFs of MiGetContainingPageTable @ 0x1402E1270
 * Callers:
 *     MiDecommitLargePoolVa @ 0x140211A40 (MiDecommitLargePoolVa.c)
 *     MiDeleteNonPagedPoolPte @ 0x140212710 (MiDeleteNonPagedPoolPte.c)
 *     MiInitializeTransitionPfn @ 0x14021AF78 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x140265200 (MmCheckCachedPageStates.c)
 *     MiCopyOnWrite @ 0x14026FC80 (MiCopyOnWrite.c)
 *     MiDeleteValidSystemPage @ 0x1402806F0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x140281280 (MiWsleFree.c)
 *     MiLinkPoolCommitChain @ 0x140286180 (MiLinkPoolCommitChain.c)
 *     MiTrimSystemImagePages @ 0x140290FD4 (MiTrimSystemImagePages.c)
 *     MiDeletePteList @ 0x1402D2450 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402D50F0 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiInitializePfn @ 0x1402E1040 (MiInitializePfn.c)
 *     MiAssignNonPagedPoolPte @ 0x1402E2990 (MiAssignNonPagedPoolPte.c)
 *     MiCompleteRestrictedImageFault @ 0x1402E2E50 (MiCompleteRestrictedImageFault.c)
 *     MiResolveProtoCombine @ 0x1402E3AF8 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiCombineInitialInstance @ 0x1402EC690 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiInitializeNewPfns @ 0x140375DC0 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14038D604 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x140562C4C (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140563328 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x1406331FC (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140637074 (MiMakeLargePageTable.c)
 *     MiMapRetpolineStubs @ 0x14064074C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x1406430EC (MmMapHotPatchTablePage.c)
 *     MiWritePteHighLevel @ 0x14064E32C (MiWritePteHighLevel.c)
 *     MiCreateDescriptorPfns @ 0x140B45B04 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402711D0 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v5 = v2 | 0x20;
      v6 = *((_QWORD *)&Flink->Flink + ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
}
