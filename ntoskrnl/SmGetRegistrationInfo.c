/*
 * XREFs of SmGetRegistrationInfo @ 0x140840AC0
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1408409FC (SmProcessRegistrationRequest.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     SmRegistrationInfoFill @ 0x140840B78 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x14085DAC0 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(__int64 a1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rbp
  int v8; // edi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 1992);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 1992, 0LL);
  if ( (*(_DWORD *)(a1 + 1976) & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = SmRegistrationCtxStart(a1 + 2688);
    if ( v8 >= 0 )
      *(_DWORD *)(a1 + 1976) |= 8u;
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = a2;
    v8 = SmRegistrationInfoFill(a1 + 2688, v9, a3 + 8);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
