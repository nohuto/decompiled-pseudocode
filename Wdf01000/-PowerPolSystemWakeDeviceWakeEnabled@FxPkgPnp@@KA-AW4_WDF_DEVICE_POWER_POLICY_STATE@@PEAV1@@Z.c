/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeEnabled@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C000
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C007D094 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeEnabled(FxPkgPnp *This)
{
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1301 : 1472;
}
