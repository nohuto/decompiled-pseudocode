char __fastcall FxSystemThread::QueueWorkItem(FxSystemThread *this, _WORK_QUEUE_ITEM *WorkItem, unsigned __int8 a3)
{
  char v4; // di
  unsigned __int8 v6; // r8
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !this->m_Exit )
  {
    v4 = 1;
    Blink = this->m_WorkList.Blink;
    if ( Blink->Flink != &this->m_WorkList )
      __fastfail(3u);
    WorkItem->List.Blink = Blink;
    WorkItem->List.Flink = &this->m_WorkList;
    Blink->Flink = &WorkItem->List;
    this->m_WorkList.Blink = &WorkItem->List;
    KeSetEvent(&this->m_WorkEvent.m_Event, 0, 0);
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  return v4;
}
