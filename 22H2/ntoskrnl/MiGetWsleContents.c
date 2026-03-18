/*
 * XREFs of MiGetWsleContents @ 0x140216FD0
 * Callers:
 *     MiCountSystemImageCommitment @ 0x14020ABD4 (MiCountSystemImageCommitment.c)
 *     MiConvertAndFlushWsleVas @ 0x14020B2FC (MiConvertAndFlushWsleVas.c)
 *     MiSetReadOnlyOnSectionView @ 0x140215318 (MiSetReadOnlyOnSectionView.c)
 *     MiOutSwapWorkingSetPte @ 0x140215680 (MiOutSwapWorkingSetPte.c)
 *     MiGetPfnProtection @ 0x1402160D4 (MiGetPfnProtection.c)
 *     MiSetWsleProtection @ 0x140216EE0 (MiSetWsleProtection.c)
 *     MiActivePageCombineCandidate @ 0x140216F34 (MiActivePageCombineCandidate.c)
 *     MiCombineWithExisting @ 0x1402179D4 (MiCombineWithExisting.c)
 *     MiTerminateWsle @ 0x140274730 (MiTerminateWsle.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x14027A4A0 (MiDeleteVa.c)
 *     MiLockCode @ 0x140282210 (MiLockCode.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiSetPagingOfDriver @ 0x140290C64 (MiSetPagingOfDriver.c)
 *     MmProtectPool @ 0x140296EA0 (MmProtectPool.c)
 *     NtLockVirtualMemory @ 0x1402A3000 (NtLockVirtualMemory.c)
 *     MmUnmapViewInSystemCache @ 0x1402D9FB0 (MmUnmapViewInSystemCache.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiGetWorkingSetInfoList @ 0x1402F1954 (MiGetWorkingSetInfoList.c)
 *     MiDemoteCombinedPte @ 0x1402F37B4 (MiDemoteCombinedPte.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiProcessVmAccessedInfo @ 0x14046B95E (MiProcessVmAccessedInfo.c)
 *     MiMakeDriverPageStayResident @ 0x14061A3F8 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062D73C (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapRetpolineStubs @ 0x140641284 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x140641E5C (MiClearDriverHotPatchPtes.c)
 *     MiBuildForkPte @ 0x140662270 (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140B5E8D4 (MmFreeLoaderBlock.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetWsleContents(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = *(_QWORD *)v2;
  if ( v2 >= 0xFFFFF6FB7DBED000uLL
    && v2 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0x600000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v6 = v3 | 0x20;
      v7 = *((_QWORD *)&Flink->Flink + ((v2 >> 3) & 0x1FF));
      if ( (v7 & 0x20) == 0 )
        v6 = v3;
      v3 = v6;
      if ( (v7 & 0x42) != 0 )
        v3 = v6 | 0x42;
    }
  }
  result = v3 >> 60;
  LOBYTE(result) = HIBYTE(v3) & 0xF | (16 * ((v3 >> 60) & 7));
  return result;
}
