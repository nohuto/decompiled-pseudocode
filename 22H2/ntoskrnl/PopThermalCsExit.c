/*
 * XREFs of PopThermalCsExit @ 0x14056F730
 * Callers:
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x1408EE170 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopThermalStandbyEndTracking @ 0x14038A770 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14056F7AC (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL, v0, v1);
  LOBYTE(word_140C22E70) = 1;
  if ( dword_140C22E74 )
  {
    LOBYTE(v2) = 1;
    PopThermalStandbyNotify(v2);
    word_140C22E70 = 256;
  }
  else if ( HIBYTE(word_140C22E70) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C22E70) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22F28, DelayedWorkQueue);
}
