/*
 * XREFs of NtQueryEaFile @ 0x14067F740
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
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopProbeAndLockPages_3 @ 0x1405087BC (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x140508828 (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  unsigned __int8 *v15; // rdi
  signed int v16; // ecx
  NTSTATUS result; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  NTSTATUS v21; // ebx
  struct _DMA_ADAPTER *v22; // r15
  _DWORD *v23; // rsi
  char v24; // di
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  char v31; // r12
  PVOID v32; // rdi
  struct _KEVENT *Pool_3; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  IRP *v35; // rax
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v37; // rax
  __int64 v38; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v40; // rdi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  char v44; // di
  char v45; // al
  char v46; // [rsp+40h] [rbp-78h]
  char v47; // [rsp+41h] [rbp-77h]
  _WORD v48[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v49; // [rsp+50h] [rbp-68h]
  ULONG v50; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v53; // [rsp+68h] [rbp-50h]
  PIRP v54; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v56; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v48[3] = 0LL;
  v46 = 0;
  v50 = 0;
  v56 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v47 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v46 = 1;
      *(_QWORD *)&v48[3] = IopVerifierExAllocatePoolWithQuota((__int64)FileHandle, EaListLength);
      memmove(*(void **)&v48[3], EaList, EaListLength);
    }
    if ( EaIndex )
      v50 = *EaIndex;
LABEL_33:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v46 )
        ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      return v21;
    }
    v22 = (struct _DMA_ADAPTER *)Object;
    v23 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v24 = (*((_DWORD *)Object + 20) & 4) != 0;
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = (volatile __int32 *)Object;
      v27 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      LOBYTE(v48[0]) = 0;
      if ( _InterlockedExchange(v26 + 29, 1) )
      {
        v22 = (struct _DMA_ADAPTER *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v24, v27, v48);
      }
      else
      {
        if ( v27 )
          *(_BYTE *)(v27 + 26) |= 1u;
        v22 = (struct _DMA_ADAPTER *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( LOBYTE(v48[0]) )
      {
        if ( v46 )
          ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
LABEL_51:
        HalPutDmaAdapter(v22);
        return v21;
      }
      v31 = 1;
      v32 = P;
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v32 = Pool_3;
      P = Pool_3;
      if ( !Pool_3 )
      {
        if ( v46 )
          ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
        v21 = -1073741670;
        goto LABEL_51;
      }
      KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
      v31 = 0;
    }
    IopResetEvent((__int64)v22, v28, v29, v30);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
    v35 = (IRP *)IopAllocateIrpExReturn();
    Irp = v35;
    v54 = v35;
    if ( !v35 )
    {
      if ( (*v23 & 2) == 0 )
        ExFreePoolWithTag(v32, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      if ( v46 )
        ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      return -1073741670;
    }
    v35->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v35->Tail.Overlay.Thread = CurrentThread;
    v35->RequestorMode = v47;
    if ( v31 )
    {
      v37 = IoStatusBlock;
      v38 = 0LL;
    }
    else
    {
      v35->Flags = 4;
      v37 = (PIO_STATUS_BLOCK)&v56;
      v38 = (__int64)v32;
    }
    Irp->UserEvent = (PKEVENT)v38;
    Irp->UserIosb = v37;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
    if ( v46 )
    {
      v40 = *(UNICODE_STRING **)&v48[3];
      Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v48[3];
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v40;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( Length )
      {
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v38, Length);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota, 0, Length);
        Irp->Flags |= 0x70u;
        goto LABEL_74;
      }
      Irp->AssociatedIrp.MasterIrp = 0LL;
      Irp->Flags |= 0x50u;
    }
    else
    {
      if ( (Flags & 0x10) == 0 )
      {
LABEL_74:
        Irp->UserBuffer = Buffer;
        goto LABEL_75;
      }
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v44 = v47;
        IopProbeAndLockPages_3(
          (__int64)Mdl,
          v47,
          1,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_76;
      }
    }
LABEL_75:
    v44 = v47;
LABEL_76:
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.EaLength = v50;
    CurrentStackLocation[-1].Flags = 0;
    v45 = 0;
    if ( RestartScan )
    {
      CurrentStackLocation[-1].Flags = 1;
      v45 = 1;
    }
    if ( ReturnSingleEntry )
    {
      v45 |= 2u;
      CurrentStackLocation[-1].Flags = v45;
    }
    if ( EaIndex )
      CurrentStackLocation[-1].Flags = v45 | 4;
    result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0LL, v44, v31, 2u);
    if ( !v31 )
      return IopSynchronousApiServiceTail(result, P, Irp, v44, (unsigned int *)&v56, IoStatusBlock);
    return result;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v13 = (__int64)EaIndex;
    v50 = *(_DWORD *)v13;
  }
  if ( !EaList || !EaListLength )
    goto LABEL_33;
  v53 = 0LL;
  v49 = 0;
  v46 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota(0x7FFFFFFF0000LL, EaListLength);
  *(_QWORD *)&v48[3] = v15;
  memmove(v15, EaList, EaListLength);
  v53 = v15;
  v16 = EaListLength;
  v49 = EaListLength;
  while ( 1 )
  {
    if ( v16 < 5 )
    {
      v49 = 0;
      ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
      *(_QWORD *)&v48[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v18 = v15[4] + 6;
    if ( v16 < v18 )
      break;
    v19 = *(unsigned int *)v15;
    if ( !(_DWORD)v19 )
    {
      v49 = v16 - v18;
      if ( (int)(v16 - v18) >= 0 )
        goto LABEL_33;
      break;
    }
    if ( ((v15[4] + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v16 -= v19;
    v49 = v16;
    if ( v16 < 0 )
      break;
    v15 += v19;
    v53 = v15;
  }
  v20 = (_DWORD)v15 - *(_DWORD *)&v48[3];
  v49 = (_DWORD)v15 - *(_DWORD *)&v48[3];
  ExFreePoolWithTag(*(PVOID *)&v48[3], 0);
  *(_QWORD *)&v48[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v20;
  return -2147483628;
}
