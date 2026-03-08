/*
 * XREFs of MiGetLeafVa @ 0x140346C50
 * Callers:
 *     MiClearNonPagedPtes @ 0x14020DF88 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x14020E220 (MiDeleteNonPagedPoolPte.c)
 *     MiWalkPageTablesRecursively @ 0x140223160 (MiWalkPageTablesRecursively.c)
 *     MiComputePxeWalkAction @ 0x140223D30 (MiComputePxeWalkAction.c)
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiIdentifyPfn @ 0x14025E5D0 (MiIdentifyPfn.c)
 *     MiCompletePrivateZeroFault @ 0x14026C360 (MiCompletePrivateZeroFault.c)
 *     MiMakeValidPte @ 0x140273920 (MiMakeValidPte.c)
 *     MiZeroLocalPages @ 0x140273BB0 (MiZeroLocalPages.c)
 *     MiZeroInParallelWorker @ 0x140275970 (MiZeroInParallelWorker.c)
 *     MiDeleteSystemPageTable @ 0x140299BA0 (MiDeleteSystemPageTable.c)
 *     MiReplicatePteChange @ 0x1402A4528 (MiReplicatePteChange.c)
 *     NtGetWriteWatch @ 0x1402CA150 (NtGetWriteWatch.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1402D426C (MiDeleteEmptyPageTableCommit.c)
 *     MiFlushDirtyBitsToPfn @ 0x1402D4830 (MiFlushDirtyBitsToPfn.c)
 *     MiMakeVaRangeNoAccess @ 0x1402EF244 (MiMakeVaRangeNoAccess.c)
 *     MiZeroPageWorkMapping @ 0x1402FD0C4 (MiZeroPageWorkMapping.c)
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 *     MiCountSharedPages @ 0x14031DE80 (MiCountSharedPages.c)
 *     MiRevertValidPte @ 0x140322DC0 (MiRevertValidPte.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x140329B10 (MiDecommitPages.c)
 *     MiMoveDirtyBitsToPfns @ 0x14032F870 (MiMoveDirtyBitsToPfns.c)
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiEvictPageTableLock @ 0x140346460 (MiEvictPageTableLock.c)
 *     MiIsCfgBitMapPageShared @ 0x140346620 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x1403468E0 (MiGetNextPageTable.c)
 *     MiIsPageTableDeletable @ 0x140346AB4 (MiIsPageTableDeletable.c)
 *     MiInitializeSystemPageTable @ 0x1403483AC (MiInitializeSystemPageTable.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiFlushValidPteFromTb @ 0x140387768 (MiFlushValidPteFromTb.c)
 *     MiDbgReleaseAddress @ 0x140387814 (MiDbgReleaseAddress.c)
 *     MiDbgWriteCheck @ 0x1403878D8 (MiDbgWriteCheck.c)
 *     MiGetNextNonGapPfnPage @ 0x14038AF50 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x14038B144 (MiPfnRangeIsZero.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 *     MiStealPage @ 0x1403B70BC (MiStealPage.c)
 *     MiUnlockPhysicalPageByVa @ 0x14061A990 (MiUnlockPhysicalPageByVa.c)
 *     MiMirrorRemoveInactivePages @ 0x140625E94 (MiMirrorRemoveInactivePages.c)
 *     MiCrashdumpRemovePte @ 0x14062D530 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x14062D5F0 (MiFilterCrashDumpPte.c)
 *     MiDecommitLargePte @ 0x1406334B0 (MiDecommitLargePte.c)
 *     MiMakeLargePageTable @ 0x140634BEC (MiMakeLargePageTable.c)
 *     MiDbgCopyMemoryTarget @ 0x140641640 (MiDbgCopyMemoryTarget.c)
 *     MiProtectAweRegion @ 0x140648DF8 (MiProtectAweRegion.c)
 *     MiWriteAwePtes @ 0x14064A010 (MiWriteAwePtes.c)
 *     MiScrubLargePageRegions @ 0x140A437AC (MiScrubLargePageRegions.c)
 *     MxCreatePfnsForPtes @ 0x140B4FD40 (MxCreatePfnsForPtes.c)
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
