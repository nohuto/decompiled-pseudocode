/*
 * XREFs of PopThermalCsEntry @ 0x1405D03D0
 * Callers:
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 *     PopThermalStandbyEndTracking @ 0x14038B428 (PopThermalStandbyEndTracking.c)
 *     PopTraceThermalStandbyInitiated @ 0x1405D4440 (PopTraceThermalStandbyInitiated.c)
 */

char __fastcall PopThermalCsEntry(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemThermalInfo);
  LOBYTE(word_140C22070) = 0;
  if ( a1 )
  {
    byte_140C2207D = 1;
    LOBYTE(v3) = byte_140C2207C;
    qword_140C22080 = MEMORY[0xFFFFF78000000008];
    PopTraceThermalStandbyInitiated(v3);
  }
  if ( !dword_140C22074 )
    PopThermalStandbyEndTracking(0LL, v2, v4);
  PopReleaseRwLock((ULONG_PTR)&PopSystemThermalInfo);
  return PopQueueWorkItem((__int64)&unk_140C22128, DelayedWorkQueue);
}
