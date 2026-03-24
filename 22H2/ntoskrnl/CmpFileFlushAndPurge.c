/*
 * XREFs of CmpFileFlushAndPurge @ 0x14071D008
 * Callers:
 *     CmpFlushHive @ 0x14062A4F8 (CmpFlushHive.c)
 *     HvWriteLogFile @ 0x14071CE2C (HvWriteLogFile.c)
 *     HvWriteHivePrimaryFile @ 0x140724610 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140724ADC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvExtendHivePrimaryFileValidDataLength @ 0x140876934 (HvExtendHivePrimaryFileValidDataLength.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x1402D40A0 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1403616C0 (IoAllocateIrp.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpFileFlush @ 0x14071CE04 (CmpFileFlush.c)
 */

__int64 __fastcall CmpFileFlushAndPurge(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PIRP v4; // rdi
  void *v5; // rcx
  NTSTATUS v6; // eax
  struct _DMA_ADAPTER *v7; // rsi
  unsigned int Status; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  PIRP Irp; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v13; // rax
  struct _KEVENT v15; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  memset(&v15, 0, sizeof(v15));
  KeInitializeEvent(&v15, SynchronizationEvent, 0);
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 && !(_DWORD)v2 )
  {
    return (unsigned int)CmpFileFlush(a1, 0);
  }
  else
  {
    v5 = *(void **)(a1 + 8 * v2 + 1536);
    if ( !v5 || BYTE1(NlsMbCodePageTag) )
    {
      return 0;
    }
    else
    {
      Object = 0LL;
      v6 = ObReferenceObjectByHandle(v5, 2u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
      v7 = (struct _DMA_ADAPTER *)Object;
      Status = v6;
      if ( v6 >= 0 )
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
        v4 = Irp;
        if ( Irp )
        {
          Irp->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v7;
          CurrentThread = KeGetCurrentThread();
          v4->Tail.Overlay.AuxiliaryBuffer = 0LL;
          *(_WORD *)&v4->RequestorMode = 0;
          v4->Overlay.AllocationSize.QuadPart = 0LL;
          v4->CancelRoutine = 0LL;
          v7 = (struct _DMA_ADAPTER *)Object;
          v4->Tail.Overlay.Thread = CurrentThread;
          CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
          v4->Cancel = 0;
          *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 265;
          CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v7;
          CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
          v13 = v4->Tail.Overlay.CurrentStackLocation;
          v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
          v13[-1].Context = &v15;
          v13[-1].Control = -32;
          Status = IofCallDriver(RelatedDeviceObject, v4);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
            Status = v4->IoStatus.Status;
          }
        }
        else
        {
          Status = -1073741670;
        }
      }
      if ( v7 )
        HalPutDmaAdapter(v7);
      if ( v4 )
        IoFreeIrp(v4);
    }
  }
  return Status;
}
