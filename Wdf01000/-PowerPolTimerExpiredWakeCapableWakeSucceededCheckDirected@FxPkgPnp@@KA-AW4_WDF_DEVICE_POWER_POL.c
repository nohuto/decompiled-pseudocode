/*
 * XREFs of ?PowerPolTimerExpiredWakeCapableWakeSucceededCheckDirected@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C8F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeSucceededCheckDirected(FxPkgPnp *This)
{
  __int64 result; // rax

  result = 1451LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1360LL;
  return result;
}
