/*
 * XREFs of IoSetInformation @ 0x14077BFD0
 * Callers:
 *     MiAttemptPageFileReduction @ 0x140542848 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileExtension @ 0x1408D0354 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IofCompleteRequest @ 0x140242E00 (IofCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopOpenLinkOrRenameTarget @ 0x140608E08 (IopOpenLinkOrRenameTarget.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089433C (IopSetFileMemoryPartitionInformation.c)
 */

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
  __int64 Irp; // rax
  IRP *v13; // rbx
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  NTSTATUS FinalStatus; // esi
  NTSTATUS v21; // ebx
  ULONG Flags; // edx
  unsigned int v23; // eax
  ULONG v24; // edx
  ULONG v25; // edx
  CCHAR v26; // dl
  BOOLEAN v27; // al
  char v28; // [rsp+30h] [rbp-40h]
  char v29; // [rsp+31h] [rbp-3Fh]
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
  v28 = 0;
  ObfReferenceObject(FileObject);
  if ( (FileObject->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (FileObject->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
    LOBYTE(v34) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&FileObject->Busy, 1) )
    {
      v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, 0, v10, v11, &v34);
      if ( (_BYTE)v34 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)FileObject);
        return v21;
      }
    }
    else
    {
      if ( v11 )
        *(_BYTE *)(v11 + 26) |= 1u;
      ObfReferenceObject(FileObject);
    }
    KeResetEvent(&FileObject->Event);
    v4 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
  }
  v29 = v4;
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      FileInformationClass = FileRenameInformation;
LABEL_38:
      v5 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      FileInformationClass = FileRenameInformationEx;
      goto LABEL_38;
    case FileLinkInformationBypassAccessCheck:
      FileInformationClass = FileLinkInformation;
      goto LABEL_38;
    case FileLinkInformationExBypassAccessCheck:
      FileInformationClass = FileLinkInformationEx;
      goto LABEL_38;
    case FileCaseSensitiveInformationForceAccessCheck:
      FileInformationClass = FileCaseSensitiveInformation;
      v28 = 1;
      break;
  }
  Irp = IopAllocateIrpExReturn();
  v13 = (IRP *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)FileObject, 0LL);
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
  v13->UserEvent = p_Event;
  CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
  v13->UserIosb = (PIO_STATUS_BLOCK)&v32;
  v16 = v35;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  v13->Flags |= 0x10u;
  v13->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
  CurrentStackLocation[-1].Parameters.Read.Length = v16;
  CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
  if ( v5 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  else if ( v28 )
  {
    CurrentStackLocation[-1].Flags |= 1u;
  }
  IopQueueThreadIrp((__int64)v13);
  if ( FileInformationClass == FileModeInformation )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 8) == 0 )
    {
      if ( (*(_DWORD *)FileInformation & 2) != 0 )
        Flags |= 0x10u;
      else
        Flags &= ~0x10u;
      FileObject->Flags = Flags;
    }
    v23 = Flags & 0xFFFFFFDF;
    v24 = Flags | 0x20;
    if ( (*(_DWORD *)FileInformation & 4) == 0 )
      v24 = v23;
    FileObject->Flags = v24;
    if ( (*(_DWORD *)FileInformation & 2) != 0 )
    {
      if ( (*(_DWORD *)FileInformation & 0x10) != 0 )
        v25 = v24 | 4;
      else
        v25 = v24 & 0xFFFFFFFB;
      FileObject->Flags = v25;
    }
    --v13->CurrentLocation;
    FinalStatus = 0;
    --v13->Tail.Overlay.CurrentStackLocation;
    v26 = 0;
    v13->IoStatus.Status = 0;
    v13->IoStatus.Information = 0LL;
    goto LABEL_68;
  }
  v17 = (unsigned int)(FileInformationClass - 10);
  if ( (unsigned int)v17 <= 0x3E )
  {
    v18 = 0x4080000000000003LL;
    if ( _bittest64(&v18, v17) )
    {
      if ( FileInformationClass != FileMoveClusterInformation )
      {
        if ( FileInformationClass == FileRenameInformationEx || FileInformationClass == FileLinkInformationEx )
          v27 = *(_BYTE *)FileInformation & 1;
        else
          v27 = *(_BYTE *)FileInformation;
        CurrentStackLocation[-1].Parameters.SetFile.ReplaceIfExists = v27;
        goto LABEL_63;
      }
LABEL_62:
      CurrentStackLocation[-1].Parameters.Create.EaLength = *(_DWORD *)FileInformation;
LABEL_63:
      if ( *((_WORD *)FileInformation + 10) != 92 && !*((_QWORD *)FileInformation + 1) )
        goto LABEL_24;
      FinalStatus = IopOpenLinkOrRenameTarget(&Handle, (__int64)v13, (__int64)FileInformation, FileObject);
      if ( FinalStatus >= 0 )
        goto LABEL_24;
      v26 = 2;
      goto LABEL_67;
    }
  }
  if ( FileInformationClass == FileMoveClusterInformation )
    goto LABEL_62;
  if ( FileInformationClass == FileMemoryPartitionInformation )
  {
    FinalStatus = IopSetFileMemoryPartitionInformation(FileObject, FileInformation, v35);
    v13->IoStatus.Status = FinalStatus;
    v26 = 0;
    v13->IoStatus.Information = 0LL;
LABEL_67:
    --v13->CurrentLocation;
    --v13->Tail.Overlay.CurrentStackLocation;
LABEL_68:
    IofCompleteRequest(v13, v26);
    goto LABEL_25;
  }
LABEL_24:
  FinalStatus = IofCallDriver(DeviceObject, v13);
LABEL_25:
  if ( v29 )
  {
    if ( FinalStatus == 259 )
    {
      if ( KeWaitForSingleObject(&FileObject->Event, Executive, 0, (FileObject->Flags & 4) != 0, 0LL) == 257 )
        IopCancelAlertedRequest(&FileObject->Event, v13);
      FinalStatus = FileObject->FinalStatus;
    }
    IopReleaseFileObjectLock((PADAPTER_OBJECT)FileObject);
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
