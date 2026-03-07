char __fastcall PspAttachProcessToSyscallProvider(_QWORD *a1, __int64 a2, unsigned int a3)
{
  volatile signed __int64 *v5; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rsi

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 48)) <= 1 )
    __fastfail(0xEu);
  a1[362] = a2;
  v5 = (volatile signed __int64 *)(a2 + 64);
  a1[365] = *(_QWORD *)(a2 + 8LL * a3 + 88);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
  v7 = *(_QWORD **)(a2 + 80);
  v8 = a1 + 363;
  v9 = a2 + 72;
  if ( *v7 != v9 )
    __fastfail(3u);
  *v8 = v9;
  a1[364] = v7;
  *v7 = v8;
  *(_QWORD *)(v9 + 8) = v8;
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
