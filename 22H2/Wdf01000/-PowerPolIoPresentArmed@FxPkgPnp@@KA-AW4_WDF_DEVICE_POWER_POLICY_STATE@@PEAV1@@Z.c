/*
 * XREFs of ?PowerPolIoPresentArmed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0086BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ @ 0x1C00887E4 (-PowerPolicyCancelWaitWake@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolIoPresentArmed(FxPkgPnp *This)
{
  __int64 result; // rax

  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  result = 1345LL;
  if ( !This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped )
    return 1472LL;
  return result;
}
