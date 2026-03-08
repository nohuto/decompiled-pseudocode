/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C880
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ @ 0x1C0083DD0 (-NotifyDeviceDirectedPoweredDown@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeFailedWaitForDirectedUp(FxPkgPnp *This)
{
  FxPoxInterface::NotifyDeviceDirectedPoweredDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
