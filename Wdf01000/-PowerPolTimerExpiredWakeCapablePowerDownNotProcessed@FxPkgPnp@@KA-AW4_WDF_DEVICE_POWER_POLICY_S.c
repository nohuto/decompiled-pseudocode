/*
 * XREFs of ?PowerPolTimerExpiredWakeCapablePowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDownNotProcessed(FxPkgPnp *This)
{
  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  return 1338LL;
}
