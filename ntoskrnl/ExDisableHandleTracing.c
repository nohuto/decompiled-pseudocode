/*
 * XREFs of ExDisableHandleTracing @ 0x140604594
 * Callers:
 *     PsSetProcessHandleTracingInformation @ 0x1409AB674 (PsSetProcessHandleTracingInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ExDereferenceHandleDebugInfo @ 0x1409F5EC0 (ExDereferenceHandleDebugInfo.c)
 */

char __fastcall ExDisableHandleTracing(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  volatile signed __int64 *v2; // rbp
  __int64 v4; // rsi
  char result; // al

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 56);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
  v4 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = 0LL;
  if ( v4 && (*(_DWORD *)(v4 + 8) & 8) == 0 )
    *(_BYTE *)(a1 + 44) &= ~2u;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    return ExDereferenceHandleDebugInfo(a1, v4);
  return result;
}
