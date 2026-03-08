/*
 * XREFs of KiSchedulerApcTerminate @ 0x1407DBA70
 * Callers:
 *     <none>
 * Callees:
 *     KiIsProcessTerminationRequested @ 0x140354EE0 (KiIsProcessTerminationRequested.c)
 *     PspExitThread @ 0x1407D9464 (PspExitThread.c)
 *     PsTerminateProcess @ 0x1407DC8A0 (PsTerminateProcess.c)
 */

void __noreturn KiSchedulerApcTerminate()
{
  _DWORD v0[6]; // [rsp+20h] [rbp-18h] BYREF

  v0[0] = 0;
  if ( KiIsProcessTerminationRequested((__int64)KeGetCurrentThread(), v0) )
    PsTerminateProcess(KeGetCurrentThread()->ApcState.Process, v0[0]);
  PspExitThread(KeGetCurrentThread()[1].Timer.DueTime.LowPart);
  JUMPOUT(0x1407DBAA8LL);
}
