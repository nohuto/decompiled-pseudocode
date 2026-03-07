__int64 __fastcall DpiMiracastStopMiracastSessionSync(
        char *P,
        char a2,
        union _LARGE_INTEGER *a3,
        struct _KEVENT *a4,
        unsigned int a5,
        int a6)
{
  __int64 v8; // r13
  __int64 v9; // rax
  int v10; // edi
  IRP *v11; // rcx
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  struct _KEVENT *v16; // rcx
  struct _KEVENT *v17; // rcx
  struct _KEVENT *v18; // rcx
  int v19; // edx
  int v20; // edi
  int v21; // eax
  NTSTATUS v22; // eax
  __int64 v23; // rdi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char DeviceObject; // [rsp+60h] [rbp-69h] BYREF
  char v27; // [rsp+61h] [rbp-68h]
  char v28; // [rsp+62h] [rbp-67h]
  char v29; // [rsp+63h] [rbp-66h]
  int v30; // [rsp+64h] [rbp-65h]
  union _LARGE_INTEGER Interval; // [rsp+68h] [rbp-61h] BYREF
  PLARGE_INTEGER v32; // [rsp+70h] [rbp-59h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-51h] BYREF
  _DWORD v34[2]; // [rsp+90h] [rbp-39h] BYREF
  __int128 v35; // [rsp+98h] [rbp-31h]
  __int64 v36; // [rsp+A8h] [rbp-21h]
  __int64 v37; // [rsp+B0h] [rbp-19h]
  __int64 v38; // [rsp+B8h] [rbp-11h]
  int v39; // [rsp+C0h] [rbp-9h]
  unsigned int v40; // [rsp+C4h] [rbp-5h]
  int v41; // [rsp+C8h] [rbp-1h]
  int v42; // [rsp+CCh] [rbp+3h]

  v32 = a3;
  v29 = a2;
  v30 = -1;
  v27 = 0;
  v8 = 0LL;
  DeviceObject = 0;
  v28 = 1;
  _InterlockedIncrement((volatile signed __int32 *)P + 6);
  _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopSessionRequestCallback);
  if ( a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)P + 6);
    _InterlockedXor((volatile signed __int32 *)P + 7, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  AcquireMiniportListMutex();
  v9 = *((_QWORD *)P + 54);
  if ( !v9 )
  {
    v10 = -2147483642;
    WdLogSingleEntry1(4LL, P);
    goto LABEL_42;
  }
  v8 = *(_QWORD *)(v9 + 64);
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v8 + 484) )
    DpiCheckForOutstandingD3Requests(v8);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v8 + 168), 1u);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
  *((_QWORD *)P + 11) = KeGetCurrentThread();
  v13 = *((_DWORD *)P + 102);
  if ( v13 != 2 )
  {
    if ( v13 != 1 )
    {
      if ( v13 == 3 )
      {
        v10 = 2;
        WdLogSingleEntry1(4LL, P);
        if ( a4 && !*((_QWORD *)P + 59) )
        {
          KeClearEvent(a4);
          *((_QWORD *)P + 59) = a4;
          a4 = 0LL;
        }
      }
      else
      {
        v10 = -2147483641;
        WdLogSingleEntry2(2LL, P, -2147483641LL);
      }
      goto LABEL_42;
    }
    v11 = (IRP *)*((_QWORD *)P + 53);
    if ( v11 )
      IoCancelIrp(v11);
  }
  v14 = 8;
  if ( !P[591] )
    v14 = a5;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    McTemplateK0pxzqq_EtwWriteTransfer(
      (_DWORD)v11,
      (unsigned int)&EventMiracastStopMiracastSession,
      v12,
      *(_QWORD *)(v8 + 48),
      *((_QWORD *)P + 12),
      *((_QWORD *)P + 19),
      v14,
      a6);
  if ( v14 <= 8 && (v15 = 374, _bittest(&v15, v14))
    || v14 - 133 <= 0xB && (LODWORD(v11) = 2065, _bittest((const int *)&v11, v14 - 133)) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
      McTemplateK0qqqz_EtwWriteTransfer(
        (_DWORD)v11,
        (unsigned int)&EventMiracastStopMiracastSessionAbnormal,
        v12,
        v14,
        a6,
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
  }
  *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
  *((_DWORD *)P + 102) = 3;
  *((_DWORD *)P + 164) = v14;
  *((_DWORD *)P + 166) = a6;
  v27 = 1;
  *((_DWORD *)P + 104) = 2;
  DpiMiracastBroadcastDeviceStateChange(P);
  v16 = (struct _KEVENT *)*((_QWORD *)P + 59);
  if ( v16 )
  {
    KeSetEvent(v16, 0, 0);
    ObfDereferenceObject(*((PVOID *)P + 59));
  }
  v17 = (struct _KEVENT *)*((_QWORD *)P + 58);
  *((_QWORD *)P + 59) = a4;
  KeClearEvent(v17);
  if ( a4 )
    KeClearEvent(a4);
  memset(&LockHandle, 0, sizeof(LockHandle));
  a4 = 0LL;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v18 = (struct _KEVENT *)*((_QWORD *)P + 62);
  if ( v18 )
  {
    KeSetEvent(v18, 0, 0);
    *((_QWORD *)P + 62) = 0LL;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v20 = 3;
  while ( 1 )
  {
    if ( v20 != 3 )
    {
      Interval.QuadPart = -10000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    LODWORD(Timeout) = 0;
    v21 = DpiMiracastSendAsyncUserModeRequest(
            (int)P,
            v19,
            2295816,
            0,
            (size_t)Timeout,
            0LL,
            0,
            (__int64)DpiMiracastStopSessionRequestCallback,
            (__int64)P,
            (PDEVICE_OBJECT)&DeviceObject,
            0LL);
    if ( DeviceObject )
      break;
    if ( !--v20 )
      goto LABEL_39;
  }
  v28 = 0;
LABEL_39:
  if ( v21 >= 0 )
  {
    v38 = 0LL;
    v41 = 2;
    v10 = 2;
    v37 = 0LL;
    v34[0] = 6;
    v34[1] = 64;
    v35 = 0LL;
    v36 = 0LL;
    v39 = 71;
    v40 = v14;
    v42 = a6;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v34, 0x200000000uLL);
  }
  else
  {
    v10 = -2147483647;
    WdLogSingleEntry1(2LL, v21);
  }
LABEL_42:
  if ( v8 )
  {
    v30 = *((_DWORD *)P + 110);
    if ( v10 < 0 && v27 )
      DpiMiracastTearDownAssociation(P, 1);
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
    if ( *(_BYTE *)(v8 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v8 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v8 + 168));
    KeLeaveCriticalRegion();
  }
  if ( v28 )
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopSessionRequestCallback);
  _InterlockedExchange64(&qword_1C013B4D8, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v29 )
  {
    if ( v10 == 2 )
    {
      v22 = KeWaitForSingleObject(*((PVOID *)P + 58), Executive, 0, 0, v32);
      v23 = v22;
      if ( v22 )
      {
        DpiMiracastTearDownAssociation(P, 0);
        WdLogSingleEntry1(2LL, v23);
      }
      v10 = *((_DWORD *)P + 104);
    }
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionSync);
  }
  if ( a4 )
  {
    KeSetEvent(a4, 0, 0);
    ObfDereferenceObject(a4);
  }
  return (unsigned int)v10;
}
