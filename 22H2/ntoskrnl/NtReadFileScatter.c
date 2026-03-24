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

__int64 __fastcall NtReadFileScatter(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        union _FILE_SEGMENT_ELEMENT *Src,
        ULONG Length,
        __int64 a8,
        ULONG *a9)
{
  void *v9; // rsi
  ULONG *v10; // r13
  KPROCESSOR_MODE PreviousMode; // di
  __int64 result; // rax
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
  __int64 v25; // r15
  int SectorSize; // ecx
  unsigned __int64 v27; // rcx
  __int16 v28; // ax
  bool v29; // cl
  __int64 v30; // rbx
  union _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rdi
  NTSTATUS v32; // esi
  struct _DMA_ADAPTER *v33; // r14
  int v34; // esi
  bool v35; // si
  struct _KTHREAD *v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // edi
  char v42; // r12
  IRP *Irp; // rax
  IRP *v44; // rsi
  __int64 v45; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  ULONG v47; // r14d
  struct _MDL *Mdl; // rax
  union _FILE_SEGMENT_ELEMENT *v49; // r14
  unsigned int v50; // r8d
  _DWORD *v51; // r9
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v53[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LARGE_INTEGER v55; // [rsp+58h] [rbp-80h]
  ULONG v56; // [rsp+60h] [rbp-78h]
  int v57; // [rsp+64h] [rbp-74h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+68h] [rbp-70h]
  PVOID Object; // [rsp+70h] [rbp-68h] BYREF
  int v60; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  _DWORD *v63; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v64; // [rsp+98h] [rbp-40h]
  __int64 v66; // [rsp+F0h] [rbp+18h] BYREF
  void *v67; // [rsp+F8h] [rbp+20h]

  v67 = a4;
  v66 = a3;
  v9 = a2;
  v10 = a9;
  *(_QWORD *)&v53[7] = 0LL;
  P = 0LL;
  DmaAdapter = 0LL;
  v56 = 0;
  v55.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&v53[7], 0LL);
  if ( (int)result < 0 )
    return result;
  v13 = *(_QWORD *)&v53[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v53[7]);
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
    return 3221225485LL;
  }
  v21 = (Length >> 12) + ((Length & 0xFFF) != 0);
  if ( PreviousMode )
  {
    v57 = 0;
    v22 = a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v66, *(_BYTE *)(v13 + 80) & 2);
    v24 = *(struct _DMA_ADAPTER **)&v53[7];
    if ( *(_QWORD *)(*(_QWORD *)&v53[7] + 176LL) && (v66 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      HalPutDmaAdapter(*(PADAPTER_OBJECT *)&v53[7]);
      return 3221225485LL;
    }
    v25 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = *(struct _DMA_ADAPTER **)&v53[7];
      v55 = *(LARGE_INTEGER *)a8;
    }
    v17 = (_DWORD *)Length;
    if ( (*(_DWORD *)(v13 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v16 = v18->SectorSize, ((SectorSize - 1) & Length) != 0)
        && (i = Length % (unsigned int)v16) != 0
        || a8 && (_WORD)SectorSize && ((SectorSize - 1) & v55.LowPart) != 0 )
      {
        HalPutDmaAdapter(v24);
        return 3221225485LL;
      }
    }
    v64 = KeGetCurrentThread();
    v27 = v64->ApcState.Process[1].AffinityPadding[10];
    v29 = 0;
    if ( v27 )
    {
      v28 = *(_WORD *)(v27 + 8);
      if ( v28 == 332 || v28 == 452 )
        v29 = 1;
    }
    v53[1] = v29;
    v30 = v21;
    if ( v30 * 8 )
    {
      if ( v29 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v30] > 0x7FFFFFFF0000LL || &Src[v30] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v21);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, Src, 8LL * v21);
      Src = PoolWithQuota_1;
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v60 = i;
        if ( (unsigned int)i >= v21 )
          break;
        if ( ((__int64)Src[i].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(0xC000000D);
      }
    }
    else
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    if ( v10 )
    {
      if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
        v23 = (__int64)v10;
      v56 = *(_DWORD *)v23;
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    v13 = *(_QWORD *)&v53[7];
    v9 = a2;
  }
  else
  {
    v25 = a8;
    if ( a8 )
      v55 = *(LARGE_INTEGER *)a8;
    PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
    if ( v10 )
      v56 = *v10;
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
      return (unsigned int)v32;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v33 = DmaAdapter;
  }
  v63 = (_DWORD *)(v13 + 80);
  v34 = *(_DWORD *)(v13 + 80);
  if ( (v34 & 2) != 0 )
  {
    v35 = (*(_DWORD *)(v13 + 80) & 4) != 0;
    v36 = KeGetCurrentThread();
    --v36->KernelApcDisable;
    v37 = *(_QWORD *)&v53[7];
    v38 = KeAbPreAcquire(*(_QWORD *)&v53[7] + 128LL, 0LL, 0LL);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v37 + 116), 1) )
    {
      LOBYTE(v40) = v35;
      LOBYTE(v39) = AccessMode;
      v13 = *(_QWORD *)&v53[7];
      v41 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v53[7], v39, v40, v38, v53);
    }
    else
    {
      if ( v38 )
        *(_BYTE *)(v38 + 26) |= 1u;
      v13 = *(_QWORD *)&v53[7];
      ObfReferenceObject(*(PVOID *)&v53[7]);
      v41 = 0;
    }
    if ( v53[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v13);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v41;
    }
    if ( !v25 || v55.QuadPart == -2 )
      v55 = *(LARGE_INTEGER *)(v13 + 104);
    v42 = 1;
    PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)P;
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
    v42 = 0;
  }
  if ( v55.HighPart < 0 )
  {
    if ( v33 )
      HalPutDmaAdapter(v33);
    if ( v42 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v13);
LABEL_86:
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225485LL;
  }
  IopResetEvent(v13, i, v16, v17);
  Irp = (IRP *)IopAllocateIrpExReturn();
  v44 = Irp;
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
    v45 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v66;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v67;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v13;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    v47 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      v49 = Src;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoWriteAccess);
      v44->UserBuffer = v49->Buffer;
      v47 = Length;
    }
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    v44->Flags |= (*v63 & 8 | 0x4800u) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = v47;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = v55;
    if ( IopCheckFileObjectExtensionFlag(v13, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v45 + 8);
    LOBYTE(v51) = 1;
    return IopSynchronousServiceTail(DeviceObject, v44, v13, v51, AccessMode, v42, v50);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, v33);
    if ( PoolWithQuota_1 )
      ExFreePoolWithTag(PoolWithQuota_1, 0);
    return 3221225626LL;
  }
}
