/*
 * XREFs of ?PowerPolSleepingNoWakeDxRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AF90
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C007D228 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingNoWakeDxRequestFailed(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  This->m_InternalFailure = 1;
  IoInvalidateDeviceState(This->m_DeviceBase->m_PhysicalDevice.m_DeviceObject);
  FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  if ( !This->m_ReleaseHardwareAfterDescendantsOnFailure )
    FxPkgPnp::PnpProcessEvent(This, PnpEventPowerDownFailed, v2);
  return 1390LL;
}
