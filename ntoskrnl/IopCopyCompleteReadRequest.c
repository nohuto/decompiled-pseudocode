/*
 * XREFs of IopCopyCompleteReadRequest @ 0x1402F9BA0
 * Callers:
 *     IopCopyCompleteReadIrp @ 0x1402F99A0 (IopCopyCompleteReadIrp.c)
 *     IopCopyAbortCopyReadRequest @ 0x1405578B0 (IopCopyAbortCopyReadRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x140293F0C (IopDequeueIrpFromFileObject.c)
 *     IopUpdateIrpTransferCount @ 0x1402F9C50 (IopUpdateIrpTransferCount.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     IopProcessBufferedIoCompletion @ 0x140313AA0 (IopProcessBufferedIoCompletion.c)
 */

void __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion(v5);
  IopUpdateIrpTransferCount(v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  v5->UserEvent = 0LL;
  IopDropIrp(v5, v6);
}
