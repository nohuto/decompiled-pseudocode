/*
 * XREFs of NtReadFileScatter @ 0x14067E2A0
 * Callers:
 *     <none>
 * Callees:
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402D2650 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     MmProbeAndLockSelectedPages @ 0x14030EB80 (MmProbeAndLockSelectedPages.c)
 *     IopVerifierExAllocatePoolWithQuota_1 @ 0x14030F25C (IopVerifierExAllocatePoolWithQuota_1.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopCheckFileObjectExtensionFlag @ 0x1403452C0 (IopCheckFileObjectExtensionFlag.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IopExceptionFilter @ 0x1405006E0 (IopExceptionFilter.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtReadFileScatter(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  HANDLE v9; // rsi
  PULONG v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  __int64 v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 i; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  PDEVICE_OBJECT v18; // r14
  int v19; // ecx
  unsigned __int64 DeviceType; // rcx
  ULONG v21; // r12d
  __int64 v22; // rcx
  __int64 v23; // rsi
  struct _DMA_ADAPTER *v24; // rdi
  PLARGE_INTEGER v25; // r15
  int SectorSize; // ecx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  bool v29; // cl
  __int64 v30; // rbx
  _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  int v32; // esi
  struct _DMA_ADAPTER *v33; // r14
  int v34; // esi
  char v35; // si
  struct _KTHREAD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  NTSTATUS v39; // edi
  char v40; // r12
  IRP *Irp; // rax
  IRP *v42; // rsi
  PIO_STATUS_BLOCK v43; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v45; // r14d
  struct _MDL *Mdl; // rax
  PFILE_SEGMENT_ELEMENT v47; // r14
  unsigned int v48; // r8d
  _DWORD *v49; // r9
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v51[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LONGLONG QuadPart; // [rsp+58h] [rbp-80h]
  ULONG v54; // [rsp+60h] [rbp-78h]
  int v55; // [rsp+64h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  int v58; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v61; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v62; // [rsp+98h] [rbp-40h]
  LARGE_INTEGER v64; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v65; // [rsp+F8h] [rbp+20h]

  v65 = ApcContext;
  v64.QuadPart = (LONGLONG)ApcRoutine;
  v9 = Event;
  v10 = Key;
  *(_QWORD *)&v51[7] = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  v54 = 0;
  QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&v51[7], 0LL);
  if ( result < 0 )
    return result;
  v13 = *(_QWORD *)&v51[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v51[7]);
  v18 = RelatedDeviceObject;
  DeviceObject = RelatedDeviceObject;
  v19 = *(_DWORD *)(v13 + 80);
  if ( (v19 & 8) == 0
    || (v19 & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (i = 0x40000100100348LL, !_bittest64(&i, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return -1073741811;
  }
  v21 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v55 = 0;
    v22 = (__int64)IoStatusBlock;
    v23 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v64, *(_BYTE *)(v13 + 80) & 2);
    v24 = *(struct _DMA_ADAPTER **)&v51[7];
    if ( *(_QWORD *)(*(_QWORD *)&v51[7] + 176LL) && (v64.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v51[7]);
      return -1073741811;
    }
    v25 = ByteOffset;
    if ( ByteOffset )
    {
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = *(struct _DMA_ADAPTER **)&v51[7];
      QuadPart = ByteOffset->QuadPart;
    }
    v17 = (_DWORD *)Length;
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v16 = v18->SectorSize, ((SectorSize - 1) & Length) != 0)
        && (i = Length % (unsigned int)v16) != 0
        || ByteOffset && (_WORD)SectorSize && ((SectorSize - 1) & (unsigned int)QuadPart) != 0 )
      {
        HalPutDmaAdapter(v24);
        return -1073741811;
      }
    }
    v62 = KeGetCurrentThread();
    v27 = v62->ApcState.Process[1].AffinityPadding[10];
    v29 = 0;
    if ( v27 )
    {
      v28 = *(_WORD *)(v27 + 8);
      if ( v28 == 332 || v28 == 452 )
        v29 = 1;
    }
    v51[1] = v29;
    v30 = v21;
    if ( v30 * 8 )
    {
      if ( v29 )
      {
        if ( ((unsigned __int8)SegmentArray & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)SegmentArray & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&SegmentArray[v30] > 0x7FFFFFFF0000LL || &SegmentArray[v30] < SegmentArray )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v21);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, SegmentArray, 8LL * v21);
      SegmentArray = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v58 = i;
        if ( (unsigned int)i >= v21 )
          break;
        if ( ((__int64)SegmentArray[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
      }
    }
    else
    {
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v23 = (__int64)v10;
      v54 = *(_DWORD *)v23;
      PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v51[7];
    v9 = Event;
  }
  else
  {
    v25 = ByteOffset;
    if ( ByteOffset )
      QuadPart = ByteOffset->QuadPart;
    PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    if ( v10 )
      v54 = *v10;
  }
  if ( v9 )
  {
    Object = 0LL;
    v32 = ObReferenceObjectByHandle(v9, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL);
    v33 = (struct _DMA_ADAPTER *)Object;
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v32 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( PoolWithQuota_1 )
        ExFreePoolWithTag(PoolWithQuota_1, 0);
      return v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v33 = DmaAdapter;
  }
  v61 = (_DWORD *)(v13 + 80);
  v34 = *(_DWORD *)(v13 + 80);
  if ( (v34 & 2) != 0 )
  {
    v35 = (*(_DWORD *)(v13 + 80) & 4) != 0;
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = *(_QWORD *)&v51[7];
    v38 = KeAbPreAcquire(*(_QWORD *)&v51[7] + 128LL, 0LL, 0);
    v51[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v37 + 116), 1) )
    {
      v13 = *(_QWORD *)&v51[7];
      v39 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v51[7], AccessMode, v35, v38, v51);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v13 = *(_QWORD *)&v51[7];
      ObfReferenceObject(*(PVOID *)&v51[7]);
      v39 = 0;
    }
    if ( v51[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v39;
    }
    if ( !v25 || QuadPart == -2 )
      QuadPart = *(_QWORD *)(v13 + 104);
    v40 = 1;
    PoolWithQuota_1 = (_FILE_SEGMENT_ELEMENT *)P;
    v33 = DmaAdapter;
  }
  else
  {
    if ( !v25 && (v34 & 0x280) == 0 )
    {
      if ( v33 )
        HalPutDmaAdapter(v33);
      goto LABEL_86;
    }
    v40 = 0;
  }
  if ( QuadPart < 0 )
  {
    if ( v33 )
      HalPutDmaAdapter(v33);
    if ( v40 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_86:
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741811;
  }
  IopResetEvent(v13, i, v16, v17);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v42 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)v33;
    v43 = IoStatusBlock;
    Irp->UserIosb = IoStatusBlock;
    Irp->Overlay.AllocationSize = v64;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v65;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v45 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(SegmentArray->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v47 = SegmentArray;
      MmProbeAndLockSelectedPages(Mdl, SegmentArray, AccessMode, IoWriteAccess);
      v42->UserBuffer = v47->Buffer;
      v45 = Length;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    v42->Flags |= (*v61 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v45;
    CurrentStackLocation[-1].Parameters.Create.Options = v54;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    if ( IopCheckFileObjectExtensionFlag(v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = v43->Information;
    LOBYTE(v49) = 1;
    return IopSynchronousServiceTail(DeviceObject, v42, v13, v49, AccessMode, v40, v48);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, v33);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return -1073741670;
  }
}
