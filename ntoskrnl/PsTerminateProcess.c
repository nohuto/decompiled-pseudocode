/*
 * XREFs of PsTerminateProcess @ 0x1407DC8A0
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140616A90 (MiReAcquireCommitFailWorker.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 *     NtCreateUserProcess @ 0x14070C850 (NtCreateUserProcess.c)
 *     PspProcessClose @ 0x14076BF20 (PspProcessClose.c)
 *     PspCallProcessNotifyRoutines @ 0x1407D2E14 (PspCallProcessNotifyRoutines.c)
 *     KiSchedulerApcTerminate @ 0x1407DBA70 (KiSchedulerApcTerminate.c)
 *     PsCreateMinimalProcess @ 0x140817C28 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x1409AA2D8 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BA58C (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140A053E0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1407DC198 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(struct _KPROCESS *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v3; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = PspTerminateProcess(a1, (__int64)CurrentThread, a2, 1u);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v3;
}
