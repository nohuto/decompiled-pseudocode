/*
 * XREFs of NtLockFile @ 0x140655E20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x1402BBC90 (PsGetCurrentProcess.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402D2650 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopSetLockOperationProcess @ 0x1402D7EBC (IopSetLockOperationProcess.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0594 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F065C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x1405086DC (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     IoSetIoCompletion @ 0x140693B60 (IoSetIoCompletion.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     VfFastIoCheckState @ 0x1409C99C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A9C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v14; // rcx
  struct _FILE_OBJECT *v15; // rbx
  _KPROCESS *CurrentProcess; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r14
  void *v24; // rsi
  char v25; // al
  PIO_STATUS_BLOCK v26; // rcx
  int v27; // eax
  int v28; // ecx
  char v29; // si
  struct _KTHREAD *v30; // rax
  PADAPTER_OBJECT v31; // rbx
  __int64 v32; // rax
  NTSTATUS v33; // esi
  char v34; // r15
  IRP *v35; // rax
  IRP *v36; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v38; // al
  CHAR *PoolWithQuota_4; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v41; // [rsp+50h] [rbp-88h] BYREF
  char v42; // [rsp+51h] [rbp-87h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+58h] [rbp-80h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-78h]
  __int128 v45; // [rsp+68h] [rbp-70h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v47; // [rsp+80h] [rbp-58h] BYREF
  PIRP Irp; // [rsp+88h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v49; // [rsp+90h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp-40h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  LARGE_INTEGER v53; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v54; // [rsp+F8h] [rbp+20h]

  v54 = ApcContext;
  v53.QuadPart = (LONGLONG)ApcRoutine;
  DmaAdapter = 0LL;
  Eventa = 0LL;
  QuadPart = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, (PVOID *)&DmaAdapter, &v49);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v49.GrantedAccess & 3) == 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741790;
      }
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v53, DmaAdapter[5].Version & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v47 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)DmaAdapter;
      if ( *(_QWORD *)&DmaAdapter[11].Version && (v53.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v47 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)DmaAdapter;
    }
    v15->LockOperation = 1;
    CurrentProcess = PsGetCurrentProcess();
    result = IopSetLockOperationProcess((__int64)v15, (__int64)CurrentProcess, 0);
    if ( result >= 0 )
    {
      if ( Event )
      {
        Object = 0LL;
        v17 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
        Eventa = (PRKEVENT)Object;
        if ( v17 >= 0 )
          KeResetEvent((PRKEVENT)Object);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v45 = 0LL;
          if ( (MmVerifierData & 0x10) != 0 )
            v24 = (void *)VfFastIoSnapState();
          else
            v24 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v25 = FastIoLock(
                  v15,
                  &QuadPart,
                  &v47,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v45,
                  RelatedDeviceObject);
          v41 = v25;
          if ( v24 )
          {
            VfFastIoCheckState(v24);
            v25 = v41;
          }
          if ( v25 )
          {
            if ( (v53.LowPart & 1) != 0 )
            {
              v26 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v45);
              v26->Status = v45;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v45;
            }
            if ( Eventa )
            {
              if ( (v15->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
            }
            if ( v15->CompletionContext && ApcContext && (v15->Flags & 0x2000000) == 0 )
            {
              v51 = 0LL;
              Irp = 0LL;
              v42 = 0;
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, &v42, &v51, &Irp);
              if ( v51 )
              {
                v27 = IoSetIoCompletion(v51, (_DWORD)Irp, (_DWORD)ApcContext, v45, *((__int64 *)&v45 + 1), 1);
                v28 = v45;
                if ( v27 < 0 )
                  v28 = -1073741670;
                LODWORD(v45) = v28;
              }
              if ( v42 )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
            }
            HalPutDmaAdapter((PADAPTER_OBJECT)v15);
            return v45;
          }
        }
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v29 = (v15->Flags & 4) != 0;
        v30 = KeGetCurrentThread();
        --v30->KernelApcDisable;
        v31 = DmaAdapter;
        v32 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
        v41 = 0;
        if ( _InterlockedExchange((volatile __int32 *)(&v31[7].Size + 1), 1) )
        {
          v15 = (struct _FILE_OBJECT *)DmaAdapter;
          v33 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)DmaAdapter, PreviousMode, v29, v32, &v41);
        }
        else
        {
          if ( v32 )
            *(_BYTE *)(v32 + 26) |= 1u;
          v15 = (struct _FILE_OBJECT *)DmaAdapter;
          ObfReferenceObject(DmaAdapter);
          v33 = 0;
        }
        if ( v41 )
        {
          if ( Eventa )
            HalPutDmaAdapter((PADAPTER_OBJECT)Eventa);
          HalPutDmaAdapter((PADAPTER_OBJECT)v15);
          return v33;
        }
        v34 = 1;
      }
      else
      {
        v34 = 0;
      }
      IopResetEvent((__int64)v15, v18, v19, v20);
      v35 = (IRP *)IopAllocateIrpExReturn();
      v36 = v35;
      Irp = v35;
      if ( v35 )
      {
        v35->Tail.Overlay.OriginalFileObject = v15;
        v35->Tail.Overlay.Thread = CurrentThread;
        v35->RequestorMode = PreviousMode;
        v35->UserEvent = Eventa;
        v35->UserIosb = IoStatusBlock;
        v35->Overlay.AllocationSize = v53;
        v35->Overlay.AsynchronousParameters.UserApcContext = v54;
        CurrentStackLocation = v35->Tail.Overlay.CurrentStackLocation;
        *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 273;
        CurrentStackLocation[-1].FileObject = v15;
        CurrentStackLocation[-1].Flags = 0;
        v38 = 0;
        if ( FailImmediately )
        {
          CurrentStackLocation[-1].Flags = 1;
          v38 = 1;
        }
        if ( ExclusiveLock )
          CurrentStackLocation[-1].Flags = v38 | 2;
        CurrentStackLocation[-1].Parameters.Create.Options = Key;
        CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v47;
        v36->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v36, (__int64)v15, 0LL, PreviousMode, v34, 2u);
      }
      else
      {
        IopAllocateIrpCleanup((PADAPTER_OBJECT)v15, (PADAPTER_OBJECT)Eventa);
        return -1073741670;
      }
    }
  }
  return result;
}
