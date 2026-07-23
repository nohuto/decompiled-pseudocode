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
  char v31; // si
  struct _KTHREAD *v32; // rax
  volatile __int32 *v33; // rbx
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  _DWORD *v37; // r9
  NTSTATUS v38; // ebx
  struct _KEVENT *Pool_3; // rax
  IRP *v40; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v42; // rax
  struct _KEVENT *v43; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v45; // r14
  ULONG Flags; // eax
  struct _IRP *v47; // rcx
  ULONG v48; // ebx
  PMDL Mdl; // rcx
  __int64 v50; // r8
  char v51; // al
  char v52; // [rsp+40h] [rbp-98h]
  KPROCESSOR_MODE v53[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID Object; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h]
  unsigned int *v56; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v58; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v60; // [rsp+80h] [rbp-58h]
  unsigned int v61[20]; // [rsp+88h] [rbp-50h] BYREF

  v11 = FileHandle;
  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v53[7] = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v56 = 0LL;
  *(_OWORD *)v61 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v53[0] = PreviousMode;
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
      v53[1] = *(_BYTE *)v19;
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
      v53[1] = 0;
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
      *(_QWORD *)&v53[7] = PoolWithQuota_5;
      v56 = PoolWithQuota_5;
      memmove(PoolWithQuota_5, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_5 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_5(PagedPool, v21);
        *(_QWORD *)&v53[7] = PoolWithQuota_5;
      }
      else
      {
        PoolWithQuota_5 = *(unsigned int **)&v53[7];
      }
    }
    if ( StartSid )
    {
      Sid = (char *)PoolWithQuota_5 + ((v22 + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v21);
      *((_BYTE *)Sid + 1) = v53[1];
    }
    v11 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v26 = v56;
      if ( SidListLength )
        v26 = (unsigned int *)SidList;
      v56 = v26;
    }
    v27 = Sid;
    v18 = StartSid;
    if ( StartSid )
      v27 = StartSid;
    Sid = v27;
    PoolWithQuota_5 = *(unsigned int **)&v53[7];
  }
  if ( v56 )
  {
    v58 = 0LL;
    v28 = IopCheckGetQuotaBufferValidity(v56, v22, &v58);
    if ( v28 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v58;
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
    v34 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v53[2] = 0;
    if ( _InterlockedExchange(v33 + 29, 1) )
    {
      v29 = (struct _DMA_ADAPTER *)Object;
      v38 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v53[0], v31, v34, &v53[2]);
    }
    else
    {
      if ( v34 )
        *(_BYTE *)(v34 + 26) |= 1u;
      v29 = (struct _DMA_ADAPTER *)Object;
      ObfReferenceObject(Object);
      v38 = 0;
    }
    if ( v53[2] )
    {
      if ( *(_QWORD *)&v53[7] )
        ExFreePoolWithTag(*(PVOID *)&v53[7], 0);
LABEL_68:
      HalPutDmaAdapter(v29);
      return v38;
    }
    v52 = 1;
    v22 = SidListLength;
    PoolWithQuota_5 = *(unsigned int **)&v53[7];
  }
  else
  {
    Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
    P = Pool_3;
    if ( !Pool_3 )
    {
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      v38 = -1073741670;
      goto LABEL_68;
    }
    KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
    v52 = 0;
  }
  IopResetEvent((__int64)v29, v35, v36, v37);
  DeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v29);
  v40 = (IRP *)IopAllocateIrpExReturn();
  Irp = v40;
  v58 = v40;
  if ( !v40 )
  {
    if ( (*v30 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup(v29, 0LL);
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741670;
  }
  v40->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v29;
  v40->Tail.Overlay.Thread = v60;
  v40->RequestorMode = v53[0];
  if ( v52 )
  {
    v42 = IoStatusBlock;
    v43 = 0LL;
  }
  else
  {
    v40->Flags = 4;
    v42 = (PIO_STATUS_BLOCK)v61;
    v43 = (struct _KEVENT *)P;
  }
  Irp->UserEvent = v43;
  Irp->UserIosb = v42;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v29;
  Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v56;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v45 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v47 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v47;
      if ( !IopDisableBufferedIoInit )
        memset(v47, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v48 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2((__int64)Mdl, v53[0], v50, (__int64)v45, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_90;
  }
  Irp->UserBuffer = Buffer;
  v48 = Length;
LABEL_90:
  CurrentStackLocation[-1].Parameters.Read.Length = v48;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v51 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v51 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v51 |= 2u;
    CurrentStackLocation[-1].Flags = v51;
  }
  if ( v18 )
    CurrentStackLocation[-1].Flags = v51 | 4;
  result = IopSynchronousServiceTail(v45, Irp, (__int64)v29, 0LL, v53[0], v52, 2u);
  if ( !v52 )
    return IopSynchronousApiServiceTail(result, P, Irp, v53[0], v61, IoStatusBlock);
  return result;
}
