FxDeviceDescriptionEntry *__fastcall FxChildList::SearchBackwardsForMatchingModificationLocked(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Id)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_ModificationListHead; // rsi

  Blink = this->m_ModificationListHead.Blink;
  p_m_ModificationListHead = &this->m_ModificationListHead;
  while ( 1 )
  {
    if ( Blink == p_m_ModificationListHead )
      return 0LL;
    if ( FxChildList::CompareId(this, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Blink[-1].Flink, Id) )
      break;
    Blink = Blink->Blink;
  }
  return (FxDeviceDescriptionEntry *)&Blink[-3].Blink;
}
