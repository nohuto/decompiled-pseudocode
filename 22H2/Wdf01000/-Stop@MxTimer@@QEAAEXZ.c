/*
 * XREFs of ?Stop@MxTimer@@QEAAEXZ @ 0x1C0019190
 * Callers:
 *     ?CancelTimer@FxRequestBase@@QEAAEXZ @ 0x1C000C930 (-CancelTimer@FxRequestBase@@QEAAEXZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C000D5C8 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z @ 0x1C0012030 (-PowerPolicyEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_POLICY_STATE@@@Z.c)
 *     ?PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z @ 0x1C0012400 (-PowerEnterNewState@FxPkgPnp@@IEAAXW4_WDF_DEVICE_POWER_STATE@@@Z.c)
 *     ?CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ @ 0x1C0019160 (-CancelIdleTimer@FxPowerIdleMachine@@IEAAEXZ.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall MxTimer::Stop(MxTimer *this)
{
  if ( this->m_Timer.m_IsExtTimer )
    return ExCancelTimer(this->m_Timer.m_KernelExTimer, 0LL);
  else
    return KeCancelTimer(&this->m_Timer.KernelTimer);
}
