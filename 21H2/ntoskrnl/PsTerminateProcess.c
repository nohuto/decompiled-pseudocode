/*
 * XREFs of PsTerminateProcess @ 0x1406BC4B8
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14052C330 (MiReAcquireCommitFailWorker.c)
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspRemoveProcessFromJobChain @ 0x140616398 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x14061AEAC (PspCallProcessNotifyRoutines.c)
 *     PspProcessClose @ 0x1406952B0 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x1406A5600 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x1407C6284 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140884830 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42A4 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x140906650 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14090A89C (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x140914E60 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x14095D514 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406D9D20 (PspTerminateProcess.c)
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
