/*
 * XREFs of PsTerminateProcess @ 0x14061B628
 * Callers:
 *     MiReAcquireCommitFailWorker @ 0x14052C570 (MiReAcquireCommitFailWorker.c)
 *     PspProcessClose @ 0x1405F4800 (PspProcessClose.c)
 *     KiSchedulerApcTerminate @ 0x140603230 (KiSchedulerApcTerminate.c)
 *     PspRemoveProcessFromJobChain @ 0x14067FFF8 (PspRemoveProcessFromJobChain.c)
 *     PspCallProcessNotifyRoutines @ 0x140684B0C (PspCallProcessNotifyRoutines.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PsCreateMinimalProcess @ 0x1407C65A4 (PsCreateMinimalProcess.c)
 *     DbgkpCloseObject @ 0x140884990 (DbgkpCloseObject.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C4404 (MiForceCrashForInvalidAccess.c)
 *     PspShutdownCsrProcess @ 0x1409067B0 (PspShutdownCsrProcess.c)
 *     PspUmsUnInitThread @ 0x14090A9FC (PspUmsUnInitThread.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     RtlpTerminateCurrentProcess @ 0x140914FC0 (RtlpTerminateCurrentProcess.c)
 *     WheaTerminateProcess @ 0x14095D6F4 (WheaTerminateProcess.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PspTerminateProcess @ 0x1406B1000 (PspTerminateProcess.c)
 */

__int64 __fastcall PsTerminateProcess(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = PspTerminateProcess(a1);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v3, v4, v5);
  return v2;
}
