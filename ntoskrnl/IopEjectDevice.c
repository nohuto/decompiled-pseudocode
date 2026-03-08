/*
 * XREFs of IopEjectDevice @ 0x140969DA8
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     IovUtilWatermarkIrp @ 0x1402092B8 (IovUtilWatermarkIrp.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140240A5C (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpQueuePendingEject @ 0x1409562EC (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r14
  PIRP Irp; // rbp
  unsigned int v8; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v11; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 3LL);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(a2 + 96) + 40LL))(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL));
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x69706E50u);
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
    if ( Irp )
    {
      IovUtilWatermarkIrp();
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      Irp->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      Irp->IoStatus.Status = -1073741637;
      memset(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      Irp->UserIosb = 0LL;
      Irp->UserEvent = 0LL;
      Irp->Tail.Overlay.Thread = CurrentThread;
      Irp->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = Irp;
      PnpQueuePendingEject((_QWORD *)a2);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v11[-1].Context = (PVOID)a2;
      v11[-1].Control = -32;
      v8 = IofCallDriver(AttachedDeviceReferenceWithTag, Irp);
    }
    else
    {
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)a2 = a2;
      PnpQueuePendingEject((_QWORD *)a2);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
      *(_QWORD *)(a2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
      v8 = -1073741670;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
    return v8;
  }
  else
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 4LL);
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    PnpQueuePendingEject((_QWORD *)a2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
    *(_QWORD *)(a2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
    return 0LL;
  }
}
