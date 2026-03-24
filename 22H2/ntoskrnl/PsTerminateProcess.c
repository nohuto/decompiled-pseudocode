/*
 * XREFs of PsTerminateProcess @ 0x14069F4E8
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14052C270 (MiReAcquireCommitFailWorker.c)
 *     NtCreateUserProcess @ 0x14060A630 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x1406167F8 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x14061B30C (PspCallProcessNotifyRoutines.c)
 *     PspProcessClose @ 0x1406796D0 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406886D0 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x140798E60 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140884880 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42F4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1409066A0 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14090A8EC (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x140914EB0 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x14095D564 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1407075F0 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v2;
}
