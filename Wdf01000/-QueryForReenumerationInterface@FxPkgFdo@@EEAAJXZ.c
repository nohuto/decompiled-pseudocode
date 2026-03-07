__int64 __fastcall FxPkgFdo::QueryForReenumerationInterface(FxPkgFdo *this)
{
  _REENUMERATE_SELF_INTERFACE_STANDARD *p_m_SurpriseRemoveAndReenumerateSelfInterface; // rdi
  int WorkItemForSetDeviceFailed; // esi

  p_m_SurpriseRemoveAndReenumerateSelfInterface = &this->m_SurpriseRemoveAndReenumerateSelfInterface;
  if ( this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf )
    return 0LL;
  *(_OWORD *)&p_m_SurpriseRemoveAndReenumerateSelfInterface->Size = 0LL;
  *(_OWORD *)&this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceReference = 0LL;
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  *(_DWORD *)&p_m_SurpriseRemoveAndReenumerateSelfInterface->Size = 65576;
  FxDeviceBase::QueryForInterface(
    this->m_DeviceBase,
    &GUID_REENUMERATE_SELF_INTERFACE_STANDARD,
    (_INTERFACE *)&this->m_SurpriseRemoveAndReenumerateSelfInterface,
    0x28u,
    1u,
    0LL,
    this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  WorkItemForSetDeviceFailed = 0;
  if ( p_m_SurpriseRemoveAndReenumerateSelfInterface->SurpriseRemoveAndReenumerateSelf )
  {
    WorkItemForSetDeviceFailed = FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
    if ( WorkItemForSetDeviceFailed < 0 )
      this->ReleaseReenumerationInterface(this);
  }
  return (unsigned int)WorkItemForSetDeviceFailed;
}
