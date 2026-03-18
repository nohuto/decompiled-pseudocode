/*
 * XREFs of PspDetachProcessFromSyscallProvider @ 0x1409B4B98
 * Callers:
 *     PspProcessDelete @ 0x1407615C0 (PspProcessDelete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     PspDereferenceSyscallProvider @ 0x1405A4C5C (PspDereferenceSyscallProvider.c)
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
