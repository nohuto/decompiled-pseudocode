FxDeviceDescriptionEntry *__fastcall FxChildList::SearchBackwardsForMatchingDescriptionLocked(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *Id)
{
  _LIST_ENTRY *Blink; // rbx
  _LIST_ENTRY *p_m_DescriptionListHead; // rsi

  Blink = this->m_DescriptionListHead.Blink;
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  while ( 1 )
  {
    if ( Blink == p_m_DescriptionListHead )
      return 0LL;
    if ( FxChildList::CompareId(this, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Blink[1].Blink, Id) )
      break;
    Blink = Blink->Blink;
  }
  return (FxDeviceDescriptionEntry *)Blink;
}
