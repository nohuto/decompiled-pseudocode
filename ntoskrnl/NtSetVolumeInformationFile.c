/*
 * XREFs of NtSetVolumeInformationFile @ 0x14087CFF0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x14023EBCC (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     IoGetRelatedTargetDevice @ 0x1406F3B0C (IoGetRelatedTargetDevice.c)
 *     IopSynchronousApiServiceTail @ 0x14076E298 (IopSynchronousApiServiceTail.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     IoReportTargetDeviceChange @ 0x14087D430 (IoReportTargetDeviceChange.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  struct _KEVENT *v7; // r13
  struct _KTHREAD *CurrentThread; // rdi
  KPROCESSOR_MODE PreviousMode; // r11
  __int64 v10; // rdx
  ULONG v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // rax
  char *v14; // rcx
  __int16 v15; // ax
  char v16; // al
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v18; // rsi
  int RelatedTargetDevice; // eax
  struct _DEVICE_OBJECT *v20; // rdi
  ULONG *p_Flags; // r12
  char v22; // r14
  struct _KTHREAD *v23; // rax
  struct _FILE_OBJECT *v24; // rbx
  __int64 v25; // rax
  int v26; // ebx
  unsigned __int8 v27; // bl
  __int64 v28; // rdx
  IRP *v29; // rax
  IRP *v30; // r14
  struct _IO_STATUS_BLOCK *v31; // rax
  struct _KEVENT *v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  ULONG v34; // ebx
  struct _IRP *v35; // rax
  char v36; // cl
  FS_INFORMATION_CLASS v37; // edx
  int v38; // eax
  unsigned __int8 v39; // r12
  PVOID v40; // rcx
  struct _KEVENT *Pool2; // rax
  unsigned __int8 v42; // [rsp+40h] [rbp-D8h] BYREF
  KPROCESSOR_MODE v43; // [rsp+41h] [rbp-D7h]
  char v44; // [rsp+42h] [rbp-D6h]
  ULONG v45; // [rsp+44h] [rbp-D4h]
  struct _FILE_OBJECT *v46; // [rsp+48h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  FS_INFORMATION_CLASS v48; // [rsp+58h] [rbp-C0h]
  struct _IO_STATUS_BLOCK *v49; // [rsp+60h] [rbp-B8h]
  PVOID P; // [rsp+68h] [rbp-B0h]
  struct _KTHREAD *v51; // [rsp+70h] [rbp-A8h]
  void *Src; // [rsp+78h] [rbp-A0h]
  ULONG *v53; // [rsp+80h] [rbp-98h]
  struct _DEVICE_OBJECT *RelatedDeviceObject; // [rsp+88h] [rbp-90h]
  PIRP Irp; // [rsp+90h] [rbp-88h]
  __int128 v56; // [rsp+98h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+A8h] [rbp-70h] BYREF
  GUID v58; // [rsp+ACh] [rbp-6Ch]
  int v59; // [rsp+BCh] [rbp-5Ch]
  __int64 v60; // [rsp+C0h] [rbp-58h]
  int v61; // [rsp+C8h] [rbp-50h]
  int v62; // [rsp+CCh] [rbp-4Ch]

  v45 = Length;
  Src = FsInformation;
  v49 = IoStatusBlock;
  v48 = FsInformationClass;
  v46 = 0LL;
  v7 = 0LL;
  P = 0LL;
  Object = 0LL;
  CurrentThread = KeGetCurrentThread();
  v51 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v43 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v10 = FsInformationClass;
    v11 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30]
      && ((v15 = WORD2(Process[2].Affinity.StaticBitmap[20]), v15 == 332) || v15 == 452 ? (v16 = 1) : (v16 = 0),
          (v44 = v16) != 0) )
    {
      if ( !Length )
        goto LABEL_22;
      if ( ((unsigned __int8)FsInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    else
    {
      if ( !Length )
        goto LABEL_22;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v14 = (char *)FsInformation + Length;
    if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < FsInformation )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  else
  {
    v10 = FsInformationClass;
  }
LABEL_22:
  result = IopReferenceFileObject(FileHandle, IopSetFsOperationAccess[v10], PreviousMode, (PVOID *)&v46, 0LL);
  if ( result < 0 )
    return result;
  v18 = v46;
  RelatedTargetDevice = IoGetRelatedTargetDevice(v46, &Object);
  v20 = (struct _DEVICE_OBJECT *)Object;
  if ( RelatedTargetDevice < 0 )
    v20 = 0LL;
  Object = v20;
  p_Flags = &v18->Flags;
  v53 = &v18->Flags;
  if ( (v18->Flags & 2) != 0 )
  {
    v22 = (v18->Flags & 4) != 0;
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = v46;
    v25 = KeAbPreAcquire((__int64)&v46->Lock, 0LL);
    v42 = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v24->Busy, 1) )
    {
      v18 = v46;
      v26 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&v46->Type, v43, v22, v25, &v42);
    }
    else
    {
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
      v18 = v46;
      ObfReferenceObject(v46);
      v26 = 0;
    }
    if ( v42 )
    {
      ObfDereferenceObject(v18);
      v40 = Object;
      if ( !Object )
        return v26;
      goto LABEL_47;
    }
    v27 = 1;
    v20 = (struct _DEVICE_OBJECT *)Object;
  }
  else
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v7 = Pool2;
    P = Pool2;
    if ( !Pool2 )
    {
      ObfDereferenceObject(v18);
LABEL_62:
      if ( v20 )
        ObfDereferenceObject(v20);
      return -1073741670;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
    v27 = 0;
  }
  v42 = v27;
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v18->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
  LOBYTE(v28) = RelatedDeviceObject->StackSize;
  v29 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v28, 0LL);
  v30 = v29;
  Irp = v29;
  if ( !v29 )
  {
    if ( (*p_Flags & 2) == 0 )
      ExFreePoolWithTag(v7, 0);
    IopAllocateIrpCleanup(v18, 0LL);
    goto LABEL_62;
  }
  v29->Tail.Overlay.OriginalFileObject = v18;
  v29->Tail.Overlay.Thread = v51;
  v29->RequestorMode = v43;
  v56 = 0LL;
  if ( v27 )
  {
    v31 = v49;
    v32 = 0LL;
  }
  else
  {
    v29->Flags = 4;
    v31 = (struct _IO_STATUS_BLOCK *)&v56;
    v32 = v7;
  }
  v30->UserEvent = v32;
  v30->UserIosb = v31;
  v30->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v30->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 11;
  CurrentStackLocation[-1].FileObject = v18;
  v30->AssociatedIrp.MasterIrp = 0LL;
  v30->MdlAddress = 0LL;
  v34 = v45;
  v35 = (struct _IRP *)ExAllocatePool2(97LL, v45, 1112764233LL);
  v30->AssociatedIrp.MasterIrp = v35;
  memmove(v35, Src, v34);
  v36 = v43;
  v37 = v48;
  if ( !v43
    || v48 != FileFsLabelInformation
    || (v38 = *(_DWORD *)v30->AssociatedIrp.MasterIrp, v38 >= 0) && v38 + 4 <= v45 )
  {
    v30->Flags |= 0x30u;
    CurrentStackLocation[-1].Parameters.Read.Length = v45;
    CurrentStackLocation[-1].Parameters.Create.Options = v37;
    v39 = v42;
    v26 = IopSynchronousServiceTail(RelatedDeviceObject, (__int64)v30, (__int64)v18, 0, v36, v42, 2u);
    if ( !v39 )
      v26 = IopSynchronousApiServiceTail(v26, v7, v30, v43, (unsigned int *)&v56, v49);
    if ( !v20 )
      return v26;
    if ( v26 >= 0 )
    {
      v59 = 0;
      v62 = 0;
      NotificationStructure = 2359297;
      v60 = 0LL;
      v61 = -1;
      v58 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange(v20, &NotificationStructure);
    }
    v40 = v20;
LABEL_47:
    ObfDereferenceObject(v40);
    return v26;
  }
  IopExceptionCleanupEx(v18, v30, 0LL, v7, (*v53 & 2) != 0);
  if ( v20 )
    ObfDereferenceObject(v20);
  return -1073741811;
}
