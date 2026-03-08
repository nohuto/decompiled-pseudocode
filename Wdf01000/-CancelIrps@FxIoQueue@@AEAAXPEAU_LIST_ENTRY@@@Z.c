/*
 * XREFs of ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0063874
 * Callers:
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C006575C (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00658E8 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::CancelIrps(FxIoQueue *this, _LIST_ENTRY *IrpListHead)
{
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v4; // rax
  _IRP *p_Blink; // rcx

  while ( 1 )
  {
    Flink = IrpListHead->Flink;
    if ( IrpListHead->Flink == IrpListHead )
      break;
    if ( Flink->Blink != IrpListHead || (v4 = Flink->Flink, Flink->Flink->Blink != Flink) )
      __fastfail(3u);
    IrpListHead->Flink = v4;
    p_Blink = (_IRP *)&Flink[-11].Blink;
    v4->Blink = IrpListHead;
    p_Blink->IoStatus.Information = 0LL;
    p_Blink->IoStatus.Status = -1073741536;
    IofCompleteRequest(p_Blink, 0);
  }
}
