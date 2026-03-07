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
