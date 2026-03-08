/*
 * XREFs of IopCallDriverReference @ 0x14027F1E0
 * Callers:
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     IoGetIoPriorityHint @ 0x14027F300 (IoGetIoPriorityHint.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x14027F340 (IopSetIrpPriorityHintFromFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x140283390 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall IopCallDriverReference(PDEVICE_OBJECT DeviceObject, PIRP Irp, char a3, void *a4, int a5)
{
  __int64 v9; // rax
  unsigned int v10; // ebx
  PETHREAD Thread; // rcx
  ULONG Flags; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Flink; // rdi
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF

  if ( !a3 )
    ObfReferenceObjectWithTag(a4, 0x746C6644u);
  IopSetIrpPriorityHintFromFileObject(a4, Irp);
  if ( IoGetIoPriorityHint(Irp) < IoPriorityNormal )
  {
    if ( Irp->RequestorMode
      || (Thread = Irp->Tail.Overlay.Thread) != 0LL
      && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
      if ( a5 )
      {
        if ( a5 == 1 )
          ++IoLowPriorityWriteOperationCount;
      }
      else
      {
        ++IoLowPriorityReadOperationCount;
      }
    }
    else
    {
      Flags = Irp->Flags;
      ++IoKernelIssuedIoBoostedCount;
      Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
    }
  }
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v9 = *((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0
    && (*(_BYTE *)v9 & 2) != 0 )
  {
    v16 = 0LL;
    v16 = *(_OWORD *)(v9 + 24);
    CurrentThread = KeGetCurrentThread();
    Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
    CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v16;
    v10 = IofCallDriver(DeviceObject, Irp);
    KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink = Flink;
  }
  else
  {
    v10 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a3 )
    ObDereferenceObjectDeferDeleteWithTag(a4, 0x746C6644u);
  return v10;
}
