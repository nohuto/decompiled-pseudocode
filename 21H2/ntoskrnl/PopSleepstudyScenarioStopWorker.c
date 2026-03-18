/*
 * XREFs of PopSleepstudyScenarioStopWorker @ 0x140806B90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopDiagTraceSleepStudyStop @ 0x140806BFC (PopDiagTraceSleepStudyStop.c)
 *     PopDiagTraceSleepStudyStart @ 0x14080A52C (PopDiagTraceSleepStudyStart.c)
 */

void PopSleepstudyScenarioStopWorker()
{
  _DWORD *v0; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopSleepstudySessionLock);
  byte_140C1FF98 = 0;
  v0 = (_DWORD *)((char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048);
  PopDiagTraceSleepStudyStop(qword_140C1FF90);
  qword_140C1FF90 = -1LL;
  if ( (unsigned int)(*v0 - 1) <= 1 )
    PopDiagTraceSleepStudyStart();
  PopReleaseRwLock((ULONG_PTR)&PopSleepstudySessionLock);
}
