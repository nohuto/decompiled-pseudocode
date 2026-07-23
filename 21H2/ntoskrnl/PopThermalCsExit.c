/*
 * XREFs of PopThermalCsExit @ 0x14056FA30
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE280 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038AFC0 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056FAAC (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22E90) = 1;
  if ( dword_140C22E94 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22E90 = 256;
  }
  else if ( HIBYTE(word_140C22E90) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22E90) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22F48, DelayedWorkQueue);
}
