/*
 * XREFs of UsbhRemovePdoIdleIrp @ 0x1C00589D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall UsbhRemovePdoIdleIrp(PIO_CSQ Csq, PIRP Irp)
{
  _LIST_ENTRY *p_ListEntry; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax

  p_ListEntry = &Irp->Tail.Overlay.ListEntry;
  Flink = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry || (Blink = p_ListEntry->Blink, Blink->Flink != p_ListEntry) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
}
