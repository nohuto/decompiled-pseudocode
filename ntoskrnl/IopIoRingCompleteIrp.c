/*
 * XREFs of IopIoRingCompleteIrp @ 0x1405570DC
 * Callers:
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1407C33C0 (IopSynchronousServiceTail.c)
 * Callees:
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x140293F0C (IopDequeueIrpFromFileObject.c)
 *     IopUpdateIrpTransferCount @ 0x1402F9C50 (IopUpdateIrpTransferCount.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     IopProcessBufferedIoCompletion @ 0x140313AA0 (IopProcessBufferedIoCompletion.c)
 *     IopCompleteIoRingEntry @ 0x140556F5C (IopCompleteIoRingEntry.c)
 *     IopMcReleaseMdl @ 0x14055CD74 (IopMcReleaseMdl.c)
 */

void __fastcall IopIoRingCompleteIrp(PIRP Irp, ULONG_PTR a2, KPRIORITY a3)
{
  void *v3; // rbp

  v3 = (void *)((unsigned __int64)Irp->Overlay.AsynchronousParameters.UserApcContext & 0xFFFFFFFFFFFFFFF8uLL);
  IopProcessBufferedIoCompletion((__int64)Irp);
  if ( a2 )
    *(_DWORD *)(a2 + 56) = Irp->IoStatus.Status;
  IopUpdateIrpTransferCount((__int64)Irp);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject((__int64)Irp, a2);
  else
    IopDequeueIrpFromThread(Irp);
  IopCompleteIoRingEntry((__int64)v3, (__int64)Irp->UserIosb, &Irp->IoStatus.0, a3);
  if ( (*(_DWORD *)(&Irp->Overlay.AllocationSize + 1) & 1) != 0 )
  {
    IopMcReleaseMdl((ULONG_PTR)Irp->MdlAddress);
    Irp->MdlAddress = 0LL;
  }
  ObfDereferenceObjectWithTag(v3, 0x49526F49u);
  Irp->Flags &= ~0x200000u;
  IopDropIrp(Irp, a2);
}
