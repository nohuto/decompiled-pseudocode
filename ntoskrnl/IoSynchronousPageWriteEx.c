/*
 * XREFs of IoSynchronousPageWriteEx @ 0x14024F830
 * Callers:
 *     IoSynchronousPageWrite @ 0x1402F0170 (IoSynchronousPageWrite.c)
 *     MiFlushSectionInternal @ 0x14031FA90 (MiFlushSectionInternal.c)
 *     MiSynchronousPageWrite @ 0x1403BBAD8 (MiSynchronousPageWrite.c)
 *     IoWriteCapturedPristineTriageDumpToDedicatedDumpFile @ 0x14054ECE4 (IoWriteCapturedPristineTriageDumpToDedicatedDumpFile.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopAllocateBackpocketIrp @ 0x1405525E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140552878 (IopAllocateReserveIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmIsFileObjectAPagingFile @ 0x14063990C (MmIsFileObjectAPagingFile.c)
 */

NTSTATUS __fastcall IoSynchronousPageWriteEx(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  IRP *Irp; // rbx
  __int64 v14; // r9
  int IoPriorityThread; // r10d
  unsigned int v16; // eax
  PETHREAD Thread; // r14
  LIST_ENTRY *p_ThreadListEntry; // rdi
  struct _LIST_ENTRY *p_SystemCallNumber; // rsi
  unsigned __int8 CurrentIrql; // r15
  struct _LIST_ENTRY *Flink; // rax
  _DWORD *SchedulerAssist; // r8
  __int64 v24; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rcx
  unsigned __int8 v27; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v29; // r8
  int v30; // eax
  bool v31; // zf

  SectionObjectPointer = a1->SectionObjectPointer;
  if ( SectionObjectPointer && SectionObjectPointer->SharedCacheMap )
  {
    __incgsdword(0x8474u);
    __addgsdword(0x8478u, (a2->ByteCount + 4095) >> 12);
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = (IRP *)IopAllocateIrpExReturn(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( Irp )
    goto LABEL_5;
  if ( (unsigned int)MmIsFileObjectAPagingFile(a1) )
  {
    _InterlockedIncrement(&IoSynchronousPageWriteIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v26, (unsigned __int8)RelatedDeviceObject->StackSize, 1LL);
    if ( Irp )
      goto LABEL_5;
    return -1073741670;
  }
  _InterlockedIncrement(&IoSynchronousPageWriteNonPagefileIrpAllocationFailure);
  Irp = (IRP *)IopAllocateBackpocketIrp(RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
    return -1073741670;
LABEL_5:
  Irp->AllocationFlags |= 0x20u;
  Irp->MdlAddress = a2;
  Irp->Flags = 67;
  IoPriorityThread = PsGetIoPriorityThread(KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0
      || CurrentThread->PreviousMode == 1
      || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0
      || KeGetCurrentThread()[1].TrapFrame == (_KTRAP_FRAME *)2 )
    {
      ++IoPagingWriteLowPriorityCount;
    }
    else
    {
      ++IoPagingWriteLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  v16 = Irp->Flags & 0xFFF1FFFF;
  Irp->RequestorMode = 0;
  Irp->UserEvent = a4;
  Irp->UserIosb = a7;
  Irp->Flags = v16 | ((IoPriorityThread + 1) << 17);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v14 - 72) = 4;
  *(_DWORD *)(v14 - 64) = a2->ByteCount;
  *(_QWORD *)(v14 - 48) = *a3;
  *(_BYTE *)(v14 - 70) |= a5;
  *(_QWORD *)(v14 - 24) = a1;
  if ( a6 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a6 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  Thread = Irp->Tail.Overlay.Thread;
  p_ThreadListEntry = &Irp->ThreadListEntry;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v24) = 4;
    else
      v24 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v24;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  Irp->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread);
  if ( KiIrqlFlags )
  {
    v27 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v27 <= 0xFu && CurrentIrql <= 0xFu && v27 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v29 = CurrentPrcb->SchedulerAssist;
      v30 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v31 = (v30 & v29[5]) == 0;
      v29[5] &= v30;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  return IofCallDriver(RelatedDeviceObject, Irp);
}
