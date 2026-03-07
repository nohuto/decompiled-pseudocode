NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  PLARGE_INTEGER v11; // r14
  PLARGE_INTEGER v12; // r15
  struct _KEVENT *v13; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v16; // rcx
  _BYTE *v17; // rax
  struct _FILE_OBJECT *v18; // rbx
  __int64 v19; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  struct _DRIVER_OBJECT *DriverObject; // rcx
  __int64 FastIoDispatch; // rdx
  __int64 (__fastcall *v23)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r15
  void *v24; // r14
  char v25; // r12
  PIO_STATUS_BLOCK v26; // rcx
  NTSTATUS v27; // eax
  __int64 v28; // rsi
  int v29; // eax
  int v30; // edx
  ULONG *p_Flags; // r12
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // rax
  NTSTATUS v35; // r14d
  char v36; // r15
  IRP *v37; // rax
  IRP *v38; // r14
  KPROCESSOR_MODE v39; // r12
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v41; // al
  CHAR *Pool2; // rax
  int v43; // [rsp+20h] [rbp-B8h]
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v45; // [rsp+50h] [rbp-88h] BYREF
  KPROCESSOR_MODE v46; // [rsp+51h] [rbp-87h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  __int128 v48; // [rsp+60h] [rbp-78h] BYREF
  LONGLONG QuadPart; // [rsp+70h] [rbp-68h] BYREF
  LONGLONG v50; // [rsp+78h] [rbp-60h] BYREF
  PIRP Irp; // [rsp+80h] [rbp-58h] BYREF
  PVOID v52; // [rsp+88h] [rbp-50h]
  struct _OBJECT_HANDLE_INFORMATION v53; // [rsp+90h] [rbp-48h] BYREF
  PVOID v54; // [rsp+98h] [rbp-40h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  LARGE_INTEGER v57; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v58; // [rsp+F8h] [rbp+20h]

  v58 = ApcContext;
  v57.QuadPart = (LONGLONG)ApcRoutine;
  v11 = Length;
  v12 = ByteOffset;
  Object = 0LL;
  v13 = 0LL;
  v52 = 0LL;
  QuadPart = 0LL;
  v50 = 0LL;
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v46 = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v53);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v53.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v16 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v16 = *(_DWORD *)v16;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v57, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)v12 & 3) != 0 || (QuadPart = v12->QuadPart, ((unsigned __int8)v11 & 3) != 0) )
        ExRaiseDatatypeMisalignment();
      v50 = v11->QuadPart;
      v17 = Object;
      if ( *((_QWORD *)Object + 22) && (v57.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = v12->QuadPart;
      v50 = v11->QuadPart;
      v17 = Object;
    }
    v17[72] = 1;
    v18 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v54 = 0LL;
        v27 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v54, 0LL);
        v13 = (struct _KEVENT *)v54;
        v52 = v54;
        if ( v27 >= 0 )
          KeResetEvent((PRKEVENT)v54);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
      DriverObject = RelatedDeviceObject->DriverObject;
      FastIoDispatch = (__int64)DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        v23 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))(FastIoDispatch + 48);
        if ( v23 )
        {
          v48 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(DriverObject) )
            v24 = (void *)VfFastIoSnapState();
          else
            v24 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v25 = v23(
                  v18,
                  &QuadPart,
                  &v50,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v48,
                  RelatedDeviceObject);
          if ( v24 )
            VfFastIoCheckState(v24);
          if ( v25 )
          {
            if ( (v57.LowPart & 1) != 0 )
            {
              v26 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v48);
              v26->Status = v48;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v48;
            }
            if ( v13 )
            {
              if ( (v18->Flags & 0x8000000) == 0 )
                KeSetEvent(v13, 0, 0);
              ObfDereferenceObject(v13);
            }
            if ( v18->CompletionContext )
            {
              v28 = (__int64)v58;
              if ( v58 )
              {
                if ( (v18->Flags & 0x2000000) == 0 )
                {
                  v55 = 0LL;
                  Irp = 0LL;
                  v45 = 0;
                  IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v18, &v45, &v55, &Irp);
                  if ( v55 )
                  {
                    v29 = IoSetIoCompletionEx2(v55, (__int64)Irp, v28, v48, *((__int64 *)&v48 + 1), 1u, 0LL);
                    v30 = v48;
                    if ( v29 < 0 )
                      v30 = -1073741670;
                    LODWORD(v48) = v30;
                  }
                  if ( v45 )
                    IopDecrementCompletionContextUsageCount((ULONG_PTR)v18);
                }
              }
            }
            ObfDereferenceObject(v18);
            return v48;
          }
        }
      }
      p_Flags = &v18->Flags;
      if ( (v18->Flags & 2) != 0 )
      {
        v32 = KeGetCurrentThread();
        --v32->KernelApcDisable;
        v33 = (volatile __int32 *)Object;
        v34 = KeAbPreAcquire((__int64)Object + 128, 0LL);
        v45 = 0;
        if ( _InterlockedExchange(v33 + 29, 1) )
        {
          v18 = (struct _FILE_OBJECT *)Object;
          v35 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v45);
        }
        else
        {
          if ( v34 )
            *(_BYTE *)(v34 + 18) = 1;
          v18 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v35 = 0;
        }
        if ( v45 )
        {
          if ( v13 )
            ObfDereferenceObject(v13);
          ObfDereferenceObject(v18);
          return v35;
        }
        v36 = 1;
      }
      else
      {
        v36 = 0;
      }
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v18->Event);
      LOBYTE(v19) = v36 ^ 1;
      LOBYTE(FastIoDispatch) = RelatedDeviceObject->StackSize;
      v37 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, FastIoDispatch, v19);
      v38 = v37;
      Irp = v37;
      if ( v37 )
      {
        v37->Tail.Overlay.OriginalFileObject = v18;
        v37->Tail.Overlay.Thread = CurrentThread;
        v39 = v46;
        v37->RequestorMode = v46;
        v37->UserEvent = v13;
        v37->UserIosb = IoStatusBlock;
        v37->Overlay.AllocationSize = v57;
        v37->Overlay.AsynchronousParameters.UserApcContext = v58;
        CurrentStackLocation = v37->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v18;
        CurrentStackLocation[-1].Flags = 0;
        v41 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v41 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v41 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        Pool2 = (CHAR *)ExAllocatePool2(97LL, 8LL, 1699508041LL);
        *(_QWORD *)Pool2 = v50;
        v38->Tail.Overlay.AuxiliaryBuffer = Pool2;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)Pool2;
        LOBYTE(HandleInformation) = v36;
        LOBYTE(v43) = v39;
        return IopSynchronousServiceTail(RelatedDeviceObject, v38, v18, 0LL, v43, HandleInformation, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v18, v13);
        return -1073741670;
      }
    }
  }
  return result;
}
