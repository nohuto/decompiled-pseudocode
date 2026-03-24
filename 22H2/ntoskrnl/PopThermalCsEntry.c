/*
 * XREFs of PopThermalCsEntry @ 0x14056F6B0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EDF50 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038A770 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140573974 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22E70) = 0;
  if ( a1 )
  {
    byte_140C22E7D = 1;
    LOBYTE(v3) = byte_140C22E7C;
    qword_140C22E80 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22E74 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22F28, DelayedWorkQueue);
}
