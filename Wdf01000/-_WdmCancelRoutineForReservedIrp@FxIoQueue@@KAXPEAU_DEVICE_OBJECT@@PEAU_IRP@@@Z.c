/*
 * XREFs of ?_WdmCancelRoutineForReservedIrp@FxIoQueue@@KAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0067B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::_WdmCancelRoutineForReservedIrp(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  unsigned __int64 *v3; // rdi
  KIRQL v4; // al
  _LIST_ENTRY *p_ListEntry; // r8
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *Blink; // rdx

  IoReleaseCancelSpinLock(Irp->CancelIrql);
  v3 = (unsigned __int64 *)Irp->Tail.Overlay.DriverContext[3];
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc(v3 + 12);
  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Flink = Irp->Tail.Overlay.ListEntry.Flink;
  if ( (void **)Flink->Blink != &Irp->Tail.CompletionKey + 6
    || (Blink = Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Irp->Tail.Overlay.ListEntry.Blink = &Irp->Tail.Overlay.ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  KeReleaseSpinLock(v3 + 12, v4);
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741536;
  IofCompleteRequest(Irp, 0);
}
