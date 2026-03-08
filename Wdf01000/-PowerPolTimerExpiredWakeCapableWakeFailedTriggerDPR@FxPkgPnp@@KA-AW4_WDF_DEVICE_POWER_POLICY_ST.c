/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeFailedTriggerDPR@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007AB40
 * Callers:
 *     <none>
 * Callees:
 *     ?SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ @ 0x1C0083F0C (-SimulateDevicePowerRequired@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeFailedTriggerDPR(FxPkgPnp *This)
{
  FxPoxInterface::SimulateDevicePowerRequired(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1472LL;
}
