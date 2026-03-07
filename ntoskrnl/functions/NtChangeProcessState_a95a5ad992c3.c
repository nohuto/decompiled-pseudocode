__int64 __fastcall NtChangeProcessState(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, int a5, int a6)
{
  int v8; // edi
  char PreviousMode; // bl
  int v10; // edx
  int v11; // eax
  PVOID v12; // rcx
  struct _KTHREAD *CurrentThread; // r15
  char *v14; // rdi
  volatile signed __int64 *v15; // r14
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  PVOID v18; // [rsp+48h] [rbp-8h] BYREF

  Object = 0LL;
  v18 = 0LL;
  if ( a3 >= 2 )
    return (unsigned int)-1073741821;
  if ( a5 )
    return (unsigned int)-1073741820;
  if ( a4 || a6 )
    return (unsigned int)-1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v8 = ObpReferenceObjectByHandleWithTag(a1, 1, PspProcessStateChangeType, PreviousMode, 0x63507350u, &v18, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v10 = 0;
    if ( a3 <= 1 )
      v10 = 2048;
    v11 = ObpReferenceObjectByHandleWithTag(
            a2,
            v10,
            (__int64)PsProcessType,
            PreviousMode,
            0x63507350u,
            &Object,
            0LL,
            0LL);
    v12 = Object;
    v8 = v11;
    if ( v11 < 0 )
      goto LABEL_28;
    if ( *(PVOID *)v18 != Object )
    {
      v8 = -1073741811;
LABEL_28:
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x63507350u);
      goto LABEL_30;
    }
    CurrentThread = KeGetCurrentThread();
    v14 = (char *)v18;
    --CurrentThread->KernelApcDisable;
    v15 = (volatile signed __int64 *)(v14 + 8);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v14 + 8), 0LL);
    if ( a3 )
    {
      if ( a3 == 1 )
      {
        if ( !*((_DWORD *)v14 + 4) )
        {
          v8 = -1073741811;
LABEL_25:
          if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v15);
          KeAbPostRelease((ULONG_PTR)v15);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          v12 = Object;
          goto LABEL_28;
        }
        PsThawMultiProcess((__int64)Object, 0LL, 1u);
        --*((_DWORD *)v14 + 4);
      }
    }
    else
    {
      if ( *((_DWORD *)v14 + 4) == -1 )
      {
        v8 = -1073741750;
        goto LABEL_25;
      }
      if ( !PsFreezeProcess((__int64)Object, 0) )
      {
        v8 = -1073741558;
        goto LABEL_25;
      }
      ++*((_DWORD *)v14 + 4);
    }
    v8 = 0;
    goto LABEL_25;
  }
LABEL_30:
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x63507350u);
  return (unsigned int)v8;
}
