__int64 __fastcall PsGetProcessEnclaveModuleInfo(__int64 a1, char **a2, unsigned int *a3)
{
  volatile signed __int64 *v3; // r12
  int EnclaveModuleList; // r15d
  unsigned int v5; // ebp
  char *Pool2; // r13
  int v7; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v10; // rsi
  __int64 v11; // r9
  _QWORD **v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r14
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  int v18; // [rsp+60h] [rbp+8h]

  v3 = (volatile signed __int64 *)(a1 + 2264);
  EnclaveModuleList = 0;
  v18 = 0;
  v5 = 0;
  Pool2 = 0LL;
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  v10 = a3;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
  v11 = *(_QWORD *)(a1 + 2248);
  if ( v11 )
  {
    v12 = *(_QWORD ***)(v11 + 8);
    v13 = v12;
    while ( v13 )
    {
      v13 = (_QWORD *)*v13;
      if ( ((unsigned __int8)v13 & 1) != 0 )
        break;
LABEL_12:
      if ( !v13 )
        goto LABEL_9;
      ++v5;
    }
    for ( ++v12;
          (unsigned __int64)v12 < *(_QWORD *)(v11 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v11 + 4) >> 5);
          ++v12 )
    {
      v13 = *v12;
      if ( ((unsigned __int8)*v12 & 1) == 0 )
        goto LABEL_12;
    }
LABEL_9:
    if ( v5 )
    {
      Pool2 = (char *)ExAllocatePool2(256LL, 16LL * v5, 1447383888LL);
      if ( Pool2 )
      {
        v14 = *(_QWORD *)(a1 + 2248);
        v15 = *(_QWORD **)(v14 + 8);
        v16 = v15;
        while ( v16 )
        {
          v16 = (_QWORD *)*v16;
          if ( ((unsigned __int8)v16 & 1) != 0 )
            break;
LABEL_22:
          if ( v16 )
          {
            EnclaveModuleList = MmGetEnclaveModuleList(v16[4], &Pool2[16 * v18], &Pool2[16 * v18 + 8]);
            if ( EnclaveModuleList >= 0 && ++v18 < v5 )
              continue;
          }
          goto LABEL_25;
        }
        for ( ++v15;
              (unsigned __int64)v15 < *(_QWORD *)(v14 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v14 + 4) >> 5);
              ++v15 )
        {
          v16 = (_QWORD *)*v15;
          if ( (*v15 & 1) == 0 )
            goto LABEL_22;
        }
LABEL_25:
        v7 = v18;
        v10 = a3;
      }
      else
      {
        EnclaveModuleList = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( EnclaveModuleList < 0 )
  {
    PsFreeEnclaveModuleInfo(Pool2, v7);
  }
  else
  {
    *a2 = Pool2;
    *v10 = v5;
  }
  return (unsigned int)EnclaveModuleList;
}
