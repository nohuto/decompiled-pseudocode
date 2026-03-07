__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  struct _FILE_OBJECT *v12; // rsi
  struct _DEVICE_OBJECT *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  PIRP v17; // rax
  __int64 v18; // rcx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v25; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    LODWORD(v11) = -1073741790;
    WdLogSingleEntry1(2LL, -1073741790LL);
    return (unsigned int)v11;
  }
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
  *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 432);
  if ( !v9
    || (v10 = *(_QWORD *)(v9 + 64), !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 168)))
    && !DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v10 + 3912), 1) )
  {
    v12 = *(struct _FILE_OBJECT **)(a1 + 176);
    v13 = *(struct _DEVICE_OBJECT **)(a1 + 184);
    if ( v12 )
      ObfReferenceObject(*(PVOID *)(a1 + 176));
    *(_QWORD *)(a1 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    if ( !v12 )
    {
      WdLogSingleEntry1(3LL, a1);
      return 3221226166LL;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
      McTemplateK0pqtqq_EtwWriteTransfer(
        v14,
        &EventEnterMiracastSendUserModeRequest,
        v15,
        *(_QWORD *)(a1 + 96),
        1,
        0,
        a6,
        0);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v17 = IoBuildDeviceIoControlRequest(a2, v13, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
    if ( !v17 )
    {
      v11 = -1073741801LL;
      v18 = 6LL;
LABEL_15:
      WdLogSingleEntry1(v18, v11);
      goto LABEL_20;
    }
    v17->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
    v17->IoStatus.Status = -1073741637;
    LODWORD(v11) = IofCallDriver(v13, v17);
    if ( (_DWORD)v11 == 259 )
    {
      v19 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v11 = v19;
      if ( v19 )
      {
        v18 = 2LL;
        goto LABEL_15;
      }
      LODWORD(v11) = IoStatusBlock->Status;
    }
LABEL_20:
    ObfDereferenceObject(v12);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000000LL) != 0 )
    {
      LODWORD(v25) = v11;
      LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
      LODWORD(OutputBufferLength) = 0;
      LODWORD(OutputBuffer) = 1;
      McTemplateK0pqtqq_EtwWriteTransfer(
        v20,
        &EventLeaveMiracastSendUserModeRequest,
        v21,
        *(_QWORD *)(a1 + 96),
        OutputBuffer,
        OutputBufferLength,
        InternalDeviceIoControl,
        v25);
    }
    return (unsigned int)v11;
  }
  LODWORD(v11) = -1073741790;
  WdLogSingleEntry1(2LL, -1073741790LL);
  *(_QWORD *)(a1 + 88) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
  return (unsigned int)v11;
}
