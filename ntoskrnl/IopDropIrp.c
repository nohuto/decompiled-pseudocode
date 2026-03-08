/*
 * XREFs of IopDropIrp @ 0x140293E48
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IopCopyCompleteReadRequest @ 0x1402F9BA0 (IopCopyCompleteReadRequest.c)
 *     IoRemoveIoCompletion @ 0x140315A70 (IoRemoveIoCompletion.c)
 *     IopIoRingCompleteIrp @ 0x1405570DC (IopIoRingCompleteIrp.c)
 *     IopFreeCompletionListPackets @ 0x1406F7B38 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IopDequeueIrpFromFileObject @ 0x140293F0C (IopDequeueIrpFromFileObject.c)
 *     IopInterlockedAdd @ 0x1402F3488 (IopInterlockedAdd.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     ObDereferenceObjectExWithTag @ 0x140344234 (ObDereferenceObjectExWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR a2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG Flags; // eax

  if ( (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  UserEvent = Irp->UserEvent;
  if ( UserEvent && a2 && (Irp->Flags & 4) == 0 )
    ObfDereferenceObject(UserEvent);
  Flags = Irp->Flags;
  if ( (Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject(Irp, a2);
    Flags = Irp->Flags;
  }
  if ( a2 && (Flags & 0x80u) == 0 )
    ObDereferenceObjectExWithTag(a2);
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
