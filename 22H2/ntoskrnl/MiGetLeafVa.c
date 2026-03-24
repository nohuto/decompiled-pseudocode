/*
 * XREFs of MiGetLeafVa @ 0x1402AD4F0
 * Callers:
 *     MiCompletePrivateZeroFault @ 0x140210810 (MiCompletePrivateZeroFault.c)
 *     MiFillSystemPtes @ 0x140226EB0 (MiFillSystemPtes.c)
 *     MiMapPagesToZero @ 0x1402339E0 (MiMapPagesToZero.c)
 *     MiIsPageTableDeletable @ 0x1402859D0 (MiIsPageTableDeletable.c)
 *     MiInPagePageTable @ 0x14028C440 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x14028CCA0 (MiEvictPageTableLock.c)
 *     MiGetNextPageTable @ 0x14028DEA0 (MiGetNextPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x140297B10 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402ACCE0 (NtGetWriteWatch.c)
 *     MiMakeValidPte @ 0x1402AEDC0 (MiMakeValidPte.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiRevertValidPte @ 0x1402B4990 (MiRevertValidPte.c)
 *     MiDecommitPages @ 0x1402B4EB0 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402E2400 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x1402E9388 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1402E9620 (MiDeleteNonPagedPoolPte.c)
 *     MiZeroAndFlushPtes @ 0x1402EA790 (MiZeroAndFlushPtes.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402F908C (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteSystemPageTable @ 0x14030E4E0 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140321CF4 (MiMakeVaRangeNoAccess.c)
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 *     MiInitializeSystemPageTable @ 0x1403569E4 (MiInitializeSystemPageTable.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 *     MiFlushValidPteFromTb @ 0x140378B6C (MiFlushValidPteFromTb.c)
 *     MiReplicatePteChange @ 0x1403A3E44 (MiReplicatePteChange.c)
 *     MiGetNextNonGapPfnPage @ 0x1403B93A0 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1403B9588 (MiPfnRangeIsZero.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1403F4194 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x140534CB4 (MiMirrorRemoveInactivePages.c)
 *     MiDecommitLargePte @ 0x14053CB20 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x14053D954 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140545A80 (MiDbgCopyMemoryTarget.c)
 *     MiDbgReleaseAddress @ 0x140545FFC (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1405465FC (MiDbgWriteCheck.c)
 *     MiProtectAweRegion @ 0x14054D2A4 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14054E1D8 (MiWriteAwePtes.c)
 *     MiScrubLargeMappedPage @ 0x1405639C8 (MiScrubLargeMappedPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
