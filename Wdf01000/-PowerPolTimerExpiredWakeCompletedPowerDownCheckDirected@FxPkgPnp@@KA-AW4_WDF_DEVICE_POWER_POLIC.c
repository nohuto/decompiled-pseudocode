/*
 * XREFs of ?PowerPolTimerExpiredWakeCompletedPowerDownCheckDirected@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedPowerDownCheckDirected(FxPkgPnp *This)
{
  __int64 result; // rax

  result = 1443LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1340LL;
  return result;
}
