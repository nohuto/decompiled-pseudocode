void __fastcall FxChildList::Initialize(FxChildList *this, _WDF_CHILD_LIST_CONFIG *Config)
{
  FxDeviceBase *m_DeviceBase; // rcx

  FxObject::MarkNoDeleteDDI(this, ObjectLock);
  m_DeviceBase = this->m_DeviceBase;
  this->m_IdentificationDescriptionSize = Config->IdentificationDescriptionSize;
  this->m_AddressDescriptionSize = Config->AddressDescriptionSize;
  this->m_EvtCreateDevice.m_Method = Config->EvtChildListCreateDevice;
  this->m_EvtScanForChildren.m_Method = Config->EvtChildListScanForChildren;
  this->m_EvtIdentificationDescriptionDuplicate = Config->EvtChildListIdentificationDescriptionDuplicate;
  this->m_EvtIdentificationDescriptionCopy = Config->EvtChildListIdentificationDescriptionCopy;
  this->m_EvtIdentificationDescriptionCleanup = Config->EvtChildListIdentificationDescriptionCleanup;
  this->m_EvtIdentificationDescriptionCompare = Config->EvtChildListIdentificationDescriptionCompare;
  this->m_EvtAddressDescriptionDuplicate = Config->EvtChildListAddressDescriptionDuplicate;
  this->m_EvtAddressDescriptionCopy = Config->EvtChildListAddressDescriptionCopy;
  this->m_EvtAddressDescriptionCleanup = Config->EvtChildListAddressDescriptionCleanup;
  this->m_EvtChildListDeviceReenumerated = Config->EvtChildListDeviceReenumerated;
  m_DeviceBase->AddChildList(m_DeviceBase, this);
  this->m_IsAdded = 1;
}
