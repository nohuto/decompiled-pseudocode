NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  signed __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v6; // eax
  _QWORD *v7; // r15
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  NTSTATUS result; // eax
  __int64 v12; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v13[14]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = (signed __int64 *)(a1 + 48);
  v12 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 48, 0LL);
  v6 = *(_DWORD *)(a1 + 44);
  if ( v6 )
  {
    if ( (a2 & 4) == 0 && v6 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      *(_DWORD *)(a1 + 72) = 0;
      v7 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v8 = (_QWORD *)*v7;
        if ( (_QWORD *)*v7 == v7 )
          break;
        v9 = *v8;
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
          __fastfail(3u);
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = 0LL;
        *((_DWORD *)v8 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v8 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        memset(v13, 0, 0x68uLL);
        v13[1] = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 50, 0, (__int64)v13);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  result = KeWaitForSingleObject(
             (PVOID)(a1 + 80),
             Executive,
             KeGetCurrentThread()->PreviousMode,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v12 & -(__int64)((a2 & 5) != 0)));
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
