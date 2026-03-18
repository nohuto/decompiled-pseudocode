/*
 * XREFs of ZwResumeThread @ 0x14041B0E0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140303D2C (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140939CF0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140B69B90 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
