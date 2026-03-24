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

__int64 __fastcall NtQueryEaFile(
        void *a1,
        unsigned __int64 a2,
        void *a3,
        ULONG a4,
        char a5,
        char *Src,
        size_t Size,
        ULONG *a8,
        char a9)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  __int64 v13; // rax
  char *v14; // rax
  unsigned __int8 *v15; // rdi
  int v16; // ecx
  __int64 result; // rax
  unsigned int v18; // eax
  __int64 v19; // rdx
  int v20; // ebx
  int v21; // ebx
  struct _DMA_ADAPTER *v22; // r15
  _DWORD *v23; // rsi
  bool v24; // di
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  _DWORD *v32; // r9
  char v33; // r12
  PVOID v34; // rdi
  struct _KEVENT *Pool_3; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  IRP *v37; // rax
  IRP *Irp; // rbx
  struct _IO_STATUS_BLOCK *v39; // rax
  __int64 v40; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v42; // rdi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  char v46; // di
  char v47; // al
  char v48; // [rsp+40h] [rbp-78h]
  char v49; // [rsp+41h] [rbp-77h]
  _WORD v50[7]; // [rsp+42h] [rbp-76h] BYREF
  int v51; // [rsp+50h] [rbp-68h]
  ULONG v52; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  unsigned __int8 *v55; // [rsp+68h] [rbp-50h]
  PIRP v56; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v58; // [rsp+80h] [rbp-38h] BYREF

  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v50[3] = 0LL;
  v48 = 0;
  v52 = 0;
  v58 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v49 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Src && (_DWORD)Size )
    {
      v48 = 1;
      *(_QWORD *)&v50[3] = IopVerifierExAllocatePoolWithQuota((__int64)a1, (unsigned int)Size);
      memmove(*(void **)&v50[3], Src, (unsigned int)Size);
    }
    if ( a8 )
      v52 = *a8;
LABEL_33:
    v21 = IopReferenceFileObject(a1, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v48 )
        ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
      return (unsigned int)v21;
    }
    v22 = (struct _DMA_ADAPTER *)Object;
    v23 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v24 = (*((_DWORD *)Object + 20) & 4) != 0;
      v25 = KeGetCurrentThread();
      --v25->KernelApcDisable;
      v26 = (volatile __int32 *)Object;
      v29 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
      LOBYTE(v50[0]) = 0;
      if ( _InterlockedExchange(v26 + 29, 1) )
      {
        LOBYTE(v28) = v24;
        LOBYTE(v27) = PreviousMode;
        v22 = (struct _DMA_ADAPTER *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v27, v28, v29, v50);
      }
      else
      {
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        v22 = (struct _DMA_ADAPTER *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( LOBYTE(v50[0]) )
      {
        if ( v48 )
          ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
LABEL_51:
        HalPutDmaAdapter(v22);
        return (unsigned int)v21;
      }
      v33 = 1;
      v34 = P;
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v34 = Pool_3;
      P = Pool_3;
      if ( !Pool_3 )
      {
        if ( v48 )
          ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
        v21 = -1073741670;
        goto LABEL_51;
      }
      KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
      v33 = 0;
    }
    IopResetEvent((__int64)v22, v30, v31, v32);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
    v37 = (IRP *)IopAllocateIrpExReturn();
    Irp = v37;
    v56 = v37;
    if ( !v37 )
    {
      if ( (*v23 & 2) == 0 )
        ExFreePoolWithTag(v34, 0);
      IopAllocateIrpCleanup(v22, 0LL);
      if ( v48 )
        ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
      return 3221225626LL;
    }
    v37->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v37->Tail.Overlay.Thread = CurrentThread;
    v37->RequestorMode = v49;
    if ( v33 )
    {
      v39 = (struct _IO_STATUS_BLOCK *)a2;
      v40 = 0LL;
    }
    else
    {
      v37->Flags = 4;
      v39 = (struct _IO_STATUS_BLOCK *)&v58;
      v40 = (__int64)v34;
    }
    Irp->UserEvent = (PKEVENT)v40;
    Irp->UserIosb = v39;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
    if ( v48 )
    {
      v42 = *(UNICODE_STRING **)&v50[3];
      Irp->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v50[3];
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v42;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Size;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( a4 )
      {
        PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v40, a4);
        Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
        if ( !IopDisableBufferedIoInit )
          memset(PoolWithQuota, 0, a4);
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
        Irp->UserBuffer = a3;
        goto LABEL_75;
      }
      if ( a4 )
      {
        Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(0xC000009A);
        v46 = v49;
        IopProbeAndLockPages_3(
          (__int64)Mdl,
          v49,
          1,
          (__int64)RelatedDeviceObject,
          CurrentStackLocation[-1].MajorFunction);
        goto LABEL_76;
      }
    }
LABEL_75:
    v46 = v49;
LABEL_76:
    CurrentStackLocation[-1].Parameters.Read.Length = a4;
    CurrentStackLocation[-1].Parameters.Create.EaLength = v52;
    CurrentStackLocation[-1].Flags = 0;
    v47 = 0;
    if ( a9 )
    {
      CurrentStackLocation[-1].Flags = 1;
      v47 = 1;
    }
    if ( a5 )
    {
      v47 |= 2u;
      CurrentStackLocation[-1].Flags = v47;
    }
    if ( a8 )
      CurrentStackLocation[-1].Flags = v47 | 4;
    result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0LL, v46, v33, 2u);
    if ( !v33 )
      return IopSynchronousApiServiceTail(result, P, Irp, v46, (unsigned int *)&v58, (_OWORD *)a2);
    return result;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v12 = a2;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(a3, a4, 4u);
  if ( a8 )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a8;
    v52 = *(_DWORD *)v13;
  }
  if ( !Src || !(_DWORD)Size )
    goto LABEL_33;
  v55 = 0LL;
  v51 = 0;
  v48 = 1;
  if ( ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = &Src[(unsigned int)Size];
  if ( (unsigned __int64)v14 > 0x7FFFFFFF0000LL || v14 < Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota(0x7FFFFFFF0000LL, (unsigned int)Size);
  *(_QWORD *)&v50[3] = v15;
  memmove(v15, Src, (unsigned int)Size);
  v55 = v15;
  v16 = Size;
  v51 = Size;
  while ( 1 )
  {
    if ( v16 < 5 )
    {
      v51 = 0;
      ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
      *(_QWORD *)&v50[3] = 0LL;
      *(_DWORD *)a2 = -2147483628;
      *(_QWORD *)(a2 + 8) = 0LL;
      return 2147483668LL;
    }
    v18 = v15[4] + 6;
    if ( v16 < v18 )
      break;
    v19 = *(unsigned int *)v15;
    if ( !(_DWORD)v19 )
    {
      v51 = v16 - v18;
      if ( (int)(v16 - v18) >= 0 )
        goto LABEL_33;
      break;
    }
    if ( ((v15[4] + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v16 -= v19;
    v51 = v16;
    if ( v16 < 0 )
      break;
    v15 += v19;
    v55 = v15;
  }
  v20 = (_DWORD)v15 - *(_DWORD *)&v50[3];
  v51 = (_DWORD)v15 - *(_DWORD *)&v50[3];
  ExFreePoolWithTag(*(PVOID *)&v50[3], 0);
  *(_QWORD *)&v50[3] = 0LL;
  *(_DWORD *)a2 = -2147483628;
  *(_QWORD *)(a2 + 8) = v20;
  return 2147483668LL;
}
