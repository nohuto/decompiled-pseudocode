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

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v13; // rcx
  ULONG v14; // r12d
  NTSTATUS result; // eax
  char v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *v19; // r9
  struct _DMA_ADAPTER *v20; // rdi
  NTSTATUS v21; // ebx
  char v22; // si
  struct _KTHREAD *v23; // rax
  volatile __int32 *v24; // rbx
  __int64 v25; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rcx
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v34; // r8
  char v35; // al
  __int64 v36; // [rsp+40h] [rbp-58h] BYREF
  PVOID v37; // [rsp+48h] [rbp-50h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  PIO_APC_ROUTINE v41; // [rsp+B0h] [rbp+18h] BYREF
  PVOID v42; // [rsp+B8h] [rbp+20h]

  v42 = ApcContext;
  v41 = ApcRoutine;
  v37 = 0LL;
  DmaAdapter = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v13 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v14 = Length;
  }
  v16 = 1;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, &v37, 0LL);
  if ( result >= 0 )
  {
    v20 = (struct _DMA_ADAPTER *)v37;
    if ( *((_QWORD *)v37 + 22) && ((unsigned __int64)v41 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v21 = -1073741811;
LABEL_26:
      HalPutDmaAdapter(v20);
      return v21;
    }
    if ( Event )
    {
      Object = 0LL;
      v21 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
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
      v24 = (volatile __int32 *)v37;
      v25 = KeAbPreAcquire((ULONG_PTR)v37 + 128, 0LL, 0);
      LOBYTE(v36) = 0;
      if ( _InterlockedExchange(v24 + 29, 1) )
      {
        v20 = (struct _DMA_ADAPTER *)v37;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)v37, PreviousMode, v22, v25, &v36);
      }
      else
      {
        if ( v25 )
          *(_BYTE *)(v25 + 26) |= 1u;
        v20 = (struct _DMA_ADAPTER *)v37;
        ObfReferenceObject(v37);
        v21 = 0;
      }
      if ( (_BYTE)v36 )
      {
        if ( DmaAdapter )
          HalPutDmaAdapter(DmaAdapter);
        goto LABEL_26;
      }
      LOBYTE(v36) = 1;
    }
    else
    {
      v16 = 0;
      LOBYTE(v36) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v41, 0);
    }
    IopResetEvent((__int64)v20, v17, v18, v19);
    RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)v20);
    Irp = IopAllocateIrpExReturn();
    v28 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v20, DmaAdapter);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v20;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = DmaAdapter;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v41;
    *(_QWORD *)(Irp + 96) = v42;
    v29 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v29 - 72) = 12;
    v30 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v29 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v29 - 24) = v20;
    if ( !v14 )
      goto LABEL_41;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v30, v14);
      v28->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v14);
      v28->Flags = 112;
      v16 = v36;
      LODWORD(v30) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v14, 0, 1u, v28);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(
        (__int64)Mdl,
        PreviousMode,
        v34,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v29 - 72));
      LODWORD(v30) = DirectoryNotifyInformationClass;
      goto LABEL_41;
    }
    v28->UserBuffer = Buffer;
LABEL_41:
    *(_DWORD *)(v29 - 64) = v14;
    *(_DWORD *)(v29 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v29 - 71) == 3 )
      *(_DWORD *)(v29 - 48) = v30;
    *(_BYTE *)(v29 - 70) = 0;
    v35 = *(_BYTE *)(v29 - 70);
    if ( WatchTree )
      v35 = 1;
    *(_BYTE *)(v29 - 70) = v35;
    return IopSynchronousServiceTail(RelatedDeviceObject, v28, (__int64)v20, 0LL, PreviousMode, v16, 2u);
  }
  return result;
}
