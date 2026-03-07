void __fastcall FxChildList::GetAddressDescriptionFromEntry(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v7; // bl

  p_m_ListLock = &this->m_ListLock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  FxChildList::CopyAddress(this, AddressDescription, Entry->m_AddressDescription);
  KeReleaseSpinLock(p_m_ListLock, v7);
}
