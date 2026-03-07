__int64 __fastcall PspInheritSyscallProvider(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v3; // ebx
  struct _KTHREAD *CurrentThread; // r14
  signed __int64 *v8; // rsi
  unsigned int v9; // ebp

  v2 = *(struct _EX_RUNDOWN_REF **)(a2 + 2896);
  v3 = 0;
  if ( v2 )
  {
    CurrentThread = KeGetCurrentThread();
    v8 = (signed __int64 *)(a2 + 1080);
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx(a2 + 1080, 0LL);
    v9 = *(_DWORD *)(a2 + 2920);
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8);
    KeAbPostRelease((ULONG_PTR)v8);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( ExAcquireRundownProtection_0(v2 + 7) )
    {
      PspAttachProcessToSyscallProvider(a1, v2, v9);
      ExReleaseRundownProtection_0(v2 + 7);
    }
    else
    {
      return (unsigned int)-1073741738;
    }
  }
  return v3;
}
