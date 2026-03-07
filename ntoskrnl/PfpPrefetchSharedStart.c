__int64 __fastcall PfpPrefetchSharedStart(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _KTHREAD *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *(_DWORD *)(a1 + 68) |= 8u;
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 68) ^= (*(_DWORD *)(a1 + 68) ^ (2 * PsSetCurrentThreadPrefetching(1u))) & 2;
  v3 = 0;
  if ( !ExAcquireRundownProtection_0(&RunRef) )
    return (unsigned int)-1073741127;
  *(_DWORD *)(a1 + 68) |= 1u;
  v4 = KeGetCurrentThread();
  --v4->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
  if ( (dword_140C64D78 & 1) == 0 )
  {
    v5 = qword_140C64D68;
    if ( *(__int64 **)(qword_140C64D68 + 8) != &qword_140C64D68 )
      __fastfail(3u);
    *(_QWORD *)a1 = qword_140C64D68;
    *(_QWORD *)(a1 + 8) = &qword_140C64D68;
    *(_QWORD *)(v5 + 8) = a1;
    qword_140C64D68 = a1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
  KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)a1 )
  {
    v6 = KeAbPreAcquire(a1, 0LL);
    *(_QWORD *)(a1 + 128) = v6;
    if ( v6 )
      *(_BYTE *)(v6 + 18) = 1;
    v7 = KeAbPreAcquire((__int64)&PfGlobals, 0LL);
    *(_QWORD *)(a1 + 136) = v7;
    if ( v7 )
      *(_BYTE *)(v7 + 18) = 1;
  }
  else
  {
    return (unsigned int)-1073741127;
  }
  return v3;
}
