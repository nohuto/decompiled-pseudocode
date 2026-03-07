__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdi
  __int64 Host; // rdi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  void (__fastcall *v14)(_QWORD, _QWORD); // rax
  PVOID v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD); // rax
  char v17; // bl
  _QWORD *v18; // rcx
  unsigned int v20; // ebx

  if ( (a2 & 0xFFFF0000) != 0x10000 || !*((_QWORD *)a3 + 1) && a3[2] )
    return 3221225485LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&ExpHostListLock, 0, v6, (__int64)&ExpHostListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  Host = ExpFindHost(*a3, a3[1]);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
  KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !Host )
    return 3221226021LL;
  v8 = a3[2];
  if ( (unsigned __int16)v8 < *(_WORD *)(Host + 28) )
  {
    v20 = -1073741811;
LABEL_40:
    ExpDereferenceHost(Host);
    return v20;
  }
  v9 = 0;
  if ( a3[2] )
  {
    while ( *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL * v9) )
    {
      if ( ++v9 >= v8 )
        goto LABEL_14;
    }
    v20 = -1073741790;
    goto LABEL_40;
  }
LABEL_14:
  v10 = KeGetCurrentThread();
  v11 = (volatile signed __int64 *)(Host + 72);
  --v10->KernelApcDisable;
  v12 = KeAbPreAcquire(Host + 72, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(Host + 72), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(Host + 72), v12, Host + 72);
  if ( v13 )
    *(_BYTE *)(v13 + 18) = 1;
  if ( *(_QWORD *)(Host + 80) || (*(_BYTE *)(Host + 88) & 1) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
    KeAbPostRelease(Host + 72);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v20 = -1073741771;
    goto LABEL_40;
  }
  v14 = *(void (__fastcall **)(_QWORD, _QWORD))(Host + 48);
  if ( v14 )
    v14(0LL, *(_QWORD *)(Host + 56));
  v15 = (PVOID)*((_QWORD *)a3 + 1);
  if ( !v15 )
    v15 = MmBadPointer;
  *(_QWORD *)(Host + 80) = v15;
  _InterlockedExchange64((volatile __int64 *)(Host + 64), 0LL);
  v16 = *(void (__fastcall **)(__int64, _QWORD))(Host + 48);
  if ( v16 )
    v16(1LL, *(_QWORD *)(Host + 56));
  v17 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)(Host + 72));
  KeAbPostRelease(Host + 72);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v18 = (_QWORD *)*((_QWORD *)a3 + 2);
  if ( v18 )
    *v18 = *(_QWORD *)(Host + 40);
  *a1 = Host;
  return 0LL;
}
