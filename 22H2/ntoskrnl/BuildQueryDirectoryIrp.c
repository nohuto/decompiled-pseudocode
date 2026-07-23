/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1406C8A70
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1406C89B0 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402D2650 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x14050875C (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        unsigned __int64 a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        __int64 a8,
        char a9,
        __int128 *a10,
        __int64 a11,
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        IRP **a14,
        PADAPTER_OBJECT *a15,
        PIRP Irp)
{
  void *v16; // rdi
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v19; // edx
  __int64 v20; // rcx
  ULONG v22; // r8d
  const void *v23; // r15
  unsigned __int16 v24; // r14
  UNICODE_STRING *PoolWithQuota; // rsi
  int v26; // ebx
  PADAPTER_OBJECT v27; // rdi
  struct _DMA_ADAPTER *v28; // r14
  char v29; // r15
  struct _KTHREAD *v30; // rax
  PADAPTER_OBJECT v31; // rbx
  __int64 v32; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  IRP *v34; // rax
  __int64 v35; // rcx
  IRP *v36; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG Flags; // eax
  size_t v39; // r13
  struct _IRP *v40; // rax
  PMDL Mdl; // rcx
  __int64 v42; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h]
  PADAPTER_OBJECT v45; // [rsp+48h] [rbp-60h]
  PVOID Object; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v47; // [rsp+58h] [rbp-50h]
  __int128 v48; // [rsp+60h] [rbp-48h]
  void *v49; // [rsp+B0h] [rbp+8h]
  __int64 v51; // [rsp+C0h] [rbp+18h] BYREF
  void *v52; // [rsp+C8h] [rbp+20h]

  v52 = a4;
  v51 = a3;
  v49 = (void *)a1;
  v16 = (void *)a1;
  DmaAdapter = 0LL;
  v45 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v47 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v19 = 0;
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    if ( (_DWORD)a8 == 1 )
    {
      v19 = 72;
    }
    else if ( (_DWORD)a8 == 3 )
    {
      v19 = 96;
    }
    else
    {
      switch ( (int)a8 )
      {
        case 2:
        case 29:
          v19 = 72;
          goto LABEL_18;
        case 12:
        case 33:
          v19 = 16;
          goto LABEL_18;
        case 32:
          v19 = 56;
          goto LABEL_18;
        case 37:
          v19 = 112;
          goto LABEL_18;
        case 38:
          v19 = 88;
          goto LABEL_18;
        case 50:
        case 60:
          v19 = 96;
          goto LABEL_18;
        case 63:
          v19 = 120;
          break;
        default:
          break;
      }
      if ( !v19 )
        return 3221225475LL;
    }
