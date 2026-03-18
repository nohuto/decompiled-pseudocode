/*
 * XREFs of ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14046AE92
 * Callers:
 *     MiLocateCombineBlock @ 0x140215B40 (MiLocateCombineBlock.c)
 *     MiZeroFault @ 0x140232300 (MiZeroFault.c)
 *     MiProbeAndLockPrepare @ 0x140234D90 (MiProbeAndLockPrepare.c)
 *     MiUserFault @ 0x140235870 (MiUserFault.c)
 *     MiGetSlabPage @ 0x14023BD50 (MiGetSlabPage.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14025ABF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiSynchronizeSystemVa @ 0x140261890 (MiSynchronizeSystemVa.c)
 *     MiAcquirePageListLock @ 0x140267280 (MiAcquirePageListLock.c)
 *     MiMakeSystemCacheRangeValid @ 0x140267740 (MiMakeSystemCacheRangeValid.c)
 *     MiAddWorkingSetEntries @ 0x14026BC00 (MiAddWorkingSetEntries.c)
 *     MiSynchronizeFastPageInsert @ 0x14026DDF0 (MiSynchronizeFastPageInsert.c)
 *     MiInsertPageInList @ 0x14026EAE0 (MiInsertPageInList.c)
 *     MiSetVaAgeList @ 0x1402708C0 (MiSetVaAgeList.c)
 *     MiQueryAddressSpan @ 0x140273C40 (MiQueryAddressSpan.c)
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140277B60 (MiSetProtectionOnSection.c)
 *     MiLockPageListAndLastPage @ 0x140278E80 (MiLockPageListAndLastPage.c)
 *     MiEndingOffsetWithLock @ 0x140279D30 (MiEndingOffsetWithLock.c)
 *     MiRemoveWsle @ 0x14027B330 (MiRemoveWsle.c)
 *     MiLockWorkingSetShared @ 0x140283B70 (MiLockWorkingSetShared.c)
 *     MiGetControlAreaPtes @ 0x1402884F0 (MiGetControlAreaPtes.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D3670 (MiInsertPageInFreeOrZeroedList.c)
 *     ExAcquireSpinLockShared @ 0x140314440 (ExAcquireSpinLockShared.c)
 *     ExpRemoveTagForBigPages @ 0x140323630 (ExpRemoveTagForBigPages.c)
 *     ExpAddTagForBigPages @ 0x140331990 (ExpAddTagForBigPages.c)
 * Callees:
 *     ExpTryAcquireSpinLockShared @ 0x140277510 (ExpTryAcquireSpinLockShared.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140316B90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     PerfLogSpinLockAcquire @ 0x140600D74 (PerfLogSpinLockAcquire.c)
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
