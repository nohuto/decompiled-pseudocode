void __fastcall PfpParametersPropagate(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  __int64 v4; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PfTGlobals, 0LL);
  if ( (dword_140C64DC8 & 1) != 0 )
    v3 = a1[20] != dword_140C64FDC;
  if ( (dword_140C64DC8 & 2) != 0 && a1[19] != dword_140C64FE4 )
    v3 |= 2u;
  if ( (dword_140C64DC8 & 3) != 0 && (a1[17] & 1) == 0 || v3 )
  {
    PfTCleanup((__int64)&PfTGlobals, (__int64)&PfKernelGlobals);
    PfTInitialize(&PfTGlobals, (unsigned __int64 *)&PfKernelGlobals, 1);
    PfTStart((__int64)&PfTGlobals, v4, v3);
  }
  if ( ((a1[17] & 2) != 0) != (dword_140C64D40 & 1) )
  {
    if ( (a1[17] & 2) != 0 )
    {
      _InterlockedExchange64(&qword_140C64D30, 0LL);
      dword_140C64D40 |= 1u;
    }
    else
    {
      PfpRpShutdown((__int64)&unk_140C64CA8);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
  KeAbPostRelease((ULONG_PTR)&PfTGlobals);
  KeLeaveCriticalRegion();
}
