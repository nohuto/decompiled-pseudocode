/*
 * XREFs of IopQueryXxxInformation @ 0x140633A38
 * Callers:
 *     IopQueryNameInternal @ 0x140620924 (IopQueryNameInternal.c)
 *     PfpPrefetchEntireDirectory @ 0x140632798 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x1406331D8 (PfSnGetSectionObject.c)
 *     IoQueryVolumeInformation @ 0x1406A47B0 (IoQueryVolumeInformation.c)
 *     IoQueryFileInformation @ 0x1406A5170 (IoQueryFileInformation.c)
 *     IopValidateJunctionTarget @ 0x140892F34 (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x1408948E4 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x1408D0354 (MiAttemptPageFileExtension.c)
 * Callees:
 *     IopWaitForSynchronousIo @ 0x14026E980 (IopWaitForSynchronousIo.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        PADAPTER_OBJECT DmaAdapter,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  char v10; // r14
  int v11; // r12d
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  IRP *v14; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v17; // cf
  NTSTATUS v18; // eax
  unsigned int DmaOperations; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v22; // rax
  unsigned int v23; // edi
  __int128 v24; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v27; // [rsp+B0h] [rbp+50h]

  v27 = a3;
  memset(&Event, 0, sizeof(Event));
  v24 = 0LL;
  ObfReferenceObject(DmaAdapter);
  if ( (*(_DWORD *)&DmaAdapter[5].Version & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v22 = KeAbPreAcquire((ULONG_PTR)&DmaAdapter[8], 0LL, 0);
    LOBYTE(v26) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(&DmaAdapter[7].Size + 1), 1) )
    {
      v23 = IopWaitAndAcquireFileObjectLock(DmaAdapter, (__int64)&v26);
      if ( (_BYTE)v26 )
      {
        HalPutDmaAdapter(DmaAdapter);
        return v23;
      }
    }
    else
    {
      if ( v22 )
        *(_BYTE *)(v22 + 26) |= 1u;
      ObfReferenceObject(DmaAdapter);
    }
    KeResetEvent((PRKEVENT)&DmaAdapter[9].DmaOperations);
    v10 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v10 = 0;
  }
  v11 = 71;
  RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)DmaAdapter);
  if ( a2 != 75 )
    v11 = a2;
  Irp = IopAllocateIrpExReturn();
  v14 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = DmaAdapter;
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
    v14->UserEvent = p_Event;
    v14->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    v17 = a7 != 0;
    a7 = -a7;
    v14->UserIosb = (PIO_STATUS_BLOCK)&v24;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)DmaAdapter;
    CurrentStackLocation[-1].MajorFunction = v17 ? 5 : 10;
    v14->Flags |= 0x10u;
    v14->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v27;
    CurrentStackLocation[-1].Parameters.Create.Options = v11;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v14);
    v18 = IofCallDriver(RelatedDeviceObject, v14);
    DmaOperations = v18;
    if ( v10 )
    {
      if ( v18 == 259 )
      {
        IopWaitForSynchronousIo(v14, (__int64)DmaAdapter);
        DmaOperations = (unsigned int)DmaAdapter[3].DmaOperations;
      }
      IopReleaseFileObjectLock(DmaAdapter);
    }
    else if ( v18 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      DmaOperations = v24;
    }
    *a6 = DWORD2(v24);
    return DmaOperations;
  }
  else
  {
    IopAllocateIrpCleanup(DmaAdapter, 0LL);
    return 3221225626LL;
  }
}
