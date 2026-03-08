/*
 * XREFs of NtReadFileScatter @ 0x140798190
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     IopReferenceFileObject @ 0x14023EBCC (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14023EE94 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopExceptionFilter @ 0x1405530E8 (IopExceptionFilter.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
  __int64 v9; // r12
  int v10; // r13d
  struct _KEVENT *v11; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 result; // rax
  struct _FILE_OBJECT *v14; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  PDEVICE_OBJECT v18; // r14
  unsigned __int64 DeviceType; // rcx
  ULONG v20; // edi
  __int64 v21; // r13
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rbx
  int SectorSize; // ecx
  _KPROCESS *Process; // rcx
  char v27; // cl
  __int64 v28; // rbx
  union _FILE_SEGMENT_ELEMENT *Pool2; // rdi
  __int16 v30; // ax
  bool v31; // zf
  char v32; // al
  NTSTATUS v33; // esi
  ULONG *p_Flags; // r14
  ULONG Flags; // esi
  char v36; // r12
  IRP *Irp; // rax
  __int64 v38; // r9
  IRP *v39; // rsi
  __int64 v40; // r13
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _MDL *Mdl; // rax
  union _FILE_SEGMENT_ELEMENT *v43; // r14
  _DWORD *FileObjectExtension; // rax
  char v45; // si
  struct _KTHREAD *v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  unsigned int v49; // edi
  int Object; // [rsp+20h] [rbp-B8h]
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-98h]
  _BYTE v53[15]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+50h] [rbp-88h]
  LARGE_INTEGER CurrentByteOffset; // [rsp+58h] [rbp-80h]
  ULONG v56; // [rsp+60h] [rbp-78h]
  int v57; // [rsp+64h] [rbp-74h]
  PVOID v58; // [rsp+68h] [rbp-70h] BYREF
  int v59; // [rsp+70h] [rbp-68h]
  PVOID v60; // [rsp+78h] [rbp-60h]
  PDEVICE_OBJECT v61; // [rsp+80h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+88h] [rbp-50h]
  ULONG *v63; // [rsp+90h] [rbp-48h]
  struct _KTHREAD *v64; // [rsp+98h] [rbp-40h]
  __int64 v66; // [rsp+F0h] [rbp+18h] BYREF
  void *v67; // [rsp+F8h] [rbp+20h]

  v67 = a4;
  v66 = a3;
  v9 = a8;
  v10 = 0;
  *(_QWORD *)&v53[7] = 0LL;
  P = 0LL;
  v11 = 0LL;
  v60 = 0LL;
  v56 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&v53[7], 0LL);
  if ( (int)result < 0 )
    return result;
  v14 = *(struct _FILE_OBJECT **)&v53[7];
  RelatedDeviceObject = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v53[7]);
  v18 = RelatedDeviceObject;
  v61 = RelatedDeviceObject;
  if ( (v14->Flags & 0xA) != 8
    || (RelatedDeviceObject->Flags & 4) != 0
    || ((DeviceType = RelatedDeviceObject->DeviceType, (unsigned int)DeviceType > 0x36)
     || (v16 = 0x40000100100348LL, !_bittest64(&v16, DeviceType)))
    && (_DWORD)DeviceType != 83 )
  {
    ObfDereferenceObject(v14);
    return 3221225485LL;
  }
  v20 = Length;
  LOBYTE(v10) = (Length & 0xFFF) != 0;
  v21 = (Length >> 12) + v10;
  if ( PreviousMode )
  {
    v57 = 0;
    v22 = a5;
    v23 = 0x7FFFFFFF0000LL;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    v24 = *(_QWORD *)&v53[7];
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v66, *(_BYTE *)(*(_QWORD *)&v53[7] + 80LL) & 2);
    if ( *(_QWORD *)(v24 + 176) && (v66 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      goto LABEL_42;
    if ( v9 )
    {
      if ( (v9 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)v9;
      v24 = *(_QWORD *)&v53[7];
    }
    if ( (*(_DWORD *)(v24 + 80) & 8) != 0 )
    {
      if ( (SectorSize = v18->SectorSize, (_WORD)SectorSize)
        && (v17 = v18->SectorSize, ((SectorSize - 1) & v20) != 0)
        && (v16 = v20 % (unsigned int)v17) != 0
        || v9 && (_WORD)SectorSize && ((SectorSize - 1) & CurrentByteOffset.LowPart) != 0 )
      {
LABEL_42:
        ObfDereferenceObject((PVOID)v24);
        return 3221225485LL;
      }
    }
    v64 = KeGetCurrentThread();
    Process = v64->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_24;
    v30 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v30 == 332 || (v31 = v30 == 452, v32 = 0, v31) )
      v32 = 1;
    v53[1] = v32;
    v27 = 1;
    if ( !v32 )
LABEL_24:
      v27 = 0;
    v53[2] = v27;
    v28 = v21;
    if ( 8 * v21 )
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
    if ( v20 )
    {
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)ExAllocatePool2(289LL, 8 * v21, 1095987017LL);
      P = Pool2;
      memmove(Pool2, Src, 8 * v21);
      Src = Pool2;
      v16 = 0LL;
      v59 = 0;
      while ( (unsigned int)v16 < (unsigned int)v21 )
      {
        if ( ((__int64)Src[(unsigned int)v16].Buffer & 0xFFFLL) != 0 )
          RtlRaiseStatus(-1073741811);
        v16 = (unsigned int)(v16 + 1);
        v59 = v16;
      }
    }
    else
    {
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    if ( a9 )
    {
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v23 = (__int64)a9;
      v56 = *(_DWORD *)v23;
      Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    }
    v14 = *(struct _FILE_OBJECT **)&v53[7];
    PreviousMode = AccessMode;
  }
  else
  {
    if ( v9 )
      CurrentByteOffset = *(LARGE_INTEGER *)v9;
    Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
    if ( a9 )
      v56 = *a9;
  }
  if ( a2 )
  {
    v58 = 0LL;
    v33 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v58, 0LL);
    v11 = (struct _KEVENT *)v58;
    v60 = v58;
    if ( v33 < 0 )
    {
      ObfDereferenceObject(v14);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v33;
    }
    KeResetEvent((PRKEVENT)v58);
  }
  p_Flags = &v14->Flags;
  v63 = &v14->Flags;
  Flags = v14->Flags;
  if ( (Flags & 2) != 0 )
  {
    v45 = (v14->Flags & 4) != 0;
    v46 = KeGetCurrentThread();
    --v46->KernelApcDisable;
    v47 = *(_QWORD *)&v53[7];
    v48 = KeAbPreAcquire(*(_QWORD *)&v53[7] + 128LL, 0LL);
    v53[0] = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v47 + 116), 1) )
    {
      v14 = *(struct _FILE_OBJECT **)&v53[7];
      v49 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v53[7], AccessMode, v45, v48, v53);
    }
    else
    {
      if ( v48 )
        *(_BYTE *)(v48 + 18) = 1;
      v14 = *(struct _FILE_OBJECT **)&v53[7];
      ObfReferenceObject(*(PVOID *)&v53[7]);
      v49 = 0;
    }
    if ( v53[0] )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
      ObfDereferenceObject(v14);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return v49;
    }
    if ( !v9 || CurrentByteOffset.QuadPart == -2 )
      CurrentByteOffset = v14->CurrentByteOffset;
    v36 = 1;
    Pool2 = (union _FILE_SEGMENT_ELEMENT *)P;
  }
  else
  {
    if ( !v9 && (Flags & 0x280) == 0 )
    {
      if ( v11 )
        ObfDereferenceObject(v11);
LABEL_107:
      ObfDereferenceObject(v14);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return 3221225485LL;
    }
    v36 = 0;
  }
  if ( CurrentByteOffset.HighPart < 0 )
  {
    if ( v11 )
      ObfDereferenceObject(v11);
    if ( v36 )
      IopReleaseFileObjectLock((volatile __int32 *)&v14->Type);
    goto LABEL_107;
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v14->Event);
  LOBYTE(v17) = v36 ^ 1;
  LOBYTE(v16) = v61->StackSize;
  Irp = (IRP *)IopAllocateIrpExReturn((__int64)v61, v16, v17);
  v39 = Irp;
  v58 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = v14;
    Irp->Tail.Overlay.Thread = CurrentThread;
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    Irp->RequestorMode = AccessMode;
    Irp->PendingReturned = 0;
    Irp->Cancel = 0;
    Irp->CancelRoutine = 0LL;
    Irp->UserEvent = v11;
    v40 = a5;
    Irp->UserIosb = (PIO_STATUS_BLOCK)a5;
    Irp->Overlay.AllocationSize.QuadPart = v66;
    Irp->Overlay.AsynchronousParameters.UserApcContext = v67;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
    CurrentStackLocation[-1].FileObject = v14;
    Irp->AssociatedIrp.MasterIrp = 0LL;
    Irp->MdlAddress = 0LL;
    Irp->Flags = 0;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Src->Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      v43 = Src;
      MmProbeAndLockSelectedPages(Mdl, Src, AccessMode, IoWriteAccess);
      v39->UserBuffer = v43->Buffer;
      p_Flags = v63;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v39->Flags |= (*p_Flags & 8 | 0x4800) >> 3;
    CurrentStackLocation[-1].Parameters.Read.Length = Length;
    CurrentStackLocation[-1].Parameters.Create.Options = v56;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
    FileObjectExtension = v14->FileObjectExtension;
    if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
      CurrentStackLocation[-1].Parameters.Read.Flags = *(_DWORD *)(v40 + 8);
    LOBYTE(HandleInformation) = v36;
    LOBYTE(Object) = AccessMode;
    LOBYTE(v38) = 1;
    return IopSynchronousServiceTail(v61, v39, v14, v38, Object, HandleInformation, 0);
  }
  else
  {
    IopAllocateIrpCleanup(v14, v11);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
}
