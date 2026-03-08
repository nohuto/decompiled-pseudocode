/*
 * XREFs of ?PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007C320
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C00771C8 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer(FxPkgPnp *This)
{
  __int64 result; // rax

  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  result = 1438LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1289LL;
  return result;
}
