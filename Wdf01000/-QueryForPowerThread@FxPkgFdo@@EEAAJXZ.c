int __fastcall FxPkgFdo::QueryForPowerThread(FxPkgFdo *this)
{
  int result; // eax

  result = FxDeviceBase::QueryForInterface(
             this->m_DeviceBase,
             &FxPkgPnp::GUID_POWER_THREAD_INTERFACE,
             &this->m_PowerThreadInterface.Interface,
             0x28u,
             1u,
             0LL,
             this->m_DeviceBase->m_AttachedDevice.m_DeviceObject);
  if ( result < 0 )
    return FxPkgPnp::CreatePowerThread(this);
  this->m_HasPowerThread = 1;
  return result;
}
