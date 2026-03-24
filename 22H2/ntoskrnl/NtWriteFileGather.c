/*
 * XREFs of NtWriteFileGather @ 0x14067EA40
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
 *     MmUpdateMdlTracker @ 0x1405311B0 (MmUpdateMdlTracker.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtWriteFileGather(
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
  ULONG *v9; // r15
  __int64 v10; // r12
  int v11; // esi
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 result; // rax
  unsigned __int8 GrantedAccess; // r13
  PFILE_OBJECT v15; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v17; // r8
  _DWORD *v18; // r9
  ULONG *p_Flags; // rbx
  __int64 Flags; // rdx
  unsigned __int64 DeviceType; // rcx
  unsigned int v22; // esi
  __int64 v23; // rcx
  __int64 v24; // r14
  unsigned __int64 v25; // rcx
  __int16 v26; // ax
  bool v27; // cl
  __int64 v28; // rdi
  union _FILE_SEGMENT_ELEMENT *PoolWithQuota_1; // rbx
  int SectorSize; // ecx
  NTSTATUS v31; // r14d
  bool v32; // r14
  struct _KTHREAD *v33; // rax
  PFILE_OBJECT v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // ebx
  KPROCESSOR_MODE v39; // r14
  char v40; // r15
  struct _DEVICE_OBJECT *v41; // r12
  IRP *Irp; // rax
  IRP *v43; // rsi
  __int64 v44; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _MDL *Mdl; // rax
  unsigned __int64 v47; // rbx
  unsigned int MajorFunction; // r12d
  __int64 v49; // rcx
  _DWORD *v50; // r9
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-B8h]
  _BYTE v52[23]; // [rsp+41h] [rbp-B7h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-A0h] BYREF
  PVOID P; // [rsp+60h] [rbp-98h]
  ULONG v55; // [rsp+68h] [rbp-90h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-88h]
  int v57; // [rsp+78h] [rbp-80h]
  ULONG *v58; // [rsp+80h] [rbp-78h]
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-70h]
  PVOID Object; // [rsp+90h] [rbp-68h] BYREF
  int v61; // [rsp+98h] [rbp-60h]
  struct _OBJECT_HANDLE_INFORMATION v62; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-50h]
  struct _KTHREAD *v64; // [rsp+B0h] [rbp-48h]
  __int64 v66; // [rsp+110h] [rbp+18h] BYREF
  void *v67; // [rsp+118h] [rbp+20h]

  v67 = a4;
  v66 = a3;
  v9 = a9;
  v10 = a8;
  v11 = 0;
  FileObject = 0LL;
  P = 0LL;
  v62 = 0LL;
  DmaAdapter = 0LL;
  v55 = 0;
  *(_QWORD *)&v52[7] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&FileObject, &v62);
  if ( (int)result < 0 )
    return result;
  GrantedAccess = v62.GrantedAccess;
  v15 = FileObject;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  p_Flags = &v15->Flags;
  v58 = &v15->Flags;
  Flags = v15->Flags;
  if ( (Flags & 8) == 0
    || (Flags & 2) != 0
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v17 = 0x40000100100348LL, !_bittest64(&v17, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    return 3221225485LL;
  }
  LOBYTE(v11) = (Length & 0xFFF) != 0;
  v22 = (Length >> 12) + v11;
  if ( PreviousMode )
  {
    if ( ((~(unsigned __int8)((unsigned int)Flags >> 5) & 4 | 2) & GrantedAccess) == 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      return 3221225506LL;
    }
    v57 = 0;
    v23 = a5;
    v24 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v66, *(_BYTE *)p_Flags & 2);
    v64 = KeGetCurrentThread();
    v25 = v64->ApcState.Process[1].AffinityPadding[10];
    v27 = 0;
    if ( v25 )
    {
      v26 = *(_WORD *)(v25 + 8);
      if ( v26 == 332 || v26 == 452 )
        v27 = 1;
    }
    v52[15] = v27;
    v28 = v22;
    if ( v28 * 8 )
    {
      if ( v27 )
      {
        if ( ((unsigned __int8)Src & 3) != 0 )
          ExRaiseDatatypeMisalignment();
      }
      else if ( ((unsigned __int8)Src & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      if ( (unsigned __int64)&Src[v28] > 0x7FFFFFFF0000LL || &Src[v28] < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( Length )
    {
      PoolWithQuota_1 = (union _FILE_SEGMENT_ELEMENT *)IopVerifierExAllocatePoolWithQuota_1(PagedPool, 8LL * v22);
      P = PoolWithQuota_1;
      memmove(PoolWithQuota_1, Src, 8LL * v22);
      Src = PoolWithQuota_1;
      Flags = 0LL;
      v61 = 0;
      while ( (unsigned int)Flags < v22 )
      {
        if ( ((__int64)Src[(unsigned int)Flags].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(0xC000000D);
        Flags = (unsigned int)(Flags + 1);
        v61 = Flags;
      }
    }
    v15 = FileObject;
    if ( FileObject->CompletionContext && (v66 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      RtlRaiseStatus(0xC000000D);
    if ( v10 )
    {
      if ( (v10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = FileObject;
      *(_QWORD *)&v52[7] = *(_QWORD *)v10;
    }
    p_Flags = &v15->Flags;
    v58 = &v15->Flags;
    v18 = (_DWORD *)v15->Flags;
    if ( ((unsigned __int8)v18 & 8) != 0 )
    {
      SectorSize = DeviceObject->SectorSize;
      if ( (_WORD)SectorSize )
      {
        v17 = DeviceObject->SectorSize;
        if ( ((SectorSize - 1) & Length) != 0 )
        {
          Flags = Length % (unsigned int)v17;
          if ( Length % (unsigned int)v17 )
            RtlRaiseStatus(0xC000000D);
        }
      }
      if ( v10
        && *(_QWORD *)&v52[7] != -1LL
        && (*(_DWORD *)&v52[7] != -2 || *(_DWORD *)&v52[11] != -1 || ((unsigned __int8)v18 & 2) == 0)
        && (_WORD)SectorSize
        && ((SectorSize - 1) & *(_DWORD *)&v52[7]) != 0 )
      {
        RtlRaiseStatus(0xC000000D);
      }
    }
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v24 = (__int64)v9;
      v55 = *(_DWORD *)v24;
      v15 = FileObject;
    }
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v10 )
      *(_QWORD *)&v52[7] = *(_QWORD *)v10;
    if ( v9 )
      v55 = *v9;
  }
  if ( (GrantedAccess & 6) == 4 )
  {
    *(_DWORD *)&v52[7] = -1;
    *(_DWORD *)&v52[11] = -1;
  }
  if ( a2 )
  {
    Object = 0LL;
    v31 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
    if ( v31 < 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v31;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v32 = (*p_Flags & 4) != 0;
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = FileObject;
    v35 = KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0LL);
    v52[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v34->Busy, 1) )
    {
      LOBYTE(v37) = v32;
      v39 = AccessMode;
      LOBYTE(v36) = AccessMode;
      v15 = FileObject;
      v38 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, v36, v37, v35, v52);
    }
    else
    {
      if ( v35 )
        *(_BYTE *)(v35 + 26) |= 1u;
      v15 = FileObject;
      ObfReferenceObject(FileObject);
      v38 = 0;
      v39 = AccessMode;
    }
    if ( v52[0] )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      HalPutDmaAdapter((PADAPTER_OBJECT)v15);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v38;
    }
    v40 = 1;
    if ( !v10 && !*(_DWORD *)&v52[7] || *(_DWORD *)&v52[7] == -2 && *(_DWORD *)&v52[11] == -1 )
      *(_QWORD *)&v52[7] = v15->CurrentByteOffset.QuadPart;
    p_Flags = v58;
  }
  else
  {
    if ( !v10 && (*p_Flags & 0x280) == 0 )
    {
      if ( DmaAdapter )
        HalPutDmaAdapter(DmaAdapter);
      goto LABEL_94;
    }
    v40 = 0;
    v39 = AccessMode;
  }
  if ( *(int *)&v52[11] < 0 && (*(_DWORD *)&v52[11] != -1 || *(_DWORD *)&v52[7] != -1) )
  {
    if ( DmaAdapter )
      HalPutDmaAdapter(DmaAdapter);
    if ( v40 )
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v15);
LABEL_94:
    HalPutDmaAdapter((PADAPTER_OBJECT)v15);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225485LL;
  }
  IopResetEvent((__int64)v15, Flags, v17, v18);
  v41 = DeviceObject;
  Irp = (IRP *)IopAllocateIrpExReturn();
  v43 = Irp;
  Object = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v15;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = v39;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = (PKEVENT)DmaAdapter;
    v44 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v66;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v67;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 4;
    CurrentStackLocation[-1].FileObject = v15;
    if ( (*p_Flags & 0x10) != 0 )
      CurrentStackLocation[-1].Flags = 4;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      v47 = (unsigned __int64)Mdl;
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      MajorFunction = CurrentStackLocation[-1].MajorFunction;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoReadAccess);
      if ( (MmTrackLockedPages & 1) != 0 )
      {
        v49 = MajorFunction;
        v41 = DeviceObject;
        MmUpdateMdlTracker(v47, (__int64)DeviceObject->DriverObject->MajorFunction[v49], (__int64)DeviceObject);
      }
      else
      {
        v41 = DeviceObject;
      }
      v43->UserBuffer = Src->Buffer;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    v43->Flags |= (*v58 & 8 | 0x5000) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v55;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = *(_QWORD *)&v52[7];
    if ( IopCheckFileObjectExtensionFlag((__int64)v15, 16) )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v44 + 8);
    LOBYTE(v50) = 1;
    return IopSynchronousServiceTail(v41, v43, (__int64)v15, v50, AccessMode, v40, 1u);
  }
  else
  {
    IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, DmaAdapter);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
