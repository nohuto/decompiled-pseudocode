void __fastcall FxPkgFdo::FxPkgFdo(FxPkgFdo *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxDevice *Device)
{
  FxPkgPnp::FxPkgPnp(this, FxDriverGlobals, Device, 0x1101u);
  this->m_DeviceInterfacesCanBeEnabled = 1;
  this->__vftable = (FxPkgFdo_vtbl *)FxPkgFdo::`vftable';
  this->m_DeviceFilterAddResourceRequirements.m_Method = 0LL;
  this->m_DeviceFilterRemoveResourceRequirements.m_Method = 0LL;
  this->m_DeviceRemoveAddedResources.m_Method = 0LL;
  this->m_DefaultDeviceList = 0LL;
  this->m_StaticDeviceList = 0LL;
  this->m_DefaultTarget = 0LL;
  this->m_SelfTarget = 0LL;
  this->m_Filter = 0;
  *(_OWORD *)&this->m_SurpriseRemoveAndReenumerateSelfInterface.Size = 0LL;
  *(_OWORD *)&this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceReference = 0LL;
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
}
