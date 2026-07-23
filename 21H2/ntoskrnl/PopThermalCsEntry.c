/*
 * XREFs of PopThermalCsEntry @ 0x14056F9B0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EE060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038AFC0 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140573C74 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22E90) = 0;
  if ( a1 )
  {
    byte_140C22E9D = 1;
    LOBYTE(v3) = byte_140C22E9C;
    qword_140C22EA0 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22E94 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22F48, DelayedWorkQueue);
}
