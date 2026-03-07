NTSTATUS __stdcall IoSetInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation)
{
  char v4; // r15
  char v5; // r13
  struct _KTHREAD *CurrentThread; // rax
  char v10; // bl
  __int64 v11; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 Irp; // rax
  IRP *v16; // rbx
  struct _KEVENT *p_Event; // rcx
  __int64 v18; // r15
  ULONG v19; // eax
  NTSTATUS FinalStatus; // esi
  char v22; // al
  NTSTATUS v23; // ebx
  ULONG Flags; // edx
  unsigned int v25; // eax
  ULONG v26; // edx
  ULONG v27; // edx
  CCHAR v28; // dl
  char v29; // [rsp+30h] [rbp-40h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+38h] [rbp-38h]
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  __int128 v32; // [rsp+48h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-18h] BYREF
  __int64 v34; // [rsp+A0h] [rbp+30h] BYREF
  ULONG v35; // [rsp+B0h] [rbp+40h]

  v35 = Length;
  v4 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v5 = 0;
  v32 = 0LL;
  v29 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    LOBYTE(v34) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v23 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0, v10, v11, &v34);
      if ( (_BYTE)v34 )
      {
        ObfDereferenceObject(FileObject);
        return v23;
      }
    }
    else
    {
      if ( v11 )
        *(_BYTE *)(v11 + 18) = 1;
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  LOBYTE(v34) = v4;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  if ( FileInformationClass == FileRenameInformationBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformation;
  }
  else if ( FileInformationClass == FileRenameInformationExBypassAccessCheck )
  {
    FileInformationClass = FileRenameInformationEx;
  }
  else if ( FileInformationClass == FileLinkInformationBypassAccessCheck )
  {
    FileInformationClass = FileLinkInformation;
  }
  else
  {
    if ( FileInformationClass != FileLinkInformationExBypassAccessCheck )
    {
      if ( FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
      {
        FileInformationClass = FileCaseSensitiveInformation;
        v29 = 1;
      }
      goto LABEL_13;
    }
    FileInformationClass = FileLinkInformationEx;
  }
  v5 = 1;
LABEL_13:
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  LOBYTE(v14) = v4 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, v14);
  v16 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(FileObject, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(Irp + 64) = 0;
  if ( v4 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
  }
  else
  {
    *(_DWORD *)(Irp + 16) = 4;
    p_Event = &Event;
  }
  *(_QWORD *)(Irp + 80) = p_Event;
  v18 = *(_QWORD *)(Irp + 184);
  v19 = v35;
  v16->UserIosb = (PIO_STATUS_BLOCK)&v32;
  *(_BYTE *)(v18 - 72) = 6;
  *(_QWORD *)(v18 - 24) = FileObject;
  v16->Flags |= 0x10u;
  v16->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  *(_DWORD *)(v18 - 64) = v19;
  *(_DWORD *)(v18 - 56) = FileInformationClass;
  if ( v5 )
  {
    *(_BYTE *)(v18 - 70) |= 1u;
  }
  else if ( v29 )
  {
    *(_BYTE *)(v18 - 70) |= 1u;
  }
  IopQueueThreadIrp((__int64)v16);
  switch ( FileInformationClass )
  {
    case FileModeInformation:
      Flags = FileObject->Flags;
      if ( (Flags & 8) == 0 )
      {
        if ( (*(_DWORD *)FileInformation & 2) != 0 )
          Flags |= 0x10u;
        else
          Flags &= ~0x10u;
        FileObject->Flags = Flags;
      }
      v25 = Flags & 0xFFFFFFDF;
      v26 = Flags | 0x20;
      if ( (*(_DWORD *)FileInformation & 4) == 0 )
        v26 = v25;
      FileObject->Flags = v26;
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
      {
        if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
          v27 = v26 | 4;
        else
          v27 = v26 & 0xFFFFFFFB;
        FileObject->Flags = v27;
      }
      --v16->CurrentLocation;
      FinalStatus = 0;
      --v16->Tail.Overlay.CurrentStackLocation;
      v28 = 0;
      v16->IoStatus.Status = 0;
      v16->IoStatus.Information = 0LL;
      goto LABEL_67;
    case FileRenameInformation:
      goto LABEL_33;
    case FileRenameInformationEx:
LABEL_60:
      v22 = *(_BYTE *)FileInformation & 1;
      goto LABEL_61;
    case FileLinkInformation:
LABEL_33:
      v22 = *(_BYTE *)FileInformation;
LABEL_61:
      *(_BYTE *)(v18 - 40) = v22;
      goto LABEL_62;
    case FileLinkInformationEx:
      goto LABEL_60;
    case FileMoveClusterInformation:
      *(_DWORD *)(v18 - 40) = *(_DWORD *)FileInformation;
LABEL_62:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        break;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v16, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        break;
      v28 = 2;
      goto LABEL_66;
    case FileMemoryPartitionInformation:
      FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v35);
      v16->IoStatus.Status = FinalStatus;
      v28 = 0;
      v16->IoStatus.Information = 0LL;
LABEL_66:
      --v16->CurrentLocation;
      --v16->Tail.Overlay.CurrentStackLocation;
LABEL_67:
      IofCompleteRequest(v16, v28);
      goto LABEL_27;
  }
  FinalStatus = IofCallDriver(DeviceObject, v16);
LABEL_27:
  if ( (_BYTE)v34 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v16);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((volatile __int32 *)&FileObject->Type);
  }
  else if ( FinalStatus == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    FinalStatus = v32;
  }
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return FinalStatus;
}
