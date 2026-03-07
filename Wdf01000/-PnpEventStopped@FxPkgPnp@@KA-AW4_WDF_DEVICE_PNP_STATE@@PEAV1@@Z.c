__int64 __fastcall FxPkgPnp::PnpEventStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // edi
  FxDeviceBase *m_DeviceBase; // rcx

  if ( FxPkgPnp::PnpReleaseHardware(This) < 0 )
  {
    m_DeviceBase = This->m_DeviceBase;
    This->m_InternalFailure = 1;
    IoInvalidateDeviceState(m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
    v3 = 299;
  }
  else
  {
    FxPkgPnp::NotifyResourceobjectsToReleaseResources(This);
    v3 = 314;
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return v3;
}
