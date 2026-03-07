__int64 __fastcall PspCreatePicoProcess(__int64 a1, __int64 a2, HANDLE *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  int v4; // ebx
  void *v7; // r14
  int v8; // edi
  ULONG_PTR v9; // rcx
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  PVOID v14; // rsi
  int v15; // eax
  HANDLE v16; // rbx
  char *v17; // r14
  volatile signed __int64 *v18; // rsi
  int v19; // r14d
  PVOID Object; // [rsp+60h] [rbp-10h] BYREF
  __int64 v22; // [rsp+68h] [rbp-8h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+40h] BYREF
  HANDLE *v24; // [rsp+C0h] [rbp+50h]
  PVOID v25; // [rsp+C8h] [rbp+58h] BYREF

  v24 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_DWORD *)(a1 + 24);
  v22 = 0LL;
  v25 = 0LL;
  v7 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  if ( (v4 & 0xFFFFFFF0) != 0 || (v4 & 6) != 0 && (v4 & 1) == 0 || !*(_QWORD *)(a1 + 16) )
    return (unsigned int)-1073741811;
  v8 = ObpReferenceObjectByHandleWithTag(*(_QWORD *)a1, 128, (__int64)PsProcessType, 0, 0x72437350u, &v25, 0LL, 0LL);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = *(_QWORD *)(a1 + 8);
  if ( !v9 )
    goto LABEL_10;
  v8 = ObpReferenceObjectByHandleWithTag(v9, 9, (__int64)SeTokenObjectType, 0, 0x72437350u, &v22, 0LL, 0LL);
  if ( v8 >= 0 )
  {
    v7 = (void *)v22;
LABEL_10:
    v10 = 0;
    if ( (v4 & 1) != 0 )
    {
      v10 = 2 * (v4 & 2 | 0x1000);
      if ( (v4 & 4) != 0 )
        v10 |= 0x4000u;
    }
    v11 = v10 | 1;
    if ( (v4 & 8) == 0 )
      v11 = v10;
    v12 = 0LL;
    v13 = 0LL;
    if ( a2 )
    {
      v12 = *(_QWORD *)(a2 + 8);
      v13 = *(_QWORD *)(a2 + 16);
    }
    v14 = v25;
    v15 = PsCreateMinimalProcess((__int64)v25, v12, v13, 0, v7, v11, 2, *(_QWORD *)(a1 + 16), 0LL, 0LL, &Handle);
    v16 = Handle;
    v8 = v15;
    if ( v15 >= 0 )
    {
      v8 = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Handle,
             128,
             (__int64)PsProcessType,
             0,
             0x72437350u,
             &Object,
             0LL,
             0LL);
      if ( v8 >= 0 )
      {
        v17 = (char *)Object;
        --CurrentThread->KernelApcDisable;
        v18 = (volatile signed __int64 *)(v17 + 1080);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v17 + 1080), 0LL);
        if ( (*((_DWORD *)v17 + 281) & 8) != 0 )
        {
          v8 = -1073741558;
        }
        else
        {
          _interlockedbittestandset((volatile signed __int32 *)v17 + 280, 0xAu);
          *v24 = Handle;
          Handle = 0LL;
        }
        v19 = v8;
        if ( (_InterlockedExchangeAdd64(v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v18);
        KeAbPostRelease((ULONG_PTR)v18);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        ObfDereferenceObjectWithTag(Object, 0x72437350u);
        v14 = v25;
        v8 = 0;
        v16 = Handle;
        if ( v19 < 0 )
          v8 = v19;
        v7 = (void *)v22;
      }
    }
    if ( v16 )
      ZwClose(v16);
    if ( v7 )
      ObfDereferenceObjectWithTag(v7, 0x72437350u);
    goto LABEL_32;
  }
  v14 = v25;
LABEL_32:
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v8;
}
