/*
 * XREFs of PopSleepstudyInitialize @ 0x140A400B0
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x140791A20 (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x14022A120 (RtlGetInterruptTimePrecise.c)
 *     KiInitializeTimer2 @ 0x14035A7DC (KiInitializeTimer2.c)
 */

char PopSleepstudyInitialize()
{
  LARGE_INTEGER *v0; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E458 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (LARGE_INTEGER *)((char *)&unk_140C1E518 + 96 * (unsigned int)dword_140C1E510);
  v0->LowPart = 0;
  v0[4].LowPart = 1;
  v0[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C1E4F0.Parameter = 0LL;
  stru_140C1E4F0.List.Flink = 0LL;
  word_140C1E46A = 0;
  stru_140C1E4F0.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E468, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
