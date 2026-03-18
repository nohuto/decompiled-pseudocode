/*
 * XREFs of PopThermalCsExit @ 0x14058F95C
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FC28 (PopThermalStandbyEndTracking.c)
 *     PopThermalStandbyNotify @ 0x14058FC80 (PopThermalStandbyNotify.c)
 */

char PopThermalCsExit()
{
  __int64 v0; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  PopThermalStandbyEndTracking(1LL);
  LOBYTE(word_140C3C830) = 1;
  if ( dword_140C3C834 )
  {
    LOBYTE(v0) = 1;
    PopThermalStandbyNotify(v0);
    word_140C3C830 = 256;
  }
  else if ( HIBYTE(word_140C3C830) )
  {
    PopThermalStandbyNotify(0LL);
    HIBYTE(word_140C3C830) = 0;
  }
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C8E8, DelayedWorkQueue);
}
