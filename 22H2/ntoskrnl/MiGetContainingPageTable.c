/*
 * XREFs of MiGetContainingPageTable @ 0x14023DDC0
 * Callers:
 *     MiDeletePteList @ 0x140231190 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1402365D0 (MiDeletePteRun.c)
 *     MiAssignNonPagedPoolPte @ 0x14023B360 (MiAssignNonPagedPoolPte.c)
 *     MiInitializeHardFaultPfn @ 0x14023DF10 (MiInitializeHardFaultPfn.c)
 *     MiLinkPoolCommitChain @ 0x14028BBC0 (MiLinkPoolCommitChain.c)
 *     MmUnmapViewInSystemCache @ 0x140294160 (MmUnmapViewInSystemCache.c)
 *     MiCompleteRestrictedImageFault @ 0x14029D730 (MiCompleteRestrictedImageFault.c)
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 *     MiDeleteValidSystemPage @ 0x1402A94B0 (MiDeleteValidSystemPage.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 *     MiTrimSystemImagePages @ 0x1403174C0 (MiTrimSystemImagePages.c)
 *     MiInitializeTransitionPfn @ 0x14033723C (MiInitializeTransitionPfn.c)
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 *     MiConvertStandbyToProto @ 0x1403668C8 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x1403699A0 (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14036A484 (MiResolveProtoCombine.c)
 *     MiDecommitLargePoolVa @ 0x1403714C0 (MiDecommitLargePoolVa.c)
 *     MiInitializeUnusablePfns @ 0x1403ABE00 (MiInitializeUnusablePfns.c)
 *     MiPfnRangeIsZero @ 0x1403B9588 (MiPfnRangeIsZero.c)
 *     PnprCopyReservedMapping @ 0x14050F080 (PnprCopyReservedMapping.c)
 *     PnprRecopyMappingReserve @ 0x14050F758 (PnprRecopyMappingReserve.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MmMapHotPatchTablePage @ 0x14053F3F0 (MmMapHotPatchTablePage.c)
 *     MiMapRetpolineStubs @ 0x140543F7C (MiMapRetpolineStubs.c)
 *     MiUnmapRetpolineStubs @ 0x140544188 (MiUnmapRetpolineStubs.c)
 * Callees:
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  unsigned __int64 v1; // rcx
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v7; // rax
  struct _LIST_ENTRY *v8; // r8
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 >> 9;
  v2 = (v1 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0xFFFFF6FB7DBED000uLL;
  v4 = *(_QWORD *)v2;
  v5 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v1, v4, v2, 0xFFFFF6FB7DBED7F8uLL)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v7 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      v2 = v4 | 0x20;
      if ( (v7 & 0x20) == 0 )
        v2 = v4;
      v4 = v2;
      if ( (v7 & 0x42) != 0 )
        v4 = v2 | 0x42;
    }
  }
  v12 = v4;
  if ( (unsigned __int64)&v12 >= v3
    && (unsigned __int64)&v12 <= v5
    && (unsigned int)MiPteHasShadow(&v12, v4, v2, v5)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v8 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v8 )
    {
      v9 = *((_QWORD *)&v8->Flink + (((unsigned __int64)&v12 >> 3) & 0x1FF));
      v10 = v4 | 0x20;
      if ( (v9 & 0x20) == 0 )
        v10 = v4;
      v4 = v10;
      if ( (v9 & 0x42) != 0 )
        v4 = v10 | 0x42;
    }
  }
  return (v4 >> 12) & 0xFFFFFFFFFLL;
}
