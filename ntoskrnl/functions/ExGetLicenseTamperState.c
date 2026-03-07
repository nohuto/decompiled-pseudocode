bool __fastcall ExGetLicenseTamperState(_DWORD *a1)
{
  struct _LIST_ENTRY *Blink; // rbx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *p_Blink; // rdi
  bool v5; // bl
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  Blink = PsGetCurrentServerSiloGlobals()[56].Blink;
  CurrentThread = KeGetCurrentThread();
  p_Blink = (signed __int64 *)&Blink[2927].Blink;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&Blink[2927].Blink, 0LL);
  ExpGetLicenseTamperState((__int64)Blink, &v7);
  v5 = v7 != 0;
  if ( a1 )
    *a1 = v7;
  if ( _InterlockedCompareExchange64(p_Blink, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(p_Blink);
  KeAbPostRelease((ULONG_PTR)p_Blink);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
