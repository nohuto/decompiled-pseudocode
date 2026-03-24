/*
 * XREFs of NtSetVolumeInformationFile @ 0x14076C940
 * Callers:
 *     <none>
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     IopVerifierExAllocatePool_1 @ 0x14031F1CC (IopVerifierExAllocatePool_1.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     IoGetRelatedTargetDevice @ 0x14071B8AC (IoGetRelatedTargetDevice.c)
 *     IoReportTargetDeviceChange @ 0x14076CEC0 (IoReportTargetDeviceChange.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FS_INFORMATION_CLASS FsInformationClass)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v8; // r12
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r10
  unsigned int v11; // eax
  NTSTATUS result; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int16 v15; // ax
  struct _FILE_OBJECT *v16; // rsi
  int RelatedTargetDevice; // eax
  struct _DMA_ADAPTER *v18; // rdi
  bool v19; // r14
  struct _KTHREAD *v20; // rax
  volatile __int32 *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // ebx
  struct _DMA_ADAPTER *v26; // rcx
  struct _KEVENT *Pool_1; // rax
  IRP *v28; // rax
  IRP *v29; // r14
  struct _IO_STATUS_BLOCK *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _IRP *PoolWithQuota; // rax
  char v34; // r8
  int v35; // eax
  int v36; // edx
  __int64 v37; // rcx
  char v38; // r13
  char v39[8]; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-B0h]
  ULONG *p_Flags; // [rsp+60h] [rbp-A8h]
  struct _IO_STATUS_BLOCK *v44; // [rsp+68h] [rbp-A0h]
  PVOID P; // [rsp+70h] [rbp-98h]
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-90h]
  PIRP Irp; // [rsp+80h] [rbp-88h]
  __int128 v48; // [rsp+88h] [rbp-80h] BYREF
  int NotificationStructure; // [rsp+98h] [rbp-70h] BYREF
  GUID v50; // [rsp+9Ch] [rbp-6Ch]
  int v51; // [rsp+ACh] [rbp-5Ch]
  __int64 v52; // [rsp+B0h] [rbp-58h]
  int v53; // [rsp+B8h] [rbp-50h]
  int v54; // [rsp+BCh] [rbp-4Ch]

  v5 = Length;
  *(_DWORD *)&v39[4] = Length;
  v44 = IoStatusBlock;
  Object = 0LL;
  v8 = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  v42 = (__int64)CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v39[1] = PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)FsInformationClass >= FileFsMaximumInformation )
      return -1073741821;
    v11 = *((unsigned __int8 *)IopSetFsOperationLength + (int)FsInformationClass);
    if ( !(_BYTE)v11 )
      return -1073741821;
    if ( (unsigned int)v5 < v11 )
      return -1073741820;
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v14 && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452) )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((unsigned __int8)FsInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else if ( (_DWORD)v5 )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetFsAlignmentRequirement + (int)FsInformationClass) - 1LL) & (unsigned __int64)FsInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FsInformation + v5 > 0x7FFFFFFF0000LL || (char *)FsInformation + v5 < FsInformation )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, IopSetFsOperationAccess[FsInformationClass], PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v16 = (struct _FILE_OBJECT *)Object;
    RelatedTargetDevice = IoGetRelatedTargetDevice((struct _FILE_OBJECT *)Object, &DmaAdapter);
    v18 = DmaAdapter;
    if ( RelatedTargetDevice < 0 )
      v18 = 0LL;
    DmaAdapter = v18;
    p_Flags = &v16->Flags;
    if ( (v16->Flags & 2) != 0 )
    {
      v19 = (v16->Flags & 4) != 0;
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v21 = (volatile __int32 *)Object;
      v22 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
      v39[0] = 0;
      if ( _InterlockedExchange(v21 + 29, 1) )
      {
        LOBYTE(v24) = v19;
        LOBYTE(v23) = v39[1];
        v16 = (struct _FILE_OBJECT *)Object;
        v25 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v23, v24, v22, v39);
      }
      else
      {
        if ( v22 )
          *(_BYTE *)(v22 + 26) |= 1u;
        v16 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v25 = 0;
      }
      if ( v39[0] )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
        v26 = DmaAdapter;
        if ( !DmaAdapter )
          return v25;
LABEL_34:
        HalPutDmaAdapter(v26);
        return v25;
      }
      v39[0] = 1;
      v18 = DmaAdapter;
      v5 = *(unsigned int *)&v39[4];
    }
    else
    {
      Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1();
      v8 = Pool_1;
      P = Pool_1;
      if ( !Pool_1 )
      {
        HalPutDmaAdapter((PADAPTER_OBJECT)v16);
LABEL_46:
        if ( v18 )
          HalPutDmaAdapter(v18);
        return -1073741670;
      }
      KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
      v39[0] = 0;
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v16->Event);
    DeviceObject = IoGetRelatedDeviceObject(v16);
    v28 = (IRP *)IopAllocateIrpExReturn();
    v29 = v28;
    Irp = v28;
    if ( !v28 )
    {
      if ( (*p_Flags & 2) == 0 )
        ExFreePoolWithTag(v8, 0);
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v16, 0LL);
      goto LABEL_46;
    }
    v28->Tail.Overlay.OriginalFileObject = v16;
    v28->Tail.Overlay.Thread = (PETHREAD)v42;
    v28->RequestorMode = v39[1];
    v48 = 0LL;
    if ( v39[0] )
    {
      v30 = v44;
      v31 = 0LL;
    }
    else
    {
      v28->Flags = 4;
      v30 = (struct _IO_STATUS_BLOCK *)&v48;
      v31 = (__int64)v8;
    }
    v29->UserEvent = (PKEVENT)v31;
    v29->UserIosb = v30;
    v29->Overlay.AllocationSize.QuadPart = 0LL;
    v32 = (__int64)&v29->Tail.Overlay.CurrentStackLocation[-1];
    v42 = v32;
    *(_BYTE *)v32 = 11;
    *(_QWORD *)(v32 + 48) = v16;
    v29->AssociatedIrp.MasterIrp = 0LL;
    v29->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v31, v5);
    v29->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FsInformation, v5);
    v34 = v39[1];
    if ( v39[1] && FsInformationClass == FileFsLabelInformation )
    {
      v35 = *(_DWORD *)v29->AssociatedIrp.MasterIrp;
      if ( v35 < 0 || (v36 = *(_DWORD *)&v39[4], (unsigned int)(v35 + 4) > *(_DWORD *)&v39[4]) )
      {
        IopExceptionCleanupEx((PADAPTER_OBJECT)v16, v29, 0LL, v8, (v16->Flags & 2) != 0);
        if ( v18 )
          HalPutDmaAdapter(v18);
        return -1073741811;
      }
    }
    else
    {
      v36 = *(_DWORD *)&v39[4];
    }
    v29->Flags |= 0x30u;
    v37 = v42;
    *(_DWORD *)(v42 + 8) = v36;
    *(_DWORD *)(v37 + 16) = FsInformationClass;
    v38 = v39[0];
    v25 = IopSynchronousServiceTail(DeviceObject, v29, (__int64)v16, 0LL, v34, v39[0], 2u);
    if ( !v38 )
      v25 = IopSynchronousApiServiceTail(v25, v8, v29, v39[1], (unsigned int *)&v48, v44);
    if ( !v18 )
      return v25;
    if ( v25 >= 0 )
    {
      v51 = 0;
      v54 = 0;
      NotificationStructure = 2359297;
      v52 = 0LL;
      v53 = -1;
      v50 = GUID_IO_VOLUME_CHANGE;
      IoReportTargetDeviceChange((PDEVICE_OBJECT)v18, &NotificationStructure);
    }
    v26 = v18;
    goto LABEL_34;
  }
  return result;
}
