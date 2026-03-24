/*
 * XREFs of PopSleepstudyInitialize @ 0x140A40C80
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x140796B90 (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A7B0 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 */

char PopSleepstudyInitialize()
{
  char *v0; // rbx
  LARGE_INTEGER v2; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E458 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (char *)&unk_140C1E518 + 96 * (unsigned int)dword_140C1E510;
  *(_DWORD *)v0 = 0;
  *((_DWORD *)v0 + 8) = 1;
  *((_QWORD *)v0 + 2) = RtlGetInterruptTimePrecise(&v2);
  stru_140C1E4F0.Parameter = 0LL;
  stru_140C1E4F0.List.Flink = 0LL;
  word_140C1E46A = 0;
  stru_140C1E4F0.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E468, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
