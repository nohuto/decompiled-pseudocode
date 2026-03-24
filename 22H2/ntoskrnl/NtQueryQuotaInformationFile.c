/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140895B90
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x14050875C (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x140508828 (IopVerifierExAllocatePool_3.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14050889C (IopVerifierExAllocatePoolWithQuota_5.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     RtlLengthRequiredSid @ 0x1405DC260 (RtlLengthRequiredSid.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     RtlValidSid @ 0x1406D54E0 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408912AC (IopCheckGetQuotaBufferValidity.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  HANDLE v11; // r15
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  ULONG v17; // r8d
  PSID v18; // r13
  __int64 v19; // rax
  ULONG v20; // eax
  ULONG v21; // r15d
  ULONG v22; // r14d
  ULONG v23; // ecx
  NTSTATUS result; // eax
  unsigned int *PoolWithQuota_5; // rbx
  unsigned int *v26; // rax
  PSID v27; // rax
  NTSTATUS v28; // esi
  struct _DMA_ADAPTER *v29; // r15
  _DWORD *v30; // r12
  bool v31; // si
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  _DWORD *v39; // r9
  NTSTATUS v40; // ebx
  struct _KEVENT *Pool_3; // rax
  IRP *v42; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v44; // rax
  struct _KEVENT *v45; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v47; // r14
  ULONG Flags; // eax
  struct _IRP *v49; // rcx
  ULONG v50; // ebx
  PMDL Mdl; // rcx
  __int64 v52; // r8
  char v53; // al
  char v54; // [rsp+40h] [rbp-98h]
  KPROCESSOR_MODE v55[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  unsigned int *v58; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v60; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v62; // [rsp+80h] [rbp-58h]
  unsigned int v63[20]; // [rsp+88h] [rbp-50h] BYREF

  v11 = FileHandle;
  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v55[7] = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v58 = 0LL;
  *(_OWORD *)v63 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v62 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v55[0] = PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v15 && ((v16 = *(_WORD *)(v15 + 8), v16 == 332) || v16 == 452) )
      v17 = 4;
    else
      v17 = 8;
    ProbeForWrite(Buffer, Length, v17);
    v18 = StartSid;
    if ( StartSid )
    {
      v19 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v55[1] = *(_BYTE *)v19;
      v20 = RtlLengthRequiredSid(*(unsigned __int8 *)v19);
      v21 = v20;
      LODWORD(DeviceObject) = v20;
      if ( v20 )
      {
        if ( ((unsigned __int8)StartSid & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)StartSid + v20 > 0x7FFFFFFF0000LL || (char *)StartSid + v20 < StartSid )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v55[1] = 0;
      v21 = (unsigned int)DeviceObject;
    }
    if ( SidList && (v22 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v23 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v23 > ~v21 )
        return -1073741811;
      if ( v23 < SidListLength )
        return -1073741811;
      PoolWithQuota_5 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, v23 + v21);
      *(_QWORD *)&v55[7] = PoolWithQuota_5;
      v58 = PoolWithQuota_5;
      memmove(PoolWithQuota_5, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_5 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_5(PagedPool, v21);
        *(_QWORD *)&v55[7] = PoolWithQuota_5;
      }
      else
      {
        PoolWithQuota_5 = *(unsigned int **)&v55[7];
      }
    }
    if ( StartSid )
    {
      Sid = (char *)PoolWithQuota_5 + ((v22 + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v21);
      *((_BYTE *)Sid + 1) = v55[1];
    }
    v11 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v26 = v58;
      if ( SidListLength )
        v26 = (unsigned int *)SidList;
      v58 = v26;
    }
    v27 = Sid;
    v18 = StartSid;
    if ( StartSid )
      v27 = StartSid;
    Sid = v27;
    PoolWithQuota_5 = *(unsigned int **)&v55[7];
  }
  if ( v58 )
  {
    v60 = 0LL;
    v28 = IopCheckGetQuotaBufferValidity(v58, v22, &v60);
    if ( v28 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v60;
LABEL_45:
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      return v28;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741704;
  }
  v28 = IopReferenceFileObject(v11, 0, PreviousMode, &Object, 0LL);
  if ( v28 < 0 )
    goto LABEL_45;
  v29 = (struct _DMA_ADAPTER *)Object;
  v30 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v31 = (*((_DWORD *)Object + 20) & 4) != 0;
    v32 = KeGetCurrentThread();
    --v32->KernelApcDisable;
    v33 = (volatile __int32 *)Object;
    v36 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
    v55[2] = 0;
    if ( _InterlockedExchange(v33 + 29, 1) )
    {
      LOBYTE(v35) = v31;
      LOBYTE(v34) = v55[0];
      v29 = (struct _DMA_ADAPTER *)Object;
      v40 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v34, v35, v36, &v55[2]);
    }
    else
    {
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
      v29 = (struct _DMA_ADAPTER *)Object;
      ObfReferenceObject(Object);
      v40 = 0;
    }
    if ( v55[2] )
    {
      if ( *(_QWORD *)&v55[7] )
        ExFreePoolWithTag(*(PVOID *)&v55[7], 0);
LABEL_68:
      HalPutDmaAdapter(v29);
      return v40;
    }
    v54 = 1;
    v22 = SidListLength;
    PoolWithQuota_5 = *(unsigned int **)&v55[7];
  }
  else
  {
    Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
    P = Pool_3;
    if ( !Pool_3 )
    {
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      v40 = -1073741670;
      goto LABEL_68;
    }
    KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
    v54 = 0;
  }
  IopResetEvent((__int64)v29, v37, v38, v39);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v29);
  v42 = (IRP *)IopAllocateIrpExReturn();
  Irp = v42;
  v60 = v42;
  if ( !v42 )
  {
    if ( (*v30 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v29, 0LL);
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741670;
  }
  v42->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v29;
  v42->Tail.Overlay.Thread = v62;
  v42->RequestorMode = v55[0];
  if ( v54 )
  {
    v44 = IoStatusBlock;
    v45 = 0LL;
  }
  else
  {
    v42->Flags = 4;
    v44 = (PIO_STATUS_BLOCK)v63;
    v45 = (struct _KEVENT *)P;
  }
  Irp->UserEvent = v45;
  Irp->UserIosb = v44;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
  Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v58;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v47 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v49 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v49;
      if ( !IopDisableBufferedIoInit )
        memset(v49, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v50 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      IopProbeAndLockPages_2((__int64)Mdl, v55[0], v52, (__int64)v47, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_90;
  }
  Irp->UserBuffer = Buffer;
  v50 = Length;
LABEL_90:
  CurrentStackLocation[-1].Parameters.Read.Length = v50;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v53 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v53 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v53 |= 2u;
    CurrentStackLocation[-1].Flags = v53;
  }
  if ( v18 )
    CurrentStackLocation[-1].Flags = v53 | 4;
  result = IopSynchronousServiceTail(v47, Irp, (__int64)v29, 0LL, v55[0], v54, 2u);
  if ( !v54 )
    return IopSynchronousApiServiceTail(result, P, Irp, v55[0], v63, IoStatusBlock);
  return result;
}
