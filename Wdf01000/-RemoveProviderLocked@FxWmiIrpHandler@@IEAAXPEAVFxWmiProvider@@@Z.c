void __fastcall FxWmiIrpHandler::RemoveProviderLocked(FxWmiIrpHandler *this, FxWmiProvider *Provider)
{
  _LIST_ENTRY *p_m_ListEntry; // rdx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax

  --this->m_NumProviders;
  p_m_ListEntry = &Provider->m_ListEntry;
  Flink = p_m_ListEntry->Flink;
  if ( p_m_ListEntry->Flink->Blink != p_m_ListEntry || (Blink = p_m_ListEntry->Blink, Blink->Flink != p_m_ListEntry) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_m_ListEntry->Blink = p_m_ListEntry;
  p_m_ListEntry->Flink = p_m_ListEntry;
}
