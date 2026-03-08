/*
 * XREFs of PspDetachProcessFromSyscallProvider @ 0x1409B1B48
 * Callers:
 *     PspProcessDelete @ 0x140704DD0 (PspProcessDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PspDereferenceSyscallProvider @ 0x1405A27AC (PspDereferenceSyscallProvider.c)
 */

__int64 __fastcall PspDetachProcessFromSyscallProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 2896) + 64LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v4 = *(_QWORD *)(a1 + 2904);
  if ( *(_QWORD *)(v4 + 8) != a1 + 2904 || (v5 = *(_QWORD **)(a1 + 2912), *v5 != a1 + 2904) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_QWORD *)(a1 + 2896);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 64), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 64));
  KeAbPostRelease(v6 + 64);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  result = PspDereferenceSyscallProvider(*(volatile signed __int64 **)(a1 + 2896));
  *(_QWORD *)(a1 + 2896) = 0LL;
  return result;
}
