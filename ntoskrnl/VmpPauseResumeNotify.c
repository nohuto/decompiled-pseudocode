__int64 __fastcall VmpPauseResumeNotify(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v3; // r14
  struct _KTHREAD *v6; // rax
  unsigned int v7; // eax
  int v8; // esi
  int v9; // r15d
  int i; // r15d
  struct _KTHREAD *v11; // rax
  unsigned int v12; // ecx
  int v14; // [rsp+60h] [rbp+30h]

  CurrentThread = KeGetCurrentThread();
  v3 = (volatile signed __int64 *)(a1 + 112);
  v14 = 4;
  --CurrentThread->KernelApcDisable;
  v6 = KeGetCurrentThread();
  --v6->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  v7 = *(_DWORD *)(a1 + 120);
  if ( (v7 & 1) != 0 )
  {
    v8 = -1073740682;
    goto LABEL_26;
  }
  v9 = (v7 >> 1) & 3;
  if ( a2 )
  {
    if ( v9 >= a2 )
    {
      v8 = -1073741811;
      goto LABEL_26;
    }
  }
  else if ( !v9 )
  {
    v8 = 1075380276;
    goto LABEL_26;
  }
  *(_DWORD *)(a1 + 120) = v7 | 1;
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  if ( a2 )
  {
    for ( i = v9 + 1; ; ++i )
    {
      if ( i > a2 )
      {
        v14 = a2;
        goto LABEL_23;
      }
      if ( i == 1 )
      {
        if ( *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[6] << 12 >> 20 > (unsigned __int64)(unsigned int)VmPauseOutswapSizeCapMB )
          continue;
      }
      else
      {
        if ( (unsigned int)(i - 2) > 1
          || !*(_DWORD *)(MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 1192) && i != 3 )
        {
          continue;
        }
        SmStoreExistsForProcess((__int64)KeGetCurrentThread()->ApcState.Process);
      }
      v8 = MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
      if ( v8 < 0 )
        goto LABEL_24;
    }
  }
  MmProcessWorkingSetControl(0xFFFFFFFFFFFFFFFFuLL);
  v14 = 0;
LABEL_23:
  v8 = 0;
LABEL_24:
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v3, 0LL);
  v12 = *(_DWORD *)(a1 + 120) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 120) = v12;
  if ( v14 != 4 )
    *(_DWORD *)(a1 + 120) = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(2 * v14)) & 6;
LABEL_26:
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
