/*
 * XREFs of PopThermalCsEntry @ 0x14056F770
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1408EDF00 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14038AE70 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140573A34 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22E10) = 0;
  if ( a1 )
  {
    byte_140C22E1D = 1;
    LOBYTE(v3) = byte_140C22E1C;
    qword_140C22E20 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22E14 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22EC8, DelayedWorkQueue);
}
