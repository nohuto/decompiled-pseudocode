char __fastcall PopSleepstudyInitialize(int a1)
{
  char *v1; // rbx
  LARGE_INTEGER v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)&unk_140C3B930 + 104 * (unsigned int)dword_140C3B928;
  if ( a1 )
    return PopSleepstudySendSessionChangeWnf(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
  qword_140C3BC78 = 0LL;
  PopSleepstudySessionLock = 0LL;
  qword_140C3B868 = (__int64)PopSleepstudySessionContext;
  PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
  *(_DWORD *)v1 = 0;
  v1[35] = 0;
  *((_DWORD *)v1 + 8) &= 0xFF000000;
  *((_QWORD *)v1 + 2) = RtlGetInterruptTimePrecise(&v3);
  stru_140C3B908.Parameter = 0LL;
  stru_140C3B908.List.Flink = 0LL;
  word_140C3B882 = 0;
  stru_140C3B908.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((unsigned __int64)&unk_140C3B880, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
