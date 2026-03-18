/*
 * XREFs of PsTerminateProcess @ 0x140683794
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x140618F40 (MiReAcquireCommitFailWorker.c)
 *     PspRemoveProcessFromJobChain @ 0x1406A2DB0 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF954 (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     KiSchedulerApcTerminate @ 0x14076D4E0 (KiSchedulerApcTerminate.c)
 *     PspProcessClose @ 0x1407BE600 (PspProcessClose.c)
 *     PsCreateMinimalProcess @ 0x140853DBC (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x1409371C0 (DbgkpCloseObject.c)
 *     PspShutdownCsrProcess @ 0x1409AD358 (PspShutdownCsrProcess.c)
 *     PsShutdownSystem @ 0x1409B35F4 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x1409BD5B8 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x140A080D0 (WheaTerminateProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140A2B198 (MiForceCrashForInvalidAccess.c)
 *     ExpDebuggerWorker @ 0x140AB2C90 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406839D4 (PspTerminateProcess.c)
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
