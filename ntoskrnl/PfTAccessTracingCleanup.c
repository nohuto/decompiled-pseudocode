/*
 * XREFs of PfTAccessTracingCleanup @ 0x140A844E0
 * Callers:
 *     PfTTraceListAdd @ 0x1407E797C (PfTTraceListAdd.c)
 *     PfTCleanup @ 0x14097C168 (PfTCleanup.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140A9CFDC (PfpPowerActionStartScenarioTracing.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmSetAccessLogging @ 0x1402FF710 (MmSetAccessLogging.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     MmGetDefaultPagePriority @ 0x14035B470 (MmGetDefaultPagePriority.c)
 *     MmFreeAccessPfnBuffer @ 0x14035B5FC (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     MmEnablePeriodicAccessClearing @ 0x140A85978 (MmEnablePeriodicAccessClearing.c)
 *     PfTAccessTracingInitialize @ 0x140A85A48 (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  char v8; // r15
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v10; // rdi
  _QWORD *p_Next; // rcx

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 16);
  v8 = a3 == 4;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  *(_DWORD *)(a1 + 12) |= a3;
  DefaultPagePriority = MmGetDefaultPagePriority();
  MmSetAccessLogging(0, DefaultPagePriority);
  *(_DWORD *)(a2 + 40) = 0;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a2 + 8));
  v10 = RtlpInterlockedFlushSList(&stru_140D0BE80);
  while ( v10 )
  {
    p_Next = &v10->Next;
    v10 = v10->Next;
    MmFreeAccessPfnBuffer(p_Next, v8);
  }
  MmEnablePeriodicAccessClearing(0LL);
  PfTAccessTracingInitialize(a1, a2, 1LL);
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
}
