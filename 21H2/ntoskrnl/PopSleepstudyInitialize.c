/*
 * XREFs of PopSleepstudyInitialize @ 0x140B02344
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140303490 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 *     PopSleepstudySendSessionChangeWnf @ 0x140811C98 (PopSleepstudySendSessionChangeWnf.c)
 */

char __fastcall PopSleepstudyInitialize(int a1)
{
  char *v1; // rbx
  LARGE_INTEGER v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)&unk_140C20050 + 104 * (unsigned int)dword_140C20048;
  if ( a1 )
    return PopSleepstudySendSessionChangeWnf(*((_QWORD *)v1 + 1), *(_DWORD *)v1, *((_DWORD *)v1 + 8));
  qword_140C1FF68 = 0LL;
  PopSleepstudySessionLock = 0LL;
  qword_140C1FF88 = (__int64)PopSleepstudySessionContext;
  PopSleepstudySessionContext[0] = (__int64)PopSleepstudySessionContext;
  *(_DWORD *)v1 = 0;
  v1[35] = 0;
  *((_DWORD *)v1 + 8) &= 0xFF000000;
  *((_QWORD *)v1 + 2) = RtlGetInterruptTimePrecise(&v3);
  stru_140C20028.Parameter = 0LL;
  stru_140C20028.List.Flink = 0LL;
  word_140C1FFA2 = 0;
  stru_140C20028.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1FFA0, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
