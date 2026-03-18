/*
 * XREFs of IopIoRingCompleteIrp @ 0x14055957C
 * Callers:
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     IopSynchronousServiceTail @ 0x1406E3F40 (IopSynchronousServiceTail.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     IopUpdateIrpTransferCount @ 0x14028C580 (IopUpdateIrpTransferCount.c)
 *     IopDropIrp @ 0x14028CCA8 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14028CD6C (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1402AC270 (IopProcessBufferedIoCompletion.c)
 *     IopDequeueIrpFromThread @ 0x1402AF700 (IopDequeueIrpFromThread.c)
 *     IopCompleteIoRingEntry @ 0x1405593FC (IopCompleteIoRingEntry.c)
 *     IopMcReleaseMdl @ 0x14055F214 (IopMcReleaseMdl.c)
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
