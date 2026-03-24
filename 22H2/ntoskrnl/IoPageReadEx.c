/*
 * XREFs of IoPageReadEx @ 0x14029C7C0
 * Callers:
 *     MiPageRead @ 0x14027D14C (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140306F74 (MiIssueHardFaultIo.c)
 *     IoPageRead @ 0x14037F0A0 (IoPageRead.c)
 *     MiMakeOutswappedPageResident @ 0x14052BA00 (MiMakeOutswappedPageResident.c)
 *     MiPfIssueCoalescedSupport @ 0x1405391E8 (MiPfIssueCoalescedSupport.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     MmIsRecursiveIoFault @ 0x14029CA10 (MmIsRecursiveIoFault.c)
 *     MmIsFileObjectAPagingFile @ 0x14029CAE4 (MmIsFileObjectAPagingFile.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1402D2170 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402E66DC (IopSetDiskIoAttributionExtension.c)
 *     IopSetDriverFlagsExtension @ 0x1402E6758 (IopSetDriverFlagsExtension.c)
 *     IopAllocateBackpocketIrp @ 0x1404FFD50 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1404FFFF0 (IopAllocateReserveIrp.c)
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
  unsigned __int64 v9; // r15
  unsigned __int8 v10; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // r13
  int v13; // esi
  __int64 v14; // r12
  IRP *Irp; // rbx
  int IoPriorityThread; // eax
  __int64 v17; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  void *retaddr; // [rsp+68h] [rbp+0h]

  v9 = (unsigned __int64)(a6 & 1) << 32;
  v10 = ((a6 & 1) != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v10 = (a6 & 1) != 0 ? 4 : 0;
  if ( (a6 & 8) != 0 )
    v10 |= 2u;
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v12 = RelatedDeviceObject;
  v13 = 1027;
  v14 = (__int64)RelatedDeviceObject;
  if ( (a6 & 4) == 0 )
    v13 = 67;
  if ( v10 >= 4u )
    v14 = -1LL;
  Irp = (IRP *)IopAllocateIrpExReturn(v14, (unsigned __int8)RelatedDeviceObject->StackSize, 0LL, retaddr);
  if ( Irp )
    goto LABEL_10;
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
  {
    _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
    Irp = (IRP *)IopAllocateReserveIrp(v20, (unsigned __int8)v12->StackSize, 0LL);
    if ( !Irp )
      return -1073741670;
  }
  else
  {
    _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
    if ( (a2->MdlFlags & 0x40) == 0 || (v13 & 0x40) == 0 )
      return -1073741670;
    LOBYTE(v21) = 1;
    Irp = (IRP *)IopAllocateBackpocketIrp(v14, (unsigned __int8)v12->StackSize, v21);
    if ( !Irp )
      return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) || (a2->MdlFlags & 0x40) != 0 && (v13 & 0x40) != 0 )
    Irp->AllocationFlags |= 0x20u;
  Irp->Flags = v13;
  IoPriorityThread = PsGetIoPriorityThread((__int64)KeGetCurrentThread());
  if ( IoPriorityThread < 2 )
  {
    if ( (v10 & 1) == 0 || (a6 & 1) == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      IoPriorityThread = 2;
    }
  }
  if ( (v10 & 2) != 0 && IoPriorityThread == 2 )
    IoPriorityThread = 3;
  Irp->MdlAddress = a2;
  Irp->RequestorMode = 0;
  Irp->Flags = v13 | ((IoPriorityThread << 17) + 0x20000);
  Irp->UserEvent = a4;
  Irp->UserIosb = a5;
  Irp->UserBuffer = (char *)a2->StartVa + a2->ByteOffset;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  *(_BYTE *)(v17 - 72) = 3;
  *(_QWORD *)(v17 - 24) = FileObject;
  *(_DWORD *)(v17 - 64) = a2->ByteCount;
  *(_QWORD *)(v17 - 48) = *a3;
  if ( a7 )
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), Irp->Tail.Overlay.Thread, 0LL);
  else
    IoSetDiskIoAttributionFromThread((__int64)Irp, Irp->Tail.Overlay.Thread);
  if ( v9 )
    IopSetDriverFlagsExtension(Irp, v9);
  a5->Information = (ULONG_PTR)Irp;
  IopQueueThreadIrp(Irp);
  if ( MmIsRecursiveIoFault() )
  {
    CurrentThread = KeGetCurrentThread();
    CurrentThread[1].Timer.DueTime.HighPart += (a2->ByteCount + 4095) >> 12;
  }
  return IofCallDriver(v12, Irp);
}
