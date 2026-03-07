_LIST_ENTRY **__fastcall FxPkgIo::GetNextIoQueueLocked(FxPkgIo *this, FxIoQueueNode *QueueBookmark, void *a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rsi
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v7; // rcx

  Flink = QueueBookmark->m_ListEntry.Flink;
  p_Blink = 0LL;
  if ( (FxIoQueueNode *)QueueBookmark->m_ListEntry.Flink->Blink != QueueBookmark )
    goto LABEL_11;
  Blink = QueueBookmark->m_ListEntry.Blink;
  if ( (FxIoQueueNode *)Blink->Flink != QueueBookmark )
    goto LABEL_11;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  QueueBookmark->m_ListEntry.Blink = &QueueBookmark->m_ListEntry;
  QueueBookmark->m_ListEntry.Flink = &QueueBookmark->m_ListEntry;
  while ( 1 )
  {
    if ( Flink == &this->m_IoQueueListHead )
      return p_Blink;
    if ( LODWORD(Flink[1].Flink) == 1 )
      break;
    Flink = Flink->Flink;
  }
  p_Blink = &Flink[-57].Blink;
  FxObject::AddRef(
    (FxObject *)&Flink[-57].Blink,
    (void *)0x73756C66,
    1687,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  v7 = Flink->Flink;
  if ( Flink->Flink->Blink != Flink )
LABEL_11:
    __fastfail(3u);
  QueueBookmark->m_ListEntry.Flink = v7;
  QueueBookmark->m_ListEntry.Blink = Flink;
  v7->Blink = &QueueBookmark->m_ListEntry;
  Flink->Flink = &QueueBookmark->m_ListEntry;
  return p_Blink;
}
