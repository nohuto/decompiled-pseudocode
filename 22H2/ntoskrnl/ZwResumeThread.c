/*
 * XREFs of ZwResumeThread @ 0x1403FA460
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402DC898 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140886DA0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwResumeThread(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
