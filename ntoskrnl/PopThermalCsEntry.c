/*
 * XREFs of PopThermalCsEntry @ 0x14058D3AC
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x1408797E4 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14058D6F8 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x140593824 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rcx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C3C450) = 0;
  if ( a1 )
  {
    byte_140C3C45D = 1;
    LOBYTE(v2) = byte_140C3C45C;
    qword_140C3C460 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v2);
  }
  if ( !dword_140C3C454 )
    PopThermalStandbyEndTracking(0LL);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C3C508, DelayedWorkQueue);
}
