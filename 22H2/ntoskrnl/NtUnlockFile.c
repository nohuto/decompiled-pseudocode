/*
 * XREFs of NtUnlockFile @ 0x140674110
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402D3EF0 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePool_0 @ 0x1402D8B04 (IopVerifierExAllocatePool_0.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405086DC (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C99C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A9C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v9; // rbx
  PADAPTER_OBJECT v10; // r12
  __int64 v11; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v13; // r15
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v15)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v16; // rdi
  char v17; // r14
  char v18; // r14
  char v19; // di
  struct _KTHREAD *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  NTSTATUS v26; // edi
  struct _KEVENT *v27; // rsi
  struct _KEVENT *Pool_0; // rax
  __int64 Irp; // rax
  IRP *v30; // rdi
  PIO_STATUS_BLOCK v31; // rax
  struct _KEVENT *v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *PoolWithQuota_4; // rax
  __int64 v35; // r9
  KPROCESSOR_MODE PreviousMode; // [rsp+40h] [rbp-78h]
  _BYTE DmaAdapter[15]; // [rsp+41h] [rbp-77h] BYREF
  struct _KEVENT *HandleInformation; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG v39; // [rsp+58h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-58h] BYREF
  PADAPTER_OBJECT v41; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  __int128 v43; // [rsp+78h] [rbp-40h] BYREF
  __int128 v44; // [rsp+88h] [rbp-30h] BYREF

  QuadPart = 0LL;
  v39 = 0LL;
  HandleInformation = 0LL;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  *(_QWORD *)&DmaAdapter[7] = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             (PVOID *)&DmaAdapter[7],
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
  v10 = *(PADAPTER_OBJECT *)&DmaAdapter[7];
  v41 = *(PADAPTER_OBJECT *)&DmaAdapter[7];
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(HandleInformation) & 3) == 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[7]);
      return -1073741790;
    }
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v39 = Length->QuadPart;
    v10 = v41;
    v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v39 = Length->QuadPart;
  }
  if ( (v9->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v9->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v9);
  v13 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v15 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v15 )
    {
      v43 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 )
        v16 = (void *)VfFastIoSnapState();
      else
        v16 = 0LL;
      v17 = v15(v9, &QuadPart, &v39, CurrentThread->ApcState.Process, Key, &v43, v13);
      if ( v16 )
        VfFastIoCheckState(v16);
      if ( v17 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v43;
        HalPutDmaAdapter((PADAPTER_OBJECT)v9);
        return v43;
      }
    }
  }
  if ( (v9->Flags & 2) != 0 )
  {
    v18 = 1;
    v19 = (v9->Flags & 4) != 0;
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    v21 = *(_QWORD *)&DmaAdapter[7];
    v22 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[7] + 128LL, 0LL, 0);
    DmaAdapter[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v21 + 116), 1) )
    {
      v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
      v26 = IopWaitAndAcquireFileObjectLock(
              *(volatile signed __int32 **)&DmaAdapter[7],
              PreviousMode,
              v19,
              v22,
              DmaAdapter);
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      v9 = *(struct _FILE_OBJECT **)&DmaAdapter[7];
      ObfReferenceObject(*(PVOID *)&DmaAdapter[7]);
      v26 = 0;
    }
    if ( !DmaAdapter[0] )
    {
      v27 = 0LL;
      HandleInformation = 0LL;
      v10 = v41;
      goto LABEL_35;
    }
LABEL_33:
    HalPutDmaAdapter((PADAPTER_OBJECT)v9);
    return v26;
  }
  Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(FastIoDispatch, 0x18uLL);
  v27 = Pool_0;
  HandleInformation = Pool_0;
  if ( !Pool_0 )
  {
    v26 = -1073741670;
    goto LABEL_33;
  }
  KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
  v18 = 0;
LABEL_35:
  IopResetEvent((__int64)v9, v23, v24, v25);
  Irp = IopAllocateIrpExReturn();
  v30 = (IRP *)Irp;
  *(_QWORD *)&DmaAdapter[7] = Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v9;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v18 )
    {
      v31 = IoStatusBlock;
      v32 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v31 = (PIO_STATUS_BLOCK)&v44;
      v32 = v27;
    }
    v30->UserEvent = v32;
    v30->UserIosb = v31;
    v30->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v10;
    PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
    *(_QWORD *)PoolWithQuota_4 = v39;
    v30->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_4;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v13, v30, (__int64)v10, 0LL, PreviousMode, v18, 2u);
    if ( !v18 )
    {
      LOBYTE(v35) = PreviousMode;
      return IopSynchronousApiServiceTail((unsigned int)result, v27, v30, v35, &v44, IoStatusBlock);
    }
  }
  else
  {
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v9, 0LL);
    return -1073741670;
  }
  return result;
}
