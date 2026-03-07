void __fastcall FxChildList::MarkDescriptionNotPresentWorker(
        FxChildList *this,
        FxDeviceDescriptionEntry *DescriptionEntry,
        unsigned __int8 ModificationCanBeQueued)
{
  _LIST_ENTRY *p_m_ModificationLink; // r9
  _LIST_ENTRY *Blink; // rdx

  p_m_ModificationLink = &DescriptionEntry->m_ModificationLink;
  if ( !ModificationCanBeQueued || p_m_ModificationLink->Flink == p_m_ModificationLink )
  {
    DescriptionEntry->m_FoundInLastScan = 0;
    DescriptionEntry->m_ModificationState = ModificationRemoveNotify;
    Blink = this->m_ModificationListHead.Blink;
    if ( Blink->Flink != &this->m_ModificationListHead )
      __fastfail(3u);
    p_m_ModificationLink->Flink = &this->m_ModificationListHead;
    p_m_ModificationLink->Blink = Blink;
    Blink->Flink = p_m_ModificationLink;
    this->m_ModificationListHead.Blink = p_m_ModificationLink;
  }
}
