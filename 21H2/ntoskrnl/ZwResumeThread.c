/*
 * XREFs of ZwResumeThread @ 0x14041C1A0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402D5484 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140929C60 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140B263A0 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
