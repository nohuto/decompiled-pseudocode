/*
 * XREFs of PspRemoveEnclaveThreadWait @ 0x1409B4B8C
 * Callers:
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PspRemoveEnclaveThreadWait(__int64 a1, __int64 *a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v4; // rsi
  __int64 v7; // rcx
  __int64 **v8; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = (volatile signed __int64 *)(a1 + 112);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v7 = *a2;
  if ( *a2 )
  {
    if ( *(__int64 **)(v7 + 8) != a2 || (v8 = (__int64 **)a2[1], *v8 != a2) )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
  }
  else
  {
    a3 = *((_DWORD *)a2 + 10);
  }
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return a3;
}
