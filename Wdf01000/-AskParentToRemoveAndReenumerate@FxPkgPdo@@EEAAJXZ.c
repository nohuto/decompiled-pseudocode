__int64 __fastcall FxPkgPdo::AskParentToRemoveAndReenumerate(FxPkgPdo *this)
{
  FxDeviceDescriptionEntry *m_Description; // rcx

  m_Description = this->m_Description;
  if ( !m_Description || this->m_Static )
    return 3221226021LL;
  FxChildList::ReenumerateEntry(m_Description->m_DeviceList, m_Description);
  return 0LL;
}
