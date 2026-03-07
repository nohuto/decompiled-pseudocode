char __fastcall PfpPrefetchSharedCleanup(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // eax

  if ( *(_QWORD *)(a1 + 128) )
    KeAbPostRelease(a1);
  if ( *(_QWORD *)(a1 + 136) )
    KeAbPostRelease((ULONG_PTR)&PfGlobals);
  if ( *(_QWORD *)a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C64D60, 0LL);
    v3 = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v4 = *(_QWORD **)(a1 + 8), *v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C64D60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C64D60);
    KeAbPostRelease((ULONG_PTR)&qword_140C64D60);
    KeLeaveCriticalRegion();
  }
  v5 = *(_DWORD *)(a1 + 68);
  if ( (v5 & 1) != 0 )
  {
    ExReleaseRundownProtection_0(&RunRef);
    *(_DWORD *)(a1 + 68) &= ~1u;
    v5 = *(_DWORD *)(a1 + 68);
  }
  if ( *(_QWORD *)(a1 + 16) )
    PsSetCurrentThreadPrefetching((v5 & 2) != 0);
  v6 = *(_DWORD *)(a1 + 68);
  if ( (v6 & 8) != 0 )
    LOBYTE(v6) = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
