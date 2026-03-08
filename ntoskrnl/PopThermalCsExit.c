/*
 * XREFs of PopThermalCsExit @ 0x14058D42C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058D6F8 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14058D750 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL);
  LOBYTE(word_140C3C450) = 1;
  if ( dword_140C3C454 )
  {
    LOBYTE(v0) = 1;
    PopThermalStandbyNotify(v0);
    word_140C3C450 = 256;
  }
  else if ( HIBYTE(word_140C3C450) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C3C450) = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C508, DelayedWorkQueue);
}
