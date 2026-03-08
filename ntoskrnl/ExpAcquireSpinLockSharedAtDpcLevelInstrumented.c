/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140462F92
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiSynchronizeSystemVa @ 0x1402228B0 (MiSynchronizeSystemVa.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateCombineBlock @ 0x140229F50 (MiLocateCombineBlock.c)
 *     MiGetSlabPage @ 0x14025BA50 (MiGetSlabPage.c)
 *     MiAcquirePageListLock @ 0x140264E70 (MiAcquirePageListLock.c)
 *     MiZeroFault @ 0x140266000 (MiZeroFault.c)
 *     MiUserFault @ 0x140268260 (MiUserFault.c)
 *     MiProbeAndLockPrepare @ 0x14026B160 (MiProbeAndLockPrepare.c)
 *     MiAddWorkingSetEntries @ 0x14026D700 (MiAddWorkingSetEntries.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140277CE0 (MiInsertPageInFreeOrZeroedList.c)
 *     ExpRemoveTagForBigPages @ 0x1402B6920 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x1402C7A20 (ExpAddTagForBigPages.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MiInsertPageInList @ 0x140318540 (MiInsertPageInList.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 *     MiSetVaAgeList @ 0x14031AB40 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x14031E2D0 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140321FC0 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x1403232E0 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140324190 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x140325790 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x14032DAF0 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x140331C60 (MiGetControlAreaPtes.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14030AD60 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpTryAcquireSpinLockShared @ 0x140321970 (ExpTryAcquireSpinLockShared.c)
 *     PerfLogSpinLockAcquire @ 0x1405FE910 (PerfLogSpinLockAcquire.c)
 */

char __fastcall ExpAcquireSpinLockSharedAtDpcLevelInstrumented(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v2; // r14d
  int v3; // esi
  char v4; // di
  unsigned __int64 v5; // rax
  unsigned int InterruptCount; // ebp
  int v7; // eax
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // r8
  int v10; // r9d
  unsigned __int64 v11; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = 0;
  v3 = (int)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v4 = 1;
    v5 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v2 = v5;
  }
  else
  {
    v4 = 0;
    InterruptCount = 0;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  LOBYTE(v7) = ExpTryAcquireSpinLockShared(a1);
  if ( !(_BYTE)v7 )
  {
    v7 = ExpWaitForSpinLockSharedAndAcquire(v8, v9);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v10 = v7;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v7;
  }
  if ( v4 )
  {
    v11 = __rdtsc();
    LOBYTE(v7) = PerfLogSpinLockAcquire(v3, v11, (int)v11 - v2, v10, InterruptCount, 2);
  }
  return v7;
}
