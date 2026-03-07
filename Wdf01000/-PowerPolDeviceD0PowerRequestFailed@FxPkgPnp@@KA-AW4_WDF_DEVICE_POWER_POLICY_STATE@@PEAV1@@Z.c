__int64 __fastcall FxPkgPnp::PowerPolDeviceD0PowerRequestFailed(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  if ( !This->m_ReleaseHardwareAfterDescendantsOnFailure )
    FxPkgPnp::PnpProcessEvent(This, PnpEventPowerUpFailed, v2);
  return 1390LL;
}
