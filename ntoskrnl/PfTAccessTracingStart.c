/*
 * XREFs of PfTAccessTracingStart @ 0x140A858C4
 * Callers:
 *     PfGetCompletedTrace @ 0x1407E76DC (PfGetCompletedTrace.c)
 *     PfTStart @ 0x140844B00 (PfTStart.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9CFDC (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmSetAccessLogging @ 0x1402FF710 (MmSetAccessLogging.c)
 *     MmGetDefaultPagePriority @ 0x14035B470 (MmGetDefaultPagePriority.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A85978 (MmEnablePeriodicAccessClearing.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbp
  int v8; // esi
  bool v9; // zf
  int DefaultPagePriority; // eax
  __int64 v11; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 16);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  v8 = ~a3;
  v9 = (v8 & *(_DWORD *)(a1 + 12)) == 0;
  *(_DWORD *)(a1 + 12) &= v8;
  if ( v9 )
  {
    *(_DWORD *)(a2 + 40) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(1, DefaultPagePriority);
    LOBYTE(v11) = 1;
    MmEnablePeriodicAccessClearing(v11);
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
}
