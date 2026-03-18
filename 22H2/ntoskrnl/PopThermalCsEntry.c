/*
 * XREFs of PopThermalCsEntry @ 0x14058F8DC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140878B14 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058FC28 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140595D40 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C3C830) = 0;
  if ( a1 )
  {
    byte_140C3C83D = 1;
    LOBYTE(v2) = byte_140C3C83C;
    qword_140C3C840 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140C3C834 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock(&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C8E8, DelayedWorkQueue);
}
