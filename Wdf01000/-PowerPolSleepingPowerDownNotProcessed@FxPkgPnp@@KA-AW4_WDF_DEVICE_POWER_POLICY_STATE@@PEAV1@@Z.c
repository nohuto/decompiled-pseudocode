__int64 __fastcall FxPkgPnp::PowerPolSleepingPowerDownNotProcessed(FxPkgPnp *This)
{
  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 1295LL;
}
