/*
 * XREFs of IopCopyCompleteReadRequest @ 0x1403F1040
 * Callers:
 *     IopCopyAbortCopyReadRequest @ 0x1403F0C90 (IopCopyAbortCopyReadRequest.c)
 *     IopCopyCompleteReadIrp @ 0x1403F0CC0 (IopCopyCompleteReadIrp.c)
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     IopDequeueIrpFromThread @ 0x1402D3F10 (IopDequeueIrpFromThread.c)
 *     IopDropIrp @ 0x14035A9A4 (IopDropIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x14035AA98 (IopDequeueIrpFromFileObject.c)
 *     IopProcessBufferedIoCompletion @ 0x1403F0790 (IopProcessBufferedIoCompletion.c)
 *     IopUpdateIrpTransferCount @ 0x1403F08A0 (IopUpdateIrpTransferCount.c)
 *     Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage @ 0x1403F0C30 (Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage.c)
 */

void __fastcall IopCopyCompleteReadRequest(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR *a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  IRP *v5; // rbx
  ULONG_PTR v6; // rdi
  unsigned __int64 v7; // rsi
  struct _DMA_ADAPTER *UserEvent; // rcx

  CurrentThread = KeGetCurrentThread();
  v5 = (IRP *)(a1 - 120);
  v6 = *a4;
  v7 = 0LL;
  if ( (*(_DWORD *)(*a4 + 80) & 0x4000000) == 0 )
    KeSetEvent((PRKEVENT)(v6 + 152), 0, 0);
  *(_DWORD *)(v6 + 56) = v5->IoStatus.Status;
  if ( (v5->Flags & 0x2000) != 0 )
    v7 = v5->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  IopProcessBufferedIoCompletion((__int64)v5);
  IopUpdateIrpTransferCount((__int64)v5, v7);
  if ( (v5->Flags & 0x2000) != 0 )
  {
    IopDequeueIrpFromFileObject((__int64)v5, v6);
  }
  else
  {
    v5->Tail.Overlay.Thread = CurrentThread;
    IopDequeueIrpFromThread(v5);
  }
  if ( !(unsigned int)Feature_Servicing_CopyFileMoveFileEventLeak__private_IsEnabledDeviceUsage() )
    goto LABEL_11;
  UserEvent = (struct _DMA_ADAPTER *)v5->UserEvent;
  if ( UserEvent )
  {
    HalPutDmaAdapter(UserEvent);
LABEL_11:
    v5->UserEvent = 0LL;
  }
  IopDropIrp(v5, v6);
}
