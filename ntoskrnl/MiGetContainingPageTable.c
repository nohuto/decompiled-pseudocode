/*
 * XREFs of MiGetContainingPageTable @ 0x140289FE0
 * Callers:
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 *     MiDecommitLargePoolVa @ 0x14020FF88 (MiDecommitLargePoolVa.c)
 *     MiInitializeTransitionPfn @ 0x140214B28 (MiInitializeTransitionPfn.c)
 *     MmCheckCachedPageStates @ 0x1402200B0 (MmCheckCachedPageStates.c)
 *     MiDeletePteList @ 0x140276AC0 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiInitializePfn @ 0x140289DB0 (MiInitializePfn.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiTrimSystemImagePages @ 0x1402B0298 (MiTrimSystemImagePages.c)
 *     MiCopyOnWrite @ 0x140319F00 (MiCopyOnWrite.c)
 *     MiDeleteValidSystemPage @ 0x14032AEA0 (MiDeleteValidSystemPage.c)
 *     MiWsleFree @ 0x14032BA30 (MiWsleFree.c)
 *     MiLinkPoolCommitChain @ 0x140330100 (MiLinkPoolCommitChain.c)
 *     MiAssignNonPagedPoolPte @ 0x140345570 (MiAssignNonPagedPoolPte.c)
 *     MiResolveProtoCombine @ 0x140345A28 (MiResolveProtoCombine.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiInitializeNewPfns @ 0x140370B10 (MiInitializeNewPfns.c)
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x1405607AC (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x140560E88 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x140630D6C (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiMapRetpolineStubs @ 0x14063E2EC (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MmMapHotPatchTablePage @ 0x140640C8C (MmMapHotPatchTablePage.c)
 *     MiWritePteHighLevel @ 0x14064BD10 (MiWritePteHighLevel.c)
 *     MiCreateDescriptorPfns @ 0x140B373F4 (MiCreateDescriptorPfns.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
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
  return ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v7) >> 12) & 0xFFFFFFFFFFLL;
}
