/*
 * XREFs of MiGetWsleContents @ 0x140229790
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14020AAF0 (MiSetReadOnlyOnSectionView.c)
 *     MiSetWsleProtection @ 0x1402296A0 (MiSetWsleProtection.c)
 *     MiActivePageCombineCandidate @ 0x1402296F4 (MiActivePageCombineCandidate.c)
 *     MiGetPfnProtection @ 0x140229E5C (MiGetPfnProtection.c)
 *     MmUnmapViewInSystemCache @ 0x140285250 (MmUnmapViewInSystemCache.c)
 *     MiDemoteCombinedPte @ 0x14029DF88 (MiDemoteCombinedPte.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiSetPagingOfDriver @ 0x1402AFF28 (MiSetPagingOfDriver.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiOutSwapWorkingSetPte @ 0x1402CC600 (MiOutSwapWorkingSetPte.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MmProtectPool @ 0x14030B7D8 (MmProtectPool.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVa @ 0x140324900 (MiDeleteVa.c)
 *     MiTerminateWsle @ 0x14032AAF0 (MiTerminateWsle.c)
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     NtLockVirtualMemory @ 0x140344C50 (NtLockVirtualMemory.c)
 *     MiCombineWithExisting @ 0x14034A4C4 (MiCombineWithExisting.c)
 *     MiConvertAndFlushWsleVas @ 0x14036C29C (MiConvertAndFlushWsleVas.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiProcessVmAccessedInfo @ 0x140463A5E (MiProcessVmAccessedInfo.c)
 *     MiMakeDriverPageStayResident @ 0x140617F48 (MiMakeDriverPageStayResident.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14062B2BC (MiDeprioritizeVirtualAddresses.c)
 *     MiUnmapRetpolineStubs @ 0x14063EE24 (MiUnmapRetpolineStubs.c)
 *     MiClearDriverHotPatchPtes @ 0x14063F9FC (MiClearDriverHotPatchPtes.c)
 *     MiBuildForkPte @ 0x14065FC20 (MiBuildForkPte.c)
 *     MmFreeLoaderBlock @ 0x140B5C404 (MmFreeLoaderBlock.c)
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
