/*
 * XREFs of IopQueryXxxInformation @ 0x14071E6CC
 * Callers:
 *     PfSnGetSectionObject @ 0x1406A48D0 (PfSnGetSectionObject.c)
 *     PfpPrefetchEntireDirectory @ 0x14071E438 (PfpPrefetchEntireDirectory.c)
 *     IopQueryNameInternal @ 0x140720054 (IopQueryNameInternal.c)
 *     IoQueryVolumeInformation @ 0x14079B0A0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x14079BA70 (IoQueryFileInformation.c)
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     IopValidateJunctionTarget @ 0x140943674 (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x1409450C0 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x140A2F9B4 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IopWaitForSynchronousIo @ 0x140299468 (IopWaitForSynchronousIo.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  char v10; // r14
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r12d
  struct _DEVICE_OBJECT *v15; // rsi
  __int64 Irp; // rax
  IRP *v17; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v20; // cf
  NTSTATUS v21; // eax
  unsigned int FinalStatus; // esi
  struct _KTHREAD *CurrentThread; // rax
  char v25; // di
  __int64 v26; // rax
  unsigned int v27; // edi
  __int128 v28; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v31; // [rsp+B0h] [rbp+50h]

  v31 = a3;
  memset(&Event, 0, sizeof(Event));
  v28 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v25 = (Object->Flags & 4) != 0;
    --CurrentThread->KernelApcDisable;
    v26 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
    LOBYTE(v30) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
    {
      v27 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&Object->Type, a4, v25, v26, &v30);
      if ( (_BYTE)v30 )
      {
        ObfDereferenceObject(Object);
        return v27;
      }
    }
    else
    {
      if ( v26 )
        *(_BYTE *)(v26 + 18) = 1;
      ObfReferenceObject(Object);
    }
    KeResetEvent(&Object->Event);
    v10 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v14 = 71;
  if ( a2 != 75 )
    v14 = a2;
  v15 = RelatedDeviceObject;
  LOBYTE(v12) = RelatedDeviceObject->StackSize;
  LOBYTE(v13) = v10 ^ 1;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v12, v13);
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v10 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v17->UserEvent = p_Event;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v20 = a7 != 0;
    a7 = -a7;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v28;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v20 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v31;
    CurrentStackLocation[-1].Parameters.Create.Options = v14;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v17);
    v21 = IofCallDriver(v15, v17);
    FinalStatus = v21;
    if ( v10 )
    {
      if ( v21 == 259 )
      {
        IopWaitForSynchronousIo(v17, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v28;
    }
    *a6 = DWORD2(v28);
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
