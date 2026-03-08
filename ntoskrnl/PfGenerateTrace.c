/*
 * XREFs of PfGenerateTrace @ 0x14073A870
 * Callers:
 *     PfpLogScenarioEvent @ 0x14073A758 (PfpLogScenarioEvent.c)
 *     PfSetSuperfetchInformation @ 0x1407E2A94 (PfSetSuperfetchInformation.c)
 *     PfpLogEventRequest @ 0x14097ADD8 (PfpLogEventRequest.c)
 *     PfPowerActionNotify @ 0x140A9CD7C (PfPowerActionNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 */

__int64 __fastcall PfGenerateTrace(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  PVOID v6; // r14
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  v5 = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v6 = *(PVOID *)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v6;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v6);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  }
  else
  {
    v5 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v5;
}
