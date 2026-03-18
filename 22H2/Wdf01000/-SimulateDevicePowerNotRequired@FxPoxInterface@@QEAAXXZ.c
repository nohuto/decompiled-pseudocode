/*
 * XREFs of ?SimulateDevicePowerNotRequired@FxPoxInterface@@QEAAXXZ @ 0x1C00103C8
 * Callers:
 *     ?PowerPolSleeping@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0010030 (-PowerPolSleeping@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?PowerPolIdleCapableDirectedDownTriggerDPNR@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086B30 (-PowerPolIdleCapableDirectedDownTriggerDPNR@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV.c)
 * Callees:
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C000E53C (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::SimulateDevicePowerNotRequired(FxPoxInterface *this)
{
  if ( (this->m_PkgPnp->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt.m_IdleTimeoutStatus & 2) != 0 )
    FxPoxInterface::PowerNotRequiredCallbackWorker(this, 0);
}
