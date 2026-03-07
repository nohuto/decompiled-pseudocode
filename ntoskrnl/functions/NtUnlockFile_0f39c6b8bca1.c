NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v10; // rbx
  __int64 v11; // rcx
  ULONG *p_Flags; // r12
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v14; // r15
  struct _DRIVER_OBJECT *DriverObject; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rax
  __int64 (__fastcall *FastIoUnlockSingle)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, __int64); // rsi
  void *v18; // rdi
  char v19; // r14
  char v20; // r14
  char v21; // di
  struct _KTHREAD *v22; // rax
  volatile __int32 *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  NTSTATUS v26; // edi
  struct _KEVENT *v27; // rsi
  struct _KEVENT *Pool2; // rax
  __int64 Irp; // rax
  _QWORD *v30; // rdi
  PIO_STATUS_BLOCK v31; // rax
  struct _KEVENT *v32; // rcx
  __int64 v33; // rbx
  LONGLONG *v34; // rax
  __int64 v35; // r9
  int Object; // [rsp+20h] [rbp-A8h]
  int HandleInformation; // [rsp+28h] [rbp-A0h]
  __int64 v38; // [rsp+40h] [rbp-88h] BYREF
  PVOID v39; // [rsp+48h] [rbp-80h] BYREF
  struct _KEVENT *v40; // [rsp+50h] [rbp-78h] BYREF
  LONGLONG v41; // [rsp+58h] [rbp-70h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-68h] BYREF
  PVOID v43; // [rsp+68h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-58h]
  __int128 v45; // [rsp+78h] [rbp-50h] BYREF
  __int128 v46; // [rsp+88h] [rbp-40h] BYREF

  QuadPart = 0LL;
  v41 = 0LL;
  v40 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v39 = 0LL;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &v39,
             (POBJECT_HANDLE_INFORMATION)&v40);
  v10 = (struct _FILE_OBJECT *)v39;
  v43 = v39;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (BYTE4(v40) & 3) == 0 )
    {
      ObfDereferenceObject(v39);
      return -1073741790;
    }
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 || (QuadPart = ByteOffset->QuadPart, ((unsigned __int8)Length & 3) != 0) )
      ExRaiseDatatypeMisalignment();
    v41 = Length->QuadPart;
    v10 = (struct _FILE_OBJECT *)v39;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v41 = Length->QuadPart;
  }
  p_Flags = &v10->Flags;
  if ( (v10->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v10->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v10);
  v14 = (__int64)AttachedDevice;
  DriverObject = AttachedDevice->DriverObject;
  FastIoDispatch = DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    FastIoUnlockSingle = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, __int64))FastIoDispatch->FastIoUnlockSingle;
    if ( FastIoUnlockSingle )
    {
      v45 = 0LL;
      if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
        v18 = (void *)VfFastIoSnapState();
      else
        v18 = 0LL;
      v19 = FastIoUnlockSingle(v10, &QuadPart, &v41, CurrentThread->ApcState.Process, Key, &v45, v14);
      if ( v18 )
        VfFastIoCheckState(v18);
      if ( v19 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v45;
        ObfDereferenceObject(v10);
        return v45;
      }
    }
  }
  if ( (*p_Flags & 2) == 0 )
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v27 = Pool2;
    v40 = Pool2;
    if ( Pool2 )
    {
      KeInitializeEvent(Pool2, SynchronizationEvent, 0);
      v20 = 0;
      goto LABEL_38;
    }
    v26 = -1073741670;
LABEL_36:
    ObfDereferenceObject(v10);
    return v26;
  }
  v20 = 1;
  v21 = (*p_Flags & 4) != 0;
  v22 = KeGetCurrentThread();
  --v22->KernelApcDisable;
  v23 = (volatile __int32 *)v39;
  v24 = KeAbPreAcquire((__int64)v39 + 128, 0LL);
  LOBYTE(v38) = 0;
  if ( _InterlockedExchange(v23 + 29, 1) )
  {
    v10 = (struct _FILE_OBJECT *)v39;
    v26 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v39, PreviousMode, v21, v24, &v38);
  }
  else
  {
    if ( v24 )
      *(_BYTE *)(v24 + 18) = 1;
    v10 = (struct _FILE_OBJECT *)v39;
    ObfReferenceObject(v39);
    v26 = 0;
  }
  if ( (_BYTE)v38 )
    goto LABEL_36;
  v27 = 0LL;
  v40 = 0LL;
LABEL_38:
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v10->Event);
  LOBYTE(v25) = *(_BYTE *)(v14 + 76);
  Irp = IopAllocateIrpExReturn(v14, v25, 0LL);
  v30 = (_QWORD *)Irp;
  v39 = (PVOID)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v10;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v20 )
    {
      v31 = IoStatusBlock;
      v32 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v31 = (PIO_STATUS_BLOCK)&v46;
      v32 = v27;
    }
    v30[10] = v32;
    v30[9] = v31;
    v30[11] = 0LL;
    v33 = v30[23];
    *(_WORD *)(v33 - 72) = 529;
    *(_QWORD *)(v33 - 24) = v43;
    v34 = (LONGLONG *)ExAllocatePool2(97LL, 8LL, 1699508041LL);
    *v34 = v41;
    v30[20] = v34;
    *(_QWORD *)(v33 - 64) = v34;
    *(_DWORD *)(v33 - 56) = Key;
    *(_QWORD *)(v33 - 48) = QuadPart;
    LOBYTE(HandleInformation) = v20;
    LOBYTE(Object) = PreviousMode;
    result = IopSynchronousServiceTail(v14, v30, v43, 0LL, Object, HandleInformation, 2);
    if ( !v20 )
    {
      LOBYTE(v35) = PreviousMode;
      return IopSynchronousApiServiceTail((unsigned int)result, v27, v30, v35, &v46, IoStatusBlock);
    }
  }
  else
  {
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
    IopAllocateIrpCleanup(v10, 0LL);
    return -1073741670;
  }
  return result;
}
