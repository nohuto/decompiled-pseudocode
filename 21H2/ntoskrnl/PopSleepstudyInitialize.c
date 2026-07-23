/*
 * XREFs of PopSleepstudyInitialize @ 0x140A41C80
 * Callers:
 *     PopDiagSleepStudyInitialize @ 0x140796D90 (PopDiagSleepStudyInitialize.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14029A5CC (KiInitializeTimer2.c)
 *     RtlGetInterruptTimePrecise @ 0x1402CF060 (RtlGetInterruptTimePrecise.c)
 */

char PopSleepstudyInitialize()
{
  LARGE_INTEGER *v0; // rbx
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  qword_140C1E438 = 0LL;
  PopSleepstudySessionLock = 0LL;
  v0 = (LARGE_INTEGER *)((char *)&unk_140C1E4F8 + 96 * (unsigned int)dword_140C1E4F0);
  v0->LowPart = 0;
  v0[4].LowPart = 1;
  v0[2] = RtlGetInterruptTimePrecise(&PerformanceCounter);
  stru_140C1E4D0.Parameter = 0LL;
  stru_140C1E4D0.List.Flink = 0LL;
  word_140C1E44A = 0;
  stru_140C1E4D0.WorkerRoutine = (void (__fastcall *)(void *))PopSleepstudyScenarioStopWorker;
  return KiInitializeTimer2((__int64)&unk_140C1E448, (__int64)PopSleepstudyScenarioStopTimerCallback, 0LL, 8);
}
