/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x1402B896C
 * Callers:
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
    if ( Thread )
      v3 = KeSetPriorityThread(Thread, Priority);
    else
      v3 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v3;
}
