/*
 * XREFs of MiFlushAllHintedStorePages @ 0x1403503A0
 * Callers:
 *     MmStoreFlushAllHintedPages @ 0x1406FA224 (MmStoreFlushAllHintedPages.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x140256CF0 (KeDelayExecutionThread.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiStoreUpdateMemoryConditions @ 0x14033A2F4 (MiStoreUpdateMemoryConditions.c)
 *     MiCanFlushMakeProgress @ 0x1403502E0 (MiCanFlushMakeProgress.c)
 *     MiWakeModifiedPageWriter @ 0x140350344 (MiWakeModifiedPageWriter.c)
 */

__int64 MiFlushAllHintedStorePages()
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v1; // ebx
  int v2; // ebp
  __int64 v3; // r14
  __int64 v4; // rsi

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  if ( !dword_140C51208 )
    return 1LL;
  --CurrentThread->SpecialApcDisable;
  v2 = KeSetActualBasePriorityThread((__int64)CurrentThread, 18);
  v3 = MEMORY[0xFFFFF78000000008];
  _InterlockedExchangeAdd(&dword_140C51200, 2u);
  v4 = 5LL * (unsigned int)dword_140C51204;
  while ( *(&MiSystemPartition + v4 + 352) )
  {
    if ( (unsigned int)MiCanFlushMakeProgress((__int64)&MiSystemPartition, 1) )
    {
      MiWakeModifiedPageWriter((__int64)&MiSystemPartition, -1LL);
      MiStoreUpdateMemoryConditions((__int64)&MiSystemPartition);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
      if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - v3) <= 0x2FAF080 )
        continue;
    }
    goto LABEL_8;
  }
  v1 = 1;
LABEL_8:
  _InterlockedOr(&dword_140C51200, 1u);
  _InterlockedExchangeAdd(&dword_140C51200, 0xFFFFFFFE);
  KeSetEvent(&stru_140C510F0, 0, 0);
  KeSetActualBasePriorityThread((__int64)CurrentThread, v2);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v1;
}
