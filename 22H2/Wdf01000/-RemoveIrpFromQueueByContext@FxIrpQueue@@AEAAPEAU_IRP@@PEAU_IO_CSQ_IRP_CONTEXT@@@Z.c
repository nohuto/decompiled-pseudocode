/*
 * XREFs of ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0016BC8
 * Callers:
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A1C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z @ 0x1C001340C (-RemoveFromIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@@Z.c)
 * Callees:
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C6C40 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

_IRP *__fastcall FxIrpQueue::RemoveIrpFromQueueByContext(FxIrpQueue *this, _IO_CSQ_IRP_CONTEXT *Context)
{
  _IRP *Irp; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *Blink; // rdx
  _IRP *result; // rax

  Irp = Context->Irp;
  if ( !Irp )
    return 0LL;
  m_Globals = this->m_LockObject->m_Globals;
  if ( m_Globals->FxVerifierOn )
  {
    FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(this, m_Globals, Context);
    Irp = Context->Irp;
  }
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    return 0LL;
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  result = Irp;
  Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --this->m_RequestCount;
  Context->Irp = 0LL;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  return result;
}
