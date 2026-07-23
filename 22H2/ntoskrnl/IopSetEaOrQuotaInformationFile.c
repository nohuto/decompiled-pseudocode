/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x1408923FC
 * Callers:
 *     NtSetQuotaInformationFile @ 0x1408962D0 (NtSetQuotaInformationFile.c)
 * Callees:
 *     IopProbeAndLockPages @ 0x1402081B0 (IopProbeAndLockPages.c)
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402D26C0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14067D3EC (IopSynchronousApiServiceTail.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x140893800 (IoCheckQuotaBufferValidity.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, ULONG a4, char a5)
{
  SIZE_T v5; // rbx
  struct _KEVENT *v9; // r12
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned int v21; // ebx
  struct _KEVENT *Pool; // rax
  IRP *v23; // rax
  IRP *Irp; // rsi
  char v25; // di
  struct _IO_STATUS_BLOCK *v26; // rax
  struct _KEVENT *v27; // rcx
  __int64 v28; // rax
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_0; // rdi
  int v31; // eax
  PMDL Mdl; // rcx
  _DWORD *v33; // r15
  char v34; // bl
  char v35; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  _DWORD *v37; // [rsp+50h] [rbp-68h]
  ULONG ErrorOffset; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v41; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  __int128 v43; // [rsp+80h] [rbp-38h] BYREF

  v5 = a4;
  Object = 0LL;
  v9 = 0LL;
  P = 0LL;
  v43 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v35 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    v37 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      a5 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v13 = (struct _FILE_OBJECT *)Object;
        v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &a5);
      }
      else
      {
        if ( v17 )
          *(_BYTE *)(v17 + 26) |= 1u;
        v13 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v21 = 0;
      }
      if ( !a5 )
      {
        a5 = 1;
        v5 = a4;
        goto LABEL_22;
      }
    }
    else
    {
      Pool = (struct _KEVENT *)IopVerifierExAllocatePool(NonPagedPoolNx, 0x18uLL);
      v9 = Pool;
      P = Pool;
      if ( Pool )
      {
        KeInitializeEvent(Pool, SynchronizationEvent, 0);
        a5 = 0;
LABEL_22:
        IopResetEvent((__int64)v13, v18, v19, v20);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        v23 = (IRP *)IopAllocateIrpExReturn();
        Irp = v23;
        v41 = v23;
        if ( !v23 )
        {
          if ( (*v37 & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((PADAPTER_OBJECT)v13, 0LL);
          return 3221225626LL;
        }
        v23->Tail.Overlay.OriginalFileObject = v13;
        v23->Tail.Overlay.Thread = CurrentThread;
        v25 = v35;
        v23->RequestorMode = v35;
        if ( a5 )
        {
          v23->AllocationFlags |= 2u;
          v26 = (struct _IO_STATUS_BLOCK *)a2;
          v27 = 0LL;
        }
        else
        {
          v23->Flags = 4;
          v26 = (struct _IO_STATUS_BLOCK *)&v43;
          v27 = v9;
        }
        Irp->UserEvent = v27;
        Irp->UserIosb = v26;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v28 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        v37 = (_DWORD *)v28;
        *(_BYTE *)v28 = 26;
        *(_QWORD *)(v28 + 48) = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          ErrorOffset = 0;
          if ( (_DWORD)v5 )
          {
            PoolWithQuota_0 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v5);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
            memmove(PoolWithQuota_0, a3, v5);
            LODWORD(v5) = a4;
            v31 = IoCheckQuotaBufferValidity(PoolWithQuota_0, a4, &ErrorOffset);
            if ( v31 < 0 )
            {
              *(_DWORD *)a2 = v31;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v31);
            }
            Irp->Flags |= 0x30u;
            v25 = v35;
            goto LABEL_39;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v33 = v37;
            IopProbeAndLockPages((__int64)Mdl, v35, 0, (__int64)DeviceObject, *(unsigned __int8 *)v37);
            goto LABEL_40;
          }
LABEL_39:
          v33 = v37;
LABEL_40:
          v33[2] = v5;
          v34 = a5;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v13, 0LL, v25, a5, 2u);
          if ( !v34 )
            return IopSynchronousApiServiceTail(result, v9, Irp, v25, (unsigned int *)&v43, (_OWORD *)a2);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_39;
      }
      v21 = -1073741670;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v13);
    return v21;
  }
  return result;
}