LABEL_18:
    if ( (unsigned int)Length < v19 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].AffinityPadding[10] )
      v22 = 4;
    else
      v22 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)a8);
    ProbeForWrite(Address, (unsigned int)Length, v22);
  }
  if ( !a10 )
    goto LABEL_39;
  v48 = 0LL;
  if ( PreviousMode )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
      a1 = (unsigned __int64)a10;
    LODWORD(v48) = *(_DWORD *)a1;
    v23 = *(const void **)(a1 + 8);
    *((_QWORD *)&v48 + 1) = v23;
  }
  else
  {
    v48 = *a10;
    v23 = (const void *)*((_QWORD *)&v48 + 1);
  }
  if ( (v48 & 1) != 0 )
    return 3221225485LL;
  v24 = v48;
  if ( (_WORD)v48 )
  {
    if ( PreviousMode )
    {
      a1 = (unsigned __int64)v23 + (unsigned __int16)v48;
      if ( a1 > 0x7FFFFFFF0000LL || a1 < (unsigned __int64)v23 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v48 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(a1, (unsigned __int16)v48 + 16LL);
    P = PoolWithQuota;
    memmove(&PoolWithQuota[1], v23, (unsigned __int16)v48);
    PoolWithQuota->Length = v48;
    PoolWithQuota->MaximumLength = v24;
    PoolWithQuota->Buffer = &PoolWithQuota[1].Length;
    v16 = v49;
  }
  else
  {
LABEL_39:
    PoolWithQuota = (UNICODE_STRING *)P;
  }
  v26 = IopReferenceFileObject(v16, 1u, PreviousMode, (PVOID *)&DmaAdapter, 0LL);
  if ( v26 < 0 )
  {
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return (unsigned int)v26;
  }
  v27 = DmaAdapter;
  *a15 = DmaAdapter;
  if ( *(_QWORD *)&v27[11].Version && (v51 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter(v27);
    if ( PoolWithQuota )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return 3221225485LL;
  }
  if ( a2 )
  {
    Object = 0LL;
    v26 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
    v28 = (struct _DMA_ADAPTER *)Object;
    v45 = (PADAPTER_OBJECT)Object;
    if ( v26 < 0 )
    {
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_84:
      HalPutDmaAdapter(v27);
      return (unsigned int)v26;
    }
    KeResetEvent((PRKEVENT)Object);
  }
  else
  {
    v28 = v45;
  }
  Irp = (PIRP)&v27[5];
  if ( (*(_DWORD *)&v27[5].Version & 2) != 0 )
  {
    v29 = (*(_DWORD *)&v27[5].Version & 4) != 0;
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    v31 = DmaAdapter;
    v32 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    LOBYTE(a11) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&v31[7].Size + 1), 1) )
    {
      v27 = DmaAdapter;
      v26 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, PreviousMode, v29, v32, &a11);
    }
    else
    {
      if ( v32 )
        *(_BYTE *)(v32 + 26) |= 1u;
      v27 = DmaAdapter;
      ObfReferenceObject(DmaAdapter);
      v26 = 0;
    }
    if ( (_BYTE)a11 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v45 )
        HalPutDmaAdapter(v45);
      goto LABEL_84;
    }
    *a12 = 1;
    v28 = v45;
    PoolWithQuota = (UNICODE_STRING *)P;
  }
  else
  {
    *a12 = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v51, 0);
  }
  if ( (*(_DWORD *)&Irp->Type & 0x4000000) == 0 )
    KeResetEvent((PRKEVENT)&v27[9].DmaOperations);
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v27);
  *a13 = RelatedDeviceObject;
  v34 = (IRP *)IopAllocateIrpExReturn();
  v36 = v34;
  Irp = v34;
  if ( v34 )
  {
    *a14 = v34;
    v34->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v27;
    v34->Tail.Overlay.Thread = v47;
    v34->RequestorMode = PreviousMode;
    v34->UserEvent = (PKEVENT)v28;
    v34->UserIosb = (PIO_STATUS_BLOCK)a5;
    v34->Overlay.AllocationSize.QuadPart = v51;
    v34->Overlay.AsynchronousParameters.UserApcContext = v52;
    CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v27;
    v34->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota;
    v34->AssociatedIrp.MasterIrp = 0LL;
    v34->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v39 = (unsigned int)Length;
      v40 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v35, (unsigned int)Length);
      v36->AssociatedIrp.MasterIrp = v40;
      if ( !IopDisableBufferedIoInit )
        memset(v40, 0, v39);
      v36->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        LODWORD(v39) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v36);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_2(
          (__int64)Mdl,
          PreviousMode,
          v42,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_83;
      }
      LODWORD(v39) = Length;
    }
    v36->UserBuffer = (PVOID)Address;
LABEL_83:
    CurrentStackLocation[-1].Parameters.Read.Length = v39;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a8;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota;
    CurrentStackLocation[-1].Flags = a9 & 0x1B;
    v36->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v27, v28);
  if ( PoolWithQuota )
    ExFreePoolWithTag(PoolWithQuota, 0);
  return 3221225626LL;
}
