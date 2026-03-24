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

__int64 __fastcall NtSetEaFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  bool v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // r9
  unsigned int v23; // ebx
  struct _KEVENT *Pool_3; // rax
  IRP *v25; // rax
  IRP *Irp; // rsi
  char v27; // di
  struct _KEVENT *v28; // rax
  struct _KTHREAD *v29; // rbx
  ULONG Flags; // eax
  ULONG v31; // r13d
  struct _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  NTSTATUS v33; // eax
  PMDL Mdl; // rcx
  char v35; // bl
  char v36[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-50h]
  PIRP v42; // [rsp+70h] [rbp-48h]
  unsigned int v43[6]; // [rsp+78h] [rbp-40h] BYREF

  v5 = (struct _IO_STATUS_BLOCK *)a2;
  Object = 0LL;
  v7 = 0LL;
  P = 0LL;
  *(_OWORD *)v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v36[1] = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)a3 + a4;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 0x10u, PreviousMode, &Object, 0LL);
  *(_DWORD *)&v36[4] = result;
  if ( (int)result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0LL);
      v36[0] = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        LOBYTE(v19) = v14;
        LOBYTE(v18) = PreviousMode;
        v12 = (struct _FILE_OBJECT *)Object;
        v23 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v18, v19, v17, v36);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v23 = 0;
      }
      *(_DWORD *)&v36[4] = v23;
      if ( !v36[0] )
      {
        v36[0] = 1;
        v5 = (struct _IO_STATUS_BLOCK *)a2;
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
        v36[0] = 0;
LABEL_22:
        IopResetEvent((__int64)v12, v20, v21, v22);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v25 = (IRP *)IopAllocateIrpExReturn();
        Irp = v25;
        v42 = v25;
        if ( v25 )
        {
          v25->Tail.Overlay.OriginalFileObject = v12;
          v25->Tail.Overlay.Thread = CurrentThread;
          v27 = v36[1];
          v25->RequestorMode = v36[1];
          if ( v36[0] )
          {
            v28 = 0LL;
          }
          else
          {
            v25->Flags = 4;
            v5 = (struct _IO_STATUS_BLOCK *)v43;
            v28 = v7;
          }
          Irp->UserEvent = v28;
          Irp->UserIosb = v5;
          Irp->Overlay.AllocationSize.QuadPart = 0LL;
          v29 = (struct _KTHREAD *)&Irp->Tail.Overlay.CurrentStackLocation[-1];
          CurrentThread = v29;
          v29->Header.Type = 8;
          v29->StackLimit = v12;
          Flags = DeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            ErrorOffset = 0;
            v31 = a4;
            if ( a4 )
            {
              v36[2] = 0;
              PoolWithQuota = (struct _FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(0LL, a4);
              Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
              memmove(PoolWithQuota, a3, a4);
              v33 = IoCheckEaBufferValidity(PoolWithQuota, a4, &ErrorOffset);
              *(_DWORD *)&v36[4] = v33;
              if ( v33 < 0 )
              {
                v36[2] = 1;
                *(_DWORD *)a2 = v33;
                *(_QWORD *)(a2 + 8) = ErrorOffset;
                RtlRaiseStatus(v33);
              }
              Irp->Flags |= 0x30u;
              v27 = v36[1];
              v29 = CurrentThread;
            }
            else
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
            }
          }
          else
          {
            v31 = a4;
            if ( (Flags & 0x10) != 0 )
            {
              if ( a4 )
              {
                Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
                if ( !Mdl )
                  RtlRaiseStatus(0xC000009A);
                IopProbeAndLockPages_3((__int64)Mdl, v27, 0, (__int64)DeviceObject, v29->Header.Type);
              }
            }
            else
            {
              Irp->UserBuffer = a3;
            }
          }
          LODWORD(v29->Header.WaitListHead.Flink) = v31;
          v35 = v36[0];
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0LL, v27, v36[0], 2u);
          if ( !v35 )
            return IopSynchronousApiServiceTail(result, v7, Irp, v27, v43, (_OWORD *)a2);
        }
        else
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v12, 0LL);
          return 3221225626LL;
        }
        return result;
      }
      v23 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    return v23;
  }
  return result;
}
