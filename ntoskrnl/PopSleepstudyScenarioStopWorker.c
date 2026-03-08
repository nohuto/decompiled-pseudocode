/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x1409903B0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStart @ 0x140879BB0 (PopDiagTraceSleepStudyStart.c)
 *     PopDiagTraceSleepStudyStop @ 0x14098E6C8 (PopDiagTraceSleepStudyStop.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  byte_140C3B878 = 0;
  v0 = (_DWORD *)((char *)&unk_140C3B930 + 104 * (unsigned int)dword_140C3B928);
  PopDiagTraceSleepStudyStop(qword_140C3B870);
  qword_140C3B870 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
