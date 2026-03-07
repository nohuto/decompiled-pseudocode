__int64 __fastcall EtwpCovSampProcessAddModule(__int64 a1, PVOID *a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v5; // rbp
  void *Pool2; // r14
  int v11; // r12d
  unsigned int v12; // eax
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  struct _KTHREAD *v17; // rax
  const void *v18; // rdx
  void *v19; // rax
  unsigned int v20; // esi
  _QWORD *v21; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int64 *)(a1 + 8);
  --CurrentThread->KernelApcDisable;
  Pool2 = 0LL;
  ExAcquirePushLockExclusiveEx(a1 + 8, 0LL);
  *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
  if ( !*(_QWORD *)a1 )
  {
    ObfReferenceObject(*a2);
    *(_QWORD *)a1 = a2;
  }
  if ( (*(_DWORD *)(a3 + 120) & 0x110000) != 0 )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
      v13 = *(_DWORD *)(a1 + 36);
      v14 = v12;
      v15 = *(_DWORD *)(a1 + 32);
      if ( v15 < v13 )
        break;
      v16 = 2 * v13;
      if ( !v13 )
        v16 = 16;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x56777445u);
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * v16, 1450669125LL);
      if ( !Pool2 )
      {
        v20 = -1073741670;
        goto LABEL_25;
      }
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)v5, 0LL);
      *(_QWORD *)(a1 + 16) = KeGetCurrentThread();
      if ( v16 > *(_DWORD *)(a1 + 36) )
      {
        v18 = *(const void **)(a1 + 24);
        if ( v18 )
          memmove(Pool2, v18, 16LL * *(unsigned int *)(a1 + 32));
        v19 = *(void **)(a1 + 24);
        *(_QWORD *)(a1 + 24) = Pool2;
        Pool2 = v19;
        *(_DWORD *)(a1 + 36) = v16;
      }
      if ( (unsigned int)++v11 >= 0x14 )
      {
        v20 = -1073741823;
        goto LABEL_25;
      }
    }
    v21 = (_QWORD *)(*(_QWORD *)(a1 + 24) + 16 * v14);
    if ( v15 > (unsigned int)v14 )
      memmove(v21 + 2, (const void *)(*(_QWORD *)(a1 + 24) + 16 * v14), 16LL * (v15 - (unsigned int)v14));
    ++*(_DWORD *)(a1 + 32);
    *v21 = a4 + *(_QWORD *)(a3 + 40);
    EtwpCovSampModuleReference(*(_QWORD *)a1, a3);
    v21[1] = a3;
  }
  else
  {
    EtwpCovSampProcessRemoveModule(a1, a4, *(_QWORD *)(a3 + 40));
  }
  v20 = 0;
LABEL_25:
  if ( *(struct _KTHREAD **)(a1 + 16) == KeGetCurrentThread() )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x56777445u);
  return v20;
}
