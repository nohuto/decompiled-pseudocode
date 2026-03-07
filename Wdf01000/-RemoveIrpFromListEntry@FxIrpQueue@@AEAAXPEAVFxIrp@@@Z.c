void __fastcall FxIrpQueue::RemoveIrpFromListEntry(FxIrpQueue *this, FxIrp *Irp)
{
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  p_ListEntry = &Irp->m_Irp->Tail.Overlay.ListEntry;
  Flink = p_ListEntry->Flink;
  if ( p_ListEntry->Flink->Blink != p_ListEntry
    || (Blink = Irp->m_Irp->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_ListEntry->Blink = p_ListEntry;
  p_ListEntry->Flink = p_ListEntry;
  --this->m_RequestCount;
}
