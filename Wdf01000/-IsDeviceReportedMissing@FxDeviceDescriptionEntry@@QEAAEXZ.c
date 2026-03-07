bool __fastcall FxDeviceDescriptionEntry::IsDeviceReportedMissing(FxDeviceDescriptionEntry *this)
{
  KIRQL v2; // al
  bool v3; // bl

  v2 = KeAcquireSpinLockRaiseToDpc(&this->m_DeviceList->m_ListLock);
  v3 = this->m_DescriptionState == DescriptionReportedMissing;
  KeReleaseSpinLock(&this->m_DeviceList->m_ListLock, v2);
  return v3;
}
