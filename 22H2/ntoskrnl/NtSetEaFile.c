/*
 * XREFs of NtSetEaFile @ 0x140731000
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
 *     IopProbeAndLockPages_3 @ 0x1405087BC (IopProbeAndLockPages_3.c)
 *     IopVerifierExAllocatePool_3 @ 0x140508828 (IopVerifierExAllocatePool_3.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IoCheckEaBufferValidity @ 0x14060CF10 (IoCheckEaBufferValidity.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID Buffer, ULONG Length)
{
  PIO_STATUS_BLOCK v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rcx
  char *v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  NTSTATUS v21; // ebx
  struct _KEVENT *Pool_3; // rax
  IRP *v23; // rax
  IRP *Irp; // rsi
  char v25; // di
  struct _KEVENT *v26; // rax
  struct _KTHREAD *v27; // rbx
  ULONG Flags; // eax
  ULONG v29; // r13d
  _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  int v31; // eax
  PMDL Mdl; // rcx
  char v33; // bl
  char v34[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v40; // [rsp+70h] [rbp-48h]
  unsigned int v41[6]; // [rsp+78h] [rbp-40h] BYREF

  v5 = IoStatusBlock;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v34[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( Length )
    {
      if ( ((unsigned __int8)Buffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)Buffer + Length;
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < Buffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  *(_DWORD *)&v34[4] = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      v34[0] = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, v34);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      *(_DWORD *)&v34[4] = v21;
      if ( !v34[0] )
      {
        v34[0] = 1;
        v5 = IoStatusBlock;
        goto LABEL_22;
      }
    }
    else
    {
      Pool_3 = (struct _KEVENT *)IopVerifierExAllocatePool_3();
      v7 = Pool_3;
      P = Pool_3;
      if ( Pool_3 )
      {
        KeInitializeEvent(Pool_3, SynchronizationEvent, 0);
        v34[0] = 0;
LABEL_22:
        IopResetEvent((__int64)v12, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v23 = (IRP *)IopAllocateIrpExReturn();
        Irp = v23;
        v40 = v23;
        if ( v23 )
        {
          v23->Tail.Overlay.OriginalFileObject = v12;
          v23->Tail.Overlay.Thread = CurrentThread;
          v25 = v34[1];
          v23->RequestorMode = v34[1];
          if ( v34[0] )
          {
            v26 = 0LL;
          }
          else
          {
            v23->Flags = 4;
            v5 = (PIO_STATUS_BLOCK)v41;
            v26 = v7;
          }
          Irp->UserEvent = v26;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v27 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v27;
          v27->Header.Type = 8;
          v27->StackLimit = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v29 = Length;
            if ( Length )
            {
              v34[2] = 0;
              PoolWithQuota = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, Length);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
              memmove(PoolWithQuota, Buffer, Length);
              v31 = IoCheckEaBufferValidity(PoolWithQuota, Length, &ErrorOffset);
              *(_DWORD *)&v34[4] = v31;
              if ( v31 < 0 )
              {
                v34[2] = 1;
                IoStatusBlock->Status = v31;
                IoStatusBlock->Information = ErrorOffset;
                RtlRaiseStatus(v31);
              }
              Irp->Flags |= 0x30u;
              v25 = v34[1];
              v27 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v29 = Length;
            if ( (Flags & 0x10) != 0 )
            {
              if ( Length )
              {
                Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                IopProbeAndLockPages_3((__int64)Mdl, v25, 0, (__int64)DeviceObject, v27->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = Buffer;
            }
          }
          LODWORD(v27->Header.WaitListHead.Flink) = v29;
          v33 = v34[0];
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0LL, v25, v34[0], 2u);
          if ( !v33 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v25, v41, IoStatusBlock);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, 0LL);
          return -1073741670;
        }
        return result;
      }
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v21;
  }
  return result;
}
