/*
 * XREFs of IoPageReadEx @ 0x14027F4F0
 * Callers:
 *     MiPageRead @ 0x14020CED0 (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x1403435F0 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x1403CFDE0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x14061612C (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x14062F98C (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PsGetBaseIoPriorityThread @ 0x14027F460 (PsGetBaseIoPriorityThread.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14027F900 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402B1E30 (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402B22A0 (IopSetDriverFlagsExtension.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopAllocateBackpocketIrp @ 0x1405525E0 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x140552878 (IopAllocateReserveIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     MmIsFileObjectAPagingFile @ 0x14063990C (MmIsFileObjectAPagingFile.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        struct _IO_STATUS_BLOCK *a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v9; // r14
  unsigned __int8 v10; // r13
  PDEVICE_OBJECT RelatedDeviceObject; // r12
  int v12; // ebp
  __int64 v13; // rsi
  IRP *Irp; // rdi
  int v15; // r12d
  KIRQL v16; // al
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rsi
  int BaseIoPriorityThread; // r8d
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned int v22; // eax
  LIST_ENTRY *p_ThreadListEntry; // rbx
  PETHREAD Thread; // rbp
  struct _LIST_ENTRY *p_SystemCallNumber; // rsi
  unsigned __int8 v26; // r14
  struct _LIST_ENTRY *Flink; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v29; // rcx
  _DWORD *v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v38; // eax
  bool v39; // zf
  unsigned __int8 v40; // cl
  struct _KPRCB *v41; // r9
  _DWORD *v42; // r8
  int v43; // eax
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+28h] [rbp-40h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  DeviceObject = RelatedDeviceObject;
  v12 = 1027;
  v13 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v12 = 67;
  if ( v10 >= 4u )
    v13 = -1LL;
  Irp = (IRP *)IopAllocateIrpExReturn(v13, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
      Irp = (IRP *)IopAllocateReserveIrp(v33, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (a2->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
      {
        LOBYTE(v34) = 1;
        Irp = (IRP *)IopAllocateBackpocketIrp(v13, (unsigned __int8)RelatedDeviceObject->StackSize, v34);
        if ( Irp )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  v15 = 0;
  v16 = ExAcquireSpinLockShared(&dword_140C692C8);
  v17 = (_QWORD *)qword_140C692C0;
  v18 = v16;
  if ( !qword_140C692C0 )
    goto LABEL_18;
  while ( (unsigned __int64)FileObject < *(v17 - 25) )
  {
    v17 = (_QWORD *)*v17;
LABEL_13:
    if ( !v17 )
      goto LABEL_18;
  }
  if ( (unsigned __int64)FileObject > *(v17 - 25) )
  {
    v17 = (_QWORD *)v17[1];
    goto LABEL_13;
  }
  if ( v17 )
    v15 = 1;
LABEL_18:
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140C692C8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
      v39 = (v38 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v38;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v18);
  if ( v15 || (a2->MdlFlags & 0x40) != 0 && (v12 & 0x40) != 0 )
    Irp->AllocationFlags |= 0x20u;
  Irp->Flags = v12;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread((__int64)KeGetCurrentThread());
  if ( BaseIoPriorityThread < 2 )
  {
    if ( (struct _KTHREAD *)v21 == KeGetCurrentThread() && *(_DWORD *)(v21 + 1440) )
    {
      BaseIoPriorityThread = 2;
    }
    else if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      BaseIoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && BaseIoPriorityThread == 2 )
    BaseIoPriorityThread = 3;
  v22 = Irp->Flags & 0xFFF1FFFF;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->UserIosb = a5;
  Irp->UserEvent = a4;
  Irp->Flags = v22 | ((BaseIoPriorityThread + 1) << 17);
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v20 - 72) = 3;
  *(_QWORD *)(v20 - 24) = FileObject;
  *(_DWORD *)(v20 - 64) = a2->ByteCount;
  *(_QWORD *)(v20 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread(Irp, Irp->Tail.Overlay.Thread);
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  a5->Information = (ULONG_PTR)Irp;
  p_ThreadListEntry = &Irp->ThreadListEntry;
  Thread = Irp->Tail.Overlay.Thread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
  v26 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 <= 0xFu )
  {
    v31 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v26 == 2 )
      LODWORD(v32) = 4;
    else
      v32 = (-1LL << (v26 + 1)) & 4;
    v31[5] |= v32;
  }
  KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  Irp->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread, 0LL);
  if ( KiIrqlFlags )
  {
    v40 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v26 <= 0xFu && v40 >= 2u )
    {
      v41 = KeGetCurrentPrcb();
      v42 = v41->SchedulerAssist;
      v43 = ~(unsigned __int16)(-1LL << (v26 + 1));
      v39 = (v43 & v42[5]) == 0;
      v42[5] &= v43;
      if ( v39 )
        KiRemoveSystemWorkPriorityKick(v41);
    }
  }
  __writecr8(v26);
  CurrentThread = KeGetCurrentThread();
  if ( BYTE5(CurrentThread[1].Queue) || BYTE4(CurrentThread[1].Queue) == 1 )
  {
    v29 = KeGetCurrentThread();
    v29[1].Timer.DueTime.HighPart += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, Irp);
}
