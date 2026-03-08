/*
 * XREFs of DpiMiracastTearDownAssociation @ 0x1C0060BE0
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0060170 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0060710 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C039AACC (DpiMiracastHandleStartSessionDone.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C039AF44 (DpiMiracastHandleStopSessionDone.c)
 *     DpiMiracastStartSessionRequestCallback @ 0x1C039B630 (DpiMiracastStartSessionRequestCallback.c)
 *     DpiMiracastStopSessionRequestCallback @ 0x1C039B770 (DpiMiracastStopSessionRequestCallback.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000B270 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     DpIndicateChildStatus @ 0x1C005D370 (DpIndicateChildStatus.c)
 *     ??_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z @ 0x1C005ED78 (--_GMIRACAST_CHUNK_LIST@@QEAAPEAXI@Z.c)
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C005F36C (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0qqz_EtwWriteTransfer @ 0x1C006281C (McTemplateK0qqz_EtwWriteTransfer.c)
 *     TraceLoggingWriteMiracastSessionStop @ 0x1C0066B34 (TraceLoggingWriteMiracastSessionStop.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DpiMiracastBroadcastDeviceStateChange @ 0x1C0399F0C (DpiMiracastBroadcastDeviceStateChange.c)
 *     DpiMiracastDdiMiracastDestroyContext @ 0x1C039A39C (DpiMiracastDdiMiracastDestroyContext.c)
 */

void __fastcall DpiMiracastTearDownAssociation(char *P, int a2, int a3, unsigned int a4, char a5)
{
  __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rsi
  __int64 v12; // r8
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rcx
  MIRACAST_CHUNK_LIST *v16; // rcx
  MIRACAST_CHUNK_LIST *v17; // rcx
  MIRACAST_CHUNK_LIST *v18; // rcx
  MIRACAST_CHUNK_LIST *v19; // rcx
  MIRACAST_CHUNK_LIST *v20; // rcx
  MIRACAST_CHUNK_LIST *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  __int64 v24; // rcx
  int v25; // r13d
  __int128 v26; // [rsp+30h] [rbp-51h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v28[2]; // [rsp+60h] [rbp-21h] BYREF
  __int128 v29; // [rsp+68h] [rbp-19h]
  __int64 v30; // [rsp+78h] [rbp-9h]
  __int64 v31; // [rsp+80h] [rbp-1h]
  __int64 v32; // [rsp+88h] [rbp+7h]
  int v33; // [rsp+90h] [rbp+Fh]
  int v34; // [rsp+94h] [rbp+13h]
  int v35; // [rsp+98h] [rbp+17h]
  unsigned int v36; // [rsp+9Ch] [rbp+1Bh]

  if ( !a5 )
    AcquireMiniportListMutex();
  if ( *((_DWORD *)P + 110) != a2 && a2 != -2 )
  {
LABEL_43:
    if ( a5 )
      return;
    goto LABEL_44;
  }
  v9 = *((_QWORD *)P + 54);
  if ( v9 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v11 = *(_QWORD *)(v9 + 64);
    v26 = 0LL;
    if ( !a5 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 484) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
      *((_QWORD *)P + 11) = KeGetCurrentThread();
    }
    *((_DWORD *)P + 104) = a3;
    if ( a4 <= 0x7F )
    {
      *((_DWORD *)P + 103) = *((_DWORD *)P + 102);
      *((_DWORD *)P + 102) = 0;
      DpiMiracastBroadcastDeviceStateChange(P);
    }
    DpiMiracastDdiMiracastDestroyContext(v11, *((_QWORD *)P + 56));
    DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 1, v12);
    if ( !P[590] && (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
      McTemplateK0qqz_EtwWriteTransfer(
        v13,
        (unsigned int)&EventMiracastPerfTrackStartMiracastSessionNoSend,
        v14,
        *((_DWORD *)P + 110),
        *((_DWORD *)P + 50),
        *((_QWORD *)P + 44));
    v15 = *(_QWORD *)(v11 + 24);
    DWORD1(v26) = *((_DWORD *)P + 114);
    LODWORD(v26) = 3;
    BYTE8(v26) = 0;
    DpIndicateChildStatus(v15, (unsigned int *)&v26);
    *((_QWORD *)P + 56) = 0LL;
    *((_DWORD *)P + 114) = -1;
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *((_QWORD *)P + 54) = 0LL;
    *(_QWORD *)(v11 + 3248) = 0LL;
    *(_QWORD *)(v11 + 3256) = 0LL;
    *((_QWORD *)P + 47) = 0LL;
    *((_QWORD *)P + 48) = 0LL;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeFlushQueuedDpcs();
    v16 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 61);
    if ( v16 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v16);
    *((_QWORD *)P + 61) = 0LL;
    v17 = *(MIRACAST_CHUNK_LIST **)(v11 + 3272);
    if ( v17 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v17);
    v18 = *(MIRACAST_CHUNK_LIST **)(v11 + 3280);
    *(_QWORD *)(v11 + 3272) = 0LL;
    if ( v18 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v18);
    v19 = *(MIRACAST_CHUNK_LIST **)(v11 + 3288);
    *(_QWORD *)(v11 + 3280) = 0LL;
    if ( v19 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v19);
    *(_QWORD *)(v11 + 3288) = 0LL;
    v20 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 63);
    if ( v20 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v20);
    v21 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)P + 64);
    *((_QWORD *)P + 63) = 0LL;
    if ( v21 )
      MIRACAST_CHUNK_LIST::`scalar deleting destructor'(v21);
    v22 = (struct _KEVENT *)*((_QWORD *)P + 59);
    *((_QWORD *)P + 64) = 0LL;
    if ( v22 )
    {
      KeSetEvent(v22, 0, 0);
      ObfDereferenceObject(*((PVOID *)P + 59));
      *((_QWORD *)P + 59) = 0LL;
    }
    v23 = (struct _KEVENT *)*((_QWORD *)P + 60);
    if ( v23 )
      KeSetEvent(v23, 0, 0);
    KeSetEvent(*((PRKEVENT *)P + 58), 0, 0);
    --dword_1C013B8C0;
    DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)P);
    v24 = MEMORY[0xFFFFF78000000014];
    *((_QWORD *)P + 80) = MEMORY[0xFFFFF78000000014];
    TraceLoggingWriteMiracastSessionStop(P, a4, (v24 - *((_QWORD *)P + 79)) / 10000000);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v11 + 64), P, 0x20u);
    v25 = *((_DWORD *)P + 169);
    *(_OWORD *)(P + 600) = 0LL;
    *(_OWORD *)(P + 616) = 0LL;
    if ( !a5 )
    {
      *((_QWORD *)P + 11) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
      if ( *(_BYTE *)(v11 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    v32 = 0LL;
    v28[0] = 6;
    v30 = 0LL;
    v29 = 0LL;
    v28[1] = 64;
    v31 = 0LL;
    v33 = 72;
    v34 = a3;
    v35 = v25;
    v36 = a4;
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v28, 0x200000000uLL);
    goto LABEL_43;
  }
  if ( a4 > 0x7F )
    goto LABEL_43;
  if ( !a5 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(P + 32);
    *((_QWORD *)P + 11) = KeGetCurrentThread();
  }
  v10 = *((_DWORD *)P + 102);
  if ( v10 )
  {
    *((_DWORD *)P + 103) = v10;
    *((_DWORD *)P + 102) = 0;
    *((_DWORD *)P + 104) = a3;
    DpiMiracastBroadcastDeviceStateChange(P);
  }
  if ( !a5 )
  {
    *((_QWORD *)P + 11) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(P + 32);
LABEL_44:
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
}
