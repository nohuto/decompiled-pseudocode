/*
 * XREFs of NtQueryVolumeInformationFile @ 0x1406C9680
 * Callers:
 *     PfSnQueryVolumeInfo @ 0x1406342E4 (PfSnQueryVolumeInfo.c)
 *     PfSnIsVolumeMounted @ 0x140634A00 (PfSnIsVolumeMounted.c)
 *     PfpVolumeOpenAndVerify @ 0x14070B318 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePool_1 @ 0x14031F1CC (IopVerifierExAllocatePool_1.c)
 *     IopGetMountFlag @ 0x1403452E0 (IopGetMountFlag.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopGetDriverPathInformation @ 0x14050081C (IopGetDriverPathInformation.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  struct _KTHREAD *CurrentThread; // r8
  KPROCESSOR_MODE PreviousMode; // di
  FS_INFORMATION_CLASS v10; // r15d
  ULONG v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  bool v16; // al
  ULONG v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _DWORD *v21; // r9
  PADAPTER_OBJECT v22; // rdi
  PADAPTER_OBJECT v23; // rbx
  int v24; // r14d
  char MountFlag; // cl
  _DMA_OPERATIONS *DmaOperations; // rbx
  int FreeAdapterChannel_high; // eax
  char v28; // r14
  struct _KTHREAD *v29; // rax
  PADAPTER_OBJECT v30; // rbx
  __int64 v31; // rax
  NTSTATUS v32; // ebx
  _BYTE *PoolWithQuota; // r14
  NTSTATUS DriverPathInformation; // eax
  struct _KEVENT *Pool_1; // rax
  struct _KEVENT *v36; // r14
  IRP *v37; // rax
  __int64 v38; // rcx
  IRP *v39; // rbx
  PIO_STATUS_BLOCK v40; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IRP *v42; // rax
  _DWORD *v43; // r9
  char v44; // si
  KPROCESSOR_MODE v45; // r14
  char v46; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v47; // [rsp+41h] [rbp-77h]
  bool v48; // [rsp+42h] [rbp-76h]
  NTSTATUS v49; // [rsp+44h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp-70h] BYREF
  PVOID P; // [rsp+50h] [rbp-68h]
  _BYTE *v52; // [rsp+58h] [rbp-60h]
  PADAPTER_OBJECT v53; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *v55; // [rsp+70h] [rbp-48h]
  PIRP Irp; // [rsp+78h] [rbp-40h]
  __int128 v57; // [rsp+80h] [rbp-38h] BYREF

  DmaAdapter = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v47 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = FsInformationClass;
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopQueryFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( Length < v11 )
      return -1073741820;
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v13 = (__int64)IoStatusBlock;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    v16 = 0;
    if ( v14 )
    {
      v15 = *(_WORD *)(v14 + 8);
      if ( v15 == 332 || v15 == 452 )
        v16 = 1;
    }
    v48 = v16;
    v17 = 4;
    if ( !v16 )
      v17 = *((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass);
    ProbeForWrite(FsInformation, Length, v17);
  }
  else
  {
    v10 = FsInformationClass;
  }
  result = IopReferenceFileObject(FileHandle, IopQueryFsOperationAccess[v10], PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  v49 = result;
  if ( result < 0 )
    return result;
  v22 = DmaAdapter;
  v23 = DmaAdapter + 5;
  v53 = DmaAdapter + 5;
  v24 = *(_DWORD *)&DmaAdapter[5].Version;
  if ( (v24 & 0x800) != 0 )
  {
    if ( v10 != FileFsDeviceInformation )
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741808;
    }
LABEL_23:
    if ( (*(_DWORD *)&DmaAdapter[5].Version & 0x800) != 0 || LODWORD(DmaAdapter->DmaOperations->GetDmaAlignment) != 20 )
    {
      MountFlag = 0;
      DmaOperations = DmaAdapter->DmaOperations;
      if ( DmaOperations->FreeMapRegisters )
        MountFlag = IopGetMountFlag((__int64)DmaAdapter->DmaOperations, v18, v20, v21);
      if ( Length >= 8 )
      {
        *(_DWORD *)FsInformation = DmaOperations->GetDmaAlignment;
        FreeAdapterChannel_high = HIDWORD(DmaOperations->FreeAdapterChannel);
        *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high;
        if ( MountFlag )
          *((_DWORD *)FsInformation + 1) = FreeAdapterChannel_high | 0x20;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
        v49 = 0;
        HalPutDmaAdapter(v22);
        return 0;
      }
      else
      {
        HalPutDmaAdapter(v22);
        return -1073741820;
      }
    }
    goto LABEL_32;
  }
  if ( v10 == FileFsDeviceInformation )
    goto LABEL_23;
LABEL_32:
  if ( (v24 & 2) != 0 )
  {
    v28 = (v24 & 4) != 0;
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v30 = DmaAdapter;
    v31 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    v46 = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v30[7].Size + 1), 1) )
    {
      v22 = DmaAdapter;
      v32 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, v47, v28, v31, &v46);
    }
    else
    {
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v22 = DmaAdapter;
      ObfReferenceObject(DmaAdapter);
      v32 = 0;
    }
    if ( v46 )
      goto LABEL_47;
    v46 = 1;
    v23 = v53;
  }
  else
  {
    v46 = 0;
  }
  if ( v10 == FileFsDriverPathInformation )
  {
    v52 = 0LL;
    PoolWithQuota = IopVerifierExAllocatePoolWithQuota(v19, Length);
    v52 = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, Length);
    DriverPathInformation = IopGetDriverPathInformation((__int64)v22, (__int64)PoolWithQuota, Length);
    v32 = DriverPathInformation;
    v49 = DriverPathInformation;
    if ( DriverPathInformation < 0 )
      RtlRaiseStatus(DriverPathInformation);
    *(_BYTE *)FsInformation = *PoolWithQuota;
    IoStatusBlock->Status = 0;
    IoStatusBlock->Information = 12LL;
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    if ( (*(_DWORD *)&v22[5].Version & 2) != 0 )
      IopReleaseFileObjectLock(v22);
LABEL_47:
    HalPutDmaAdapter(v22);
    return v32;
  }
  IopResetEvent((__int64)v22, v18, v20, v21);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  if ( (*(_DWORD *)&v23->Version & 2) != 0 )
  {
    v36 = 0LL;
  }
  else
  {
    Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
    v36 = Pool_1;
    P = Pool_1;
    if ( !Pool_1 )
    {
      HalPutDmaAdapter(v22);
      return -1073741670;
    }
    KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
  }
  v37 = (IRP *)IopAllocateIrpExReturn();
  v39 = v37;
  Irp = v37;
  if ( !v37 )
  {
    if ( (*(_DWORD *)&v53->Version & 2) == 0 )
      ExFreePoolWithTag(v36, 0);
    IopAllocateIrpCleanup(v22, 0LL);
    return -1073741670;
  }
  v37->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
  v37->Tail.Overlay.Thread = v55;
  v37->RequestorMode = v47;
  v57 = 0LL;
  if ( v46 )
  {
    v40 = IoStatusBlock;
    v36 = 0LL;
  }
  else
  {
    v37->Flags = 4;
    v40 = (PIO_STATUS_BLOCK)&v57;
  }
  v39->UserEvent = v36;
  v39->UserIosb = v40;
  v39->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = v39->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
  v39->UserBuffer = FsInformation;
  v39->AssociatedIrp.MasterIrp = 0LL;
  v39->MdlAddress = 0LL;
  v42 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v38, Length);
  v39->AssociatedIrp.MasterIrp = v42;
  if ( !IopDisableBufferedIoInit )
    memset(v42, 0, Length);
  v39->Flags |= 0x870u;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v10;
  v44 = v46;
  v45 = v47;
  LOBYTE(v43) = 1;
  result = IopSynchronousServiceTail(DeviceObject, v39, (__int64)v22, v43, v47, v46, 2u);
  if ( !v44 )
    return IopSynchronousApiServiceTail(result, P, v39, v45, (unsigned int *)&v57, IoStatusBlock);
  return result;
}
