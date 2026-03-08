/*
 * XREFs of ZwResumeThread @ 0x140412D50
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1403679CC (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140936CD0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140B662B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
