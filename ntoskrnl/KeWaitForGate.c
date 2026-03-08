/*
 * XREFs of KeWaitForGate @ 0x1402931D8
 * Callers:
 *     MiMarkSessionDeletePending @ 0x1402007FC (MiMarkSessionDeletePending.c)
 *     MiDrainControlAreaWrites @ 0x140214FDC (MiDrainControlAreaWrites.c)
 *     MiZeroInParallel @ 0x140242EB8 (MiZeroInParallel.c)
 *     MiWaitForPageWriteCompletion @ 0x1402A47F0 (MiWaitForPageWriteCompletion.c)
 *     MiUnlinkWorkingSet @ 0x1402A4D2C (MiUnlinkWorkingSet.c)
 *     MiLockControlAreaSectionExtend @ 0x1402A4EFC (MiLockControlAreaSectionExtend.c)
 *     MmOutSwapProcess @ 0x1402C00EC (MmOutSwapProcess.c)
 *     MiAttemptSectionDelete @ 0x1402F3B10 (MiAttemptSectionDelete.c)
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140334140 (MiCheckPurgeAndUpMapCount.c)
 *     MiLockFreeLargePageLists @ 0x14034F4A0 (MiLockFreeLargePageLists.c)
 *     MiMappedPageWriter @ 0x14038D570 (MiMappedPageWriter.c)
 *     KiExecuteDpc @ 0x140396B20 (KiExecuteDpc.c)
 *     MiTryUnlinkNodeLargePages @ 0x14039BDDC (MiTryUnlinkNodeLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403AD0D0 (MiFreeUnusedPfnPages.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     KiEpfStart @ 0x140576BB4 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x1406399E8 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x14063B558 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x14063DE84 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x140648524 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x14065E678 (MiWaitForVadDeletion.c)
 *     PspQueryWorkingSetWatch @ 0x1409AC5BC (PspQueryWorkingSetWatch.c)
 *     MiZeroHugeRangeCore @ 0x140A2B20C (MiZeroHugeRangeCore.c)
 *     MmScrubMemory @ 0x140A43E64 (MmScrubMemory.c)
 *     sub_140B0C838 @ 0x140B0C838 (sub_140B0C838.c)
 *     sub_140B15070 @ 0x140B15070 (sub_140B15070.c)
 * Callees:
 *     KiFastExitThreadWait @ 0x140239300 (KiFastExitThreadWait.c)
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiBeginThreadWait @ 0x1402934C0 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, __int64 a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
  $FF35E1D90CD8CB7063F56392666DF2F1 *v7; // rdi
  unsigned __int8 CurrentIrql; // r8
  unsigned int v9; // esi
  struct _LIST_ENTRY *v10; // rcx
  _DWORD *SchedulerAssist; // r10

  CurrentThread = KeGetCurrentThread();
  v5 = a2;
  v7 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        a2 = 4LL;
      else
        a2 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= a2;
    }
    CurrentThread->WaitIrql = CurrentIrql;
    LOBYTE(a2) = a3;
    v9 = KiBeginThreadWait(CurrentThread, a2, v5, 0LL);
    if ( v9 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe(a1);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait((__int64)KeGetCurrentPrcb(), (__int64)CurrentThread, 0LL);
      return v9;
    }
    v10 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v10->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v7->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v10;
    v10->Flink = (struct _LIST_ENTRY *)v7;
    *(_QWORD *)(a1 + 16) = v7;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v9 = (unsigned int)KiCommitThreadWait((ULONG_PTR)CurrentThread, (__int64 *)&CurrentThread->320, 0LL, 0LL, 0LL);
  }
  while ( v9 == 256 );
  return v9;
}
