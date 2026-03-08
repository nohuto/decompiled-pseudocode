/*
 * XREFs of PsIsVsmEnclaveTerminated @ 0x1409B478C
 * Callers:
 *     MiCanDeleteEnclave @ 0x140644B94 (MiCanDeleteEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

bool __fastcall PsIsVsmEnclaveTerminated(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // rdi
  bool v4; // si

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 48);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  if ( !*(_DWORD *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  v4 = *(_DWORD *)(a1 + 44) == 2;
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return v4;
}
