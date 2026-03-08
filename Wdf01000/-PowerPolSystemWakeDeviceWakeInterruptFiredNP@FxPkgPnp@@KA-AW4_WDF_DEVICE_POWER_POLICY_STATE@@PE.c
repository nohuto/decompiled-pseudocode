/*
 * XREFs of ?PowerPolSystemWakeDeviceWakeInterruptFiredNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C007D094 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeInterruptFiredNP(FxPkgPnp *This)
{
  This->m_SystemWokenByWakeInterrupt = 1;
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 34082 : 1472;
}
