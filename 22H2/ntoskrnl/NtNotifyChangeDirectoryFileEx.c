/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x140691690
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x140691630 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402D2650 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x14050875C (IopProbeAndLockPages_2.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFileEx(
        void *a1,
        HANDLE Handle,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        unsigned int a10)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  ULONG v14; // r12d
  __int64 result; // rax
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  struct _DMA_ADAPTER *v20; // rdi
  int v21; // ebx
  bool v22; // si
  struct _KTHREAD *v23; // rax
  volatile __int32 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v30; // rbx
  __int64 v31; // rsi
  __int64 v32; // rcx
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v36; // r8
  char v37; // al
  __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  PVOID v39; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 v43; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  v43 = a3;
  v39 = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (a8 & 0xFFFFF000) != 0 || !a8 )
      return 3221225485LL;
  }
  else
  {
    v14 = Length;
  }
  v16 = 1;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, &v39, 0LL);
  if ( (int)result >= 0 )
  {
    v20 = (struct _DMA_ADAPTER *)v39;
    if ( *((_QWORD *)v39 + 22) && (v43 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v21 = -1073741811;
LABEL_26:
      HalPutDmaAdapter(v20);
      return (unsigned int)v21;
    }
    if ( Handle )
    {
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      DmaAdapter = (PADAPTER_OBJECT)Object;
      if ( v21 < 0 )
        goto LABEL_26;
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (*(_DWORD *)&v20[5].Version & 2) != 0 )
    {
      v22 = (*(_DWORD *)&v20[5].Version & 4) != 0;
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v24 = (volatile __int32 *)v39;
      v25 = KeAbPreAcquire((ULONG_PTR)v39 + 128, 0LL, 0LL);
      LOBYTE(v38) = 0;
      if ( _InterlockedExchange(v24 + 29, 1) )
      {
        LOBYTE(v27) = v22;
        LOBYTE(v26) = PreviousMode;
        v20 = (struct _DMA_ADAPTER *)v39;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v39, v26, v27, v25, &v38);
      }
      else
      {
        if ( v25 )
          *(_BYTE *)(v25 + 26) |= 1u;
        v20 = (struct _DMA_ADAPTER *)v39;
        ObfReferenceObject(v39);
        v21 = 0;
      }
      if ( (_BYTE)v38 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_26;
      }
      LOBYTE(v38) = 1;
    }
    else
    {
      v16 = 0;
      LOBYTE(v38) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v43, 0);
    }
    IopResetEvent((__int64)v20, v17, v18, v19);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
    Irp = IopAllocateIrpExReturn();
    v30 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v20, DmaAdapter);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 192) = v20;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = v43;
    *(_QWORD *)(Irp + 96) = v44;
    v31 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v31 - 72) = 12;
    v32 = a10;
    *(_BYTE *)(v31 - 71) = (a10 == 2) + 2;
    *(_QWORD *)(v31 - 24) = v20;
    if ( !v14 )
      goto LABEL_41;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v32, v14);
      v30->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v14);
      v30->Flags = 112;
      v16 = v38;
      LODWORD(v32) = a10;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v14, 0, 1u, v30);
      if ( !Mdl )
        RtlRaiseStatus(0xC000009A);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v36,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v31 - 72));
      LODWORD(v32) = a10;
      goto LABEL_41;
    }
    v30->UserBuffer = (PVOID)Address;
LABEL_41:
    *(_DWORD *)(v31 - 64) = v14;
    *(_DWORD *)(v31 - 56) = a8;
    if ( *(_BYTE *)(v31 - 71) == 3 )
      *(_DWORD *)(v31 - 48) = v32;
    *(_BYTE *)(v31 - 70) = 0;
    v37 = *(_BYTE *)(v31 - 70);
    if ( a9 )
      v37 = 1;
    *(_BYTE *)(v31 - 70) = v37;
    return IopSynchronousServiceTail(RelatedDeviceObject, v30, (__int64)v20, 0LL, PreviousMode, v16, 2u);
  }
  return result;
}
