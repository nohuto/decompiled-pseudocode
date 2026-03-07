bool __fastcall FxDeviceDescriptionEntry::MatchStateToFlags(FxDeviceDescriptionEntry *this, char Flags)
{
  FxChildListDescriptionState *p_m_DescriptionState; // rax

  p_m_DescriptionState = &this->m_DescriptionState;
  if ( (Flags & 1) != 0 && *p_m_DescriptionState == DescriptionInstantiatedHasObject
    || (Flags & 2) != 0 && (unsigned int)(*p_m_DescriptionState - 3) <= 1 )
  {
    return 1;
  }
  if ( (Flags & 4) != 0 )
    return *p_m_DescriptionState == DescriptionPresentNeedsInstantiation;
  return 0;
}
