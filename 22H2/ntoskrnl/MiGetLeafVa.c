/*
 * XREFs of MiGetLeafVa @ 0x1402E5A20
 * Callers:
 *     MiClearNonPagedPtes @ 0x140212478 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140212710 (MiDeleteNonPagedPoolPte.c)
 *     MiDeleteSystemPageTable @ 0x14021DE10 (MiDeleteSystemPageTable.c)
 *     MiIdentifyPfn @ 0x14023E4A0 (MiIdentifyPfn.c)
 *     MiWalkPageTablesRecursively @ 0x14025C050 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x14025CC20 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x14025CF80 (MiGetNextPageTablePte.c)
 *     MiCompletePrivateZeroFault @ 0x14026A860 (MiCompletePrivateZeroFault.c)
 *     MiQueryAddressState @ 0x140271AE0 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x1402737F0 (MiCountSharedPages.c)
 *     MiRevertValidPte @ 0x140278960 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x14027E7A0 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x14027F6B0 (MiDecommitPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x1402858F0 (MiMoveDirtyBitsToPfns.c)
 *     MiMakeValidPte @ 0x1402CF2B0 (MiMakeValidPte.c)
 *     MiZeroLocalPages @ 0x1402CF540 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x1402D1300 (MiZeroInParallelWorker.c)
 *     MiInitializeSystemPageTable @ 0x1402E45A8 (MiInitializeSystemPageTable.c)
 *     MiInPagePageTable @ 0x1402E4D70 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x1402E5230 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x1402E53F0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1402E56B0 (MiGetNextPageTable.c)
 *     MiIsPageTableDeletable @ 0x1402E5884 (MiIsPageTableDeletable.c)
 *     NtGetWriteWatch @ 0x1402EA260 (NtGetWriteWatch.c)
 *     MiPrefetchVirtualMemory @ 0x1402EE1C8 (MiPrefetchVirtualMemory.c)
 *     MiDeleteEmptyPageTableCommit @ 0x14033CD3C (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x14033D1AC (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x14035B5CC (MiMakeVaRangeNoAccess.c)
 *     MiReplicatePteChange @ 0x140367CB0 (MiReplicatePteChange.c)
 *     MiZeroPageWorkMapping @ 0x1403682F4 (MiZeroPageWorkMapping.c)
 *     MiFlushValidPteFromTb @ 0x14038A3A4 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x14038A450 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x14038A514 (MiDbgWriteCheck.c)
 *     MiGetNextNonGapPfnPage @ 0x14038D410 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14038D604 (MiPfnRangeIsZero.c)
 *     MiReplacePageTablePage @ 0x1403932CC (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403BBD7C (MiStealPage.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061CE40 (MiUnlockPhysicalPageByVa.c)
 *     MiMirrorRemoveInactivePages @ 0x140628334 (MiMirrorRemoveInactivePages.c)
 *     MiCrashdumpRemovePte @ 0x14062F9B0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14062FA70 (MiFilterCrashDumpPte.c)
 *     MiDecommitLargePte @ 0x140635940 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140637074 (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140643AA0 (MiDbgCopyMemoryTarget.c)
 *     MiProtectAweRegion @ 0x14064B414 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064C62C (MiWriteAwePtes.c)
 *     MiScrubLargePageRegions @ 0x140A46480 (MiScrubLargePageRegions.c)
 *     MxCreatePfnsForPtes @ 0x140B5B650 (MxCreatePfnsForPtes.c)
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
