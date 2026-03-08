/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C00057E8
 * Callers:
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000578C (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C0006B8C (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C006E82C (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0077140 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C007D384 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  BOOLEAN result; // al
  struct _EX_TIMER *m_KernelExTimer; // rcx

  result = 1;
  if ( !this->m_Timer.m_IsExtTimer )
    return KeCancelTimer(&this->m_Timer.KernelTimer);
  m_KernelExTimer = this->m_Timer.m_KernelExTimer;
  if ( m_KernelExTimer )
    return ExCancelTimer(m_KernelExTimer, 0LL);
  return result;
}
