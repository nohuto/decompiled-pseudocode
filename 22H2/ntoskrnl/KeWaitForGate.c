/*
 * XREFs of KeWaitForGate @ 0x1402ED0C4
 * Callers:
 *     MmOutSwapProcess @ 0x140249E04 (MmOutSwapProcess.c)
 *     MiDrainControlAreaWrites @ 0x14027842C (MiDrainControlAreaWrites.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140296630 (MiCheckPurgeAndUpMapCount.c)
 *     MiReferenceControlArea @ 0x1402D6FD4 (MiReferenceControlArea.c)
 *     MiUnlinkWorkingSet @ 0x1402EA4BC (MiUnlinkWorkingSet.c)
 *     MiWaitForPageWriteCompletion @ 0x1402ED00C (MiWaitForPageWriteCompletion.c)
 *     MiTryUnlinkNodeLargePage @ 0x1402EF1FC (MiTryUnlinkNodeLargePage.c)
 *     MiLockControlAreaSectionExtend @ 0x1402F963C (MiLockControlAreaSectionExtend.c)
 *     MiAttemptSectionDelete @ 0x1403109B4 (MiAttemptSectionDelete.c)
 *     MiZeroInParallel @ 0x1403542C0 (MiZeroInParallel.c)
 *     MiMarkSessionDeletePending @ 0x1403896B0 (MiMarkSessionDeletePending.c)
 *     MiZeroNodePages @ 0x1403AB040 (MiZeroNodePages.c)
 *     KiExecuteDpc @ 0x1403B5130 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B70D0 (MiMappedPageWriter.c)
 *     MiZeroBootLargePages @ 0x1403CA524 (MiZeroBootLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x1403CD9E0 (MiFreeUnusedPfnPages.c)
 *     MiUnlinkNodeLargePages @ 0x1403F6768 (MiUnlinkNodeLargePages.c)
 *     KiEpfStart @ 0x140524194 (KiEpfStart.c)
 *     MiChangingSubsectionProtos @ 0x14053F858 (MiChangingSubsectionProtos.c)
 *     MiIncrementLargeSubsections @ 0x1405413C0 (MiIncrementLargeSubsections.c)
 *     MiWaitForExtentDeletions @ 0x140542620 (MiWaitForExtentDeletions.c)
 *     MiIncrementAweMapCount @ 0x14054C5B4 (MiIncrementAweMapCount.c)
 *     MiWaitForVadDeletion @ 0x14055BD50 (MiWaitForVadDeletion.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     MmScrubMemory @ 0x1408DC16C (MmScrubMemory.c)
 *     PspQueryWorkingSetWatch @ 0x1409082A0 (PspQueryWorkingSetWatch.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14090EC1C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiBeginThreadWait @ 0x140241FA0 (KiBeginThreadWait.c)
 *     KiAcquireKobjectLockSafe @ 0x14024BE10 (KiAcquireKobjectLockSafe.c)
 *     KiCommitThreadWait @ 0x1402C6640 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x140341258 (KiFastExitThreadWait.c)
 */

__int64 __fastcall KeWaitForGate(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  $AC3BF0C7EA58B0FE9399BAAA5443B647 *v5; // rdi
  unsigned __int8 CurrentIrql; // r10
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *v11; // rcx
  _DWORD *SchedulerAssist; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = &CurrentThread->320;
  do
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentThread->WaitIrql = CurrentIrql;
    v8 = KiBeginThreadWait((__int64)CurrentThread, 0, a2, 0);
    if ( v8 )
      break;
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v7, v9, v10);
    if ( *(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 0;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
      KiFastExitThreadWait(KeGetCurrentPrcb(), CurrentThread, 0LL);
      return v8;
    }
    v11 = *(struct _LIST_ENTRY **)(a1 + 16);
    if ( v11->Flink != (struct _LIST_ENTRY *)(a1 + 8) )
      __fastfail(3u);
    v5->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)(a1 + 8);
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v11;
    v11->Flink = (struct _LIST_ENTRY *)v5;
    *(_QWORD *)(a1 + 16) = v5;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v8 = KiCommitThreadWait((__int64)CurrentThread, (__int64)&CurrentThread->320, 0, 0LL, 0LL);
  }
  while ( v8 == 256 );
  return v8;
}
