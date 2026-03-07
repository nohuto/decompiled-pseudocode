void __fastcall FxIoQueue::RemoveFromDriverOwnedList(FxIoQueue *this, FxRequest *Request)
{
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdx
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rax

  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = p_m_OwnerListEntry2->Flink;
  if ( p_m_OwnerListEntry2->Flink->Blink != p_m_OwnerListEntry2
    || (Blink = p_m_OwnerListEntry2->Blink, Blink->Flink != p_m_OwnerListEntry2) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_m_OwnerListEntry2->Blink = p_m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  --this->m_DriverIoCount;
}
