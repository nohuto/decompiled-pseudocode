void __fastcall FxIoQueue::InsertInDriverOwnedList(FxIoQueue *this, FxRequest *Request)
{
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdx
  _LIST_ENTRY *p_m_DriverOwned; // rcx
  _LIST_ENTRY *Blink; // rax

  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  ++this->m_DriverIoCount;
  p_m_DriverOwned = &this->m_DriverOwned;
  Blink = p_m_DriverOwned->Blink;
  if ( Blink->Flink != p_m_DriverOwned )
    __fastfail(3u);
  p_m_OwnerListEntry2->Flink = p_m_DriverOwned;
  p_m_OwnerListEntry2->Blink = Blink;
  Blink->Flink = p_m_OwnerListEntry2;
  p_m_DriverOwned->Blink = p_m_OwnerListEntry2;
}
