void __fastcall FxPkgPdo::RegisterCallbacks(FxPkgPdo *this, _WDF_PDO_EVENT_CALLBACKS *DispatchTable)
{
  this->m_DeviceResourcesQuery.m_Method = DispatchTable->EvtDeviceResourcesQuery;
  this->m_DeviceResourceRequirementsQuery.m_Method = DispatchTable->EvtDeviceResourceRequirementsQuery;
  this->m_DeviceEject.m_Method = DispatchTable->EvtDeviceEject;
  this->m_DeviceSetLock.m_Method = DispatchTable->EvtDeviceSetLock;
  this->m_DeviceEnableWakeAtBus.m_Method = DispatchTable->EvtDeviceEnableWakeAtBus;
  this->m_DeviceDisableWakeAtBus.m_Method = DispatchTable->EvtDeviceDisableWakeAtBus;
  if ( DispatchTable->Size > 0x38 )
    this->m_DeviceReportedMissing.m_Method = DispatchTable->EvtDeviceReportedMissing;
}
