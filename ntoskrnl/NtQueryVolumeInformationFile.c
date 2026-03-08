/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1406B2A90
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140766A44 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x14077AECC (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14077AFF0 (PfSnQueryVolumeInfo.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     IopGetMountFlag @ 0x1402F6CEC (IopGetMountFlag.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopGetDriverPathInformation @ 0x140553224 (IopGetDriverPathInformation.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x14076E298 (IopSynchronousApiServiceTail.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 *     ExRaiseAccessViolation @ 0x1408713F0 (ExRaiseAccessViolation.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  NTSTATUS v8; // esi
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r10
  __int64 v11; // rbx
  ULONG v12; // eax
  __int64 v13; // rcx
  _KPROCESS *Process; // rax
  bool v15; // al
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  __int16 v19; // cx
  ACCESS_MASK v20; // edx
  int v21; // r12d
  char *v22; // rbx
  _DWORD *v23; // rax
  _DWORD *v24; // r12
  int v25; // r13d
  int MountFlag; // ecx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  NTSTATUS v34; // r13d
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  IRP *v36; // rax
  PIO_STATUS_BLOCK v37; // rdx
  struct _KEVENT *v38; // r8
  __int64 v39; // rcx
  struct _IRP *v40; // rax
  __int64 v41; // r9
  IRP *v42; // rsi
  __int64 v43; // rax
  char v44; // di
  unsigned __int8 v45; // r14
  struct _KEVENT *Pool2; // rax
  _BYTE *v48; // rdi
  int DriverPathInformation; // eax
  int Object; // [rsp+20h] [rbp-98h]
  int HandleInformation; // [rsp+28h] [rbp-90h]
  char v52; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v53; // [rsp+41h] [rbp-77h]
  bool v54; // [rsp+42h] [rbp-76h]
  int v55; // [rsp+44h] [rbp-74h]
  PVOID v56; // [rsp+48h] [rbp-70h]
  _DWORD *p_Flags; // [rsp+50h] [rbp-68h]
  PVOID P; // [rsp+58h] [rbp-60h]
  PIRP Irp; // [rsp+60h] [rbp-58h]
  __int64 v60; // [rsp+68h] [rbp-50h]
  PVOID v61; // [rsp+70h] [rbp-48h] BYREF
  PDEVICE_OBJECT v62; // [rsp+78h] [rbp-40h]
  __int128 v63; // [rsp+80h] [rbp-38h] BYREF

  v8 = 0;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v60 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v53 = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= 0x10 )
      return -1073741821;
    v11 = FsInformationClass;
    v12 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v12 )
      return -1073741821;
    if ( Length < v12 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    Process = CurrentThread->ApcState.Process;
    v15 = 0;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v19 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( v19 == 332 || v19 == 452 )
        v15 = 1;
    }
    v54 = v15;
    if ( v15 )
    {
      ProbeForWrite(FsInformation, Length, 4u);
      PreviousMode = v53;
    }
    else if ( Length )
    {
      v16 = (unsigned __int64)FsInformation;
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1) & (unsigned int)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int64)FsInformation + Length - 1;
      if ( (unsigned __int64)FsInformation > v17 || v17 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v18 = (v17 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v16 = *(_BYTE *)v16;
        v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v16 != v18 );
    }
  }
  else
  {
    v11 = FsInformationClass;
  }
  v20 = IopQueryFsOperationAccess[v11];
  v61 = 0LL;
  v21 = ObReferenceObjectByHandle(FileHandle, v20, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &v61, 0LL);
  v22 = (char *)v61;
  p_Flags = v61;
  if ( v21 >= 0 )
  {
    v23 = (_DWORD *)*((_QWORD *)v61 + 26);
    if ( v23 )
    {
      if ( (*v23 & 4) != 0 )
      {
        if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
        {
          ObfDereferenceObject(v22);
          v21 = -1073739504;
        }
      }
    }
  }
  if ( v21 < 0 )
    return v21;
  v24 = v22 + 80;
  Irp = (PIRP)(v22 + 80);
  v25 = *((_DWORD *)v22 + 20);
  if ( (v25 & 0x800) != 0 )
  {
    if ( FsInformationClass != FileFsDeviceInformation )
    {
      ObfDereferenceObject(v22);
      return -1073741808;
    }
  }
  else if ( FsInformationClass != FileFsDeviceInformation )
  {
    goto LABEL_40;
  }
  if ( (*((_DWORD *)v22 + 20) & 0x800) != 0 || *(_DWORD *)(*((_QWORD *)v22 + 1) + 72LL) != 20 )
  {
    MountFlag = 0;
    v27 = *((_QWORD *)v22 + 1);
    v28 = *(_QWORD *)(v27 + 56);
    if ( v28 )
    {
      v29 = *((_QWORD *)v22 + 2);
      if ( v29 == v28 )
        MountFlag = *(_WORD *)(v29 + 4) & 1;
      else
        MountFlag = IopGetMountFlag(*((_QWORD *)v22 + 1));
    }
    if ( Length < 8 )
    {
      v8 = -1073741820;
    }
    else
    {
      *(_DWORD *)FsInformation = *(_DWORD *)(v27 + 72);
      v30 = *(_DWORD *)(v27 + 52);
      *((_DWORD *)FsInformation + 1) = v30;
      if ( MountFlag )
        *((_DWORD *)FsInformation + 1) = v30 | 0x20;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 8LL;
      v55 = 0;
    }
    ObfDereferenceObject(v22);
    return v8;
  }
LABEL_40:
  if ( (v25 & 2) != 0 )
  {
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = KeAbPreAcquire((__int64)(v22 + 128), 0LL);
    v52 = 0;
    if ( _InterlockedExchange((volatile __int32 *)v22 + 29, 1) )
    {
      v34 = IopWaitAndAcquireFileObjectLock(v22, (__int64)&v52);
    }
    else
    {
      if ( v33 )
        *(_BYTE *)(v33 + 18) = 1;
      ObfReferenceObject(v22);
      v34 = 0;
    }
    if ( v52 )
      goto LABEL_80;
    v52 = 1;
  }
  else
  {
    v52 = 0;
  }
  if ( FsInformationClass == FileFsDriverPathInformation )
  {
    P = 0LL;
    P = (PVOID)ExAllocatePool2(97LL, Length, 1112764233LL);
    memmove(P, FsInformation, Length);
    v48 = P;
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)P, Length);
    v34 = DriverPathInformation;
    v55 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *v48;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( v48 )
      ExFreePoolWithTag(v48, 0);
    if ( (*v24 & 2) != 0 )
      IopReleaseFileObjectLock((volatile __int32 *)v22);
LABEL_80:
    ObfDereferenceObject(v22);
    return v34;
  }
  if ( (*v24 & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)(v22 + 152));
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  v62 = RelatedDeviceObject;
  if ( (*v24 & 2) == 0 )
  {
    Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    v56 = Pool2;
    if ( !Pool2 )
    {
      ObfDereferenceObject(v22);
      return -1073741670;
    }
    KeInitializeEvent(Pool2, SynchronizationEvent, 0);
  }
  v36 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 0LL);
  Irp = v36;
  if ( v36 )
  {
    v36->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v36->Tail.Overlay.Thread = (PETHREAD)v60;
    v36->RequestorMode = v53;
    v63 = 0LL;
    p_Flags = &v36->Flags;
    if ( v52 )
    {
      v37 = IoStatusBlock;
      v38 = 0LL;
    }
    else
    {
      v36->Flags = 4;
      v37 = (PIO_STATUS_BLOCK)&v63;
      v38 = (struct _KEVENT *)v56;
      p_Flags = &v36->Flags;
    }
    v36->UserEvent = v38;
    v36->UserIosb = v37;
    v36->Overlay.AllocationSize.QuadPart = 0LL;
    v39 = (__int64)&v36->Tail.Overlay.CurrentStackLocation[-1];
    v60 = v39;
    *(_BYTE *)v39 = 10;
    *(_QWORD *)(v39 + 48) = v22;
    v36->UserBuffer = FsInformation;
    v36->AssociatedIrp.MasterIrp = 0LL;
    v36->MdlAddress = 0LL;
    v40 = (struct _IRP *)ExAllocatePool2(65LL, Length, 1112764233LL);
    v42 = Irp;
    Irp->AssociatedIrp.MasterIrp = v40;
    if ( v40 )
    {
      *p_Flags |= 0x870u;
      v43 = v60;
      *(_DWORD *)(v60 + 8) = Length;
      *(_DWORD *)(v43 + 16) = FsInformationClass;
      v44 = v52;
      LOBYTE(HandleInformation) = v52;
      v45 = v53;
      LOBYTE(Object) = v53;
      LOBYTE(v41) = 1;
      result = IopSynchronousServiceTail(v62, v42, v22, v41, Object, HandleInformation, 2);
      if ( !v44 )
        return IopSynchronousApiServiceTail((unsigned int)result, v56, v42, v45, &v63, IoStatusBlock);
    }
    else
    {
      IopExceptionCleanupEx(v22, v42, 0LL, v56, (*v24 & 2) != 0);
      return -1073741670;
    }
  }
  else
  {
    if ( (*v24 & 2) == 0 )
      ExFreePoolWithTag(v56, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  return result;
}
