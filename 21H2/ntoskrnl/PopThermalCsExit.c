/*
 * XREFs of PopThermalCsExit @ 0x14056F7F0
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE120 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14038AE70 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056F86C (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22E10) = 1;
  if ( dword_140C22E14 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22E10 = 256;
  }
  else if ( HIBYTE(word_140C22E10) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22E10) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22EC8, DelayedWorkQueue);
}
