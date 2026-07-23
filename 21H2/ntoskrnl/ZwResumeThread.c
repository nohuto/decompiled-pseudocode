/*
 * XREFs of ZwResumeThread @ 0x1403FAFC0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140203BC8 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140886EB0 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A4CB74 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
