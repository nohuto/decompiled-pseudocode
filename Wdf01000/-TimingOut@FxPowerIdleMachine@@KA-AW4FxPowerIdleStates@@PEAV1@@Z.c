/*
 * XREFs of ?TimingOut@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077820
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimingOut(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent((FxPkgPnp *)This[2].m_TagTracker, PwrPolPowerTimeoutExpired, a3);
  This->m_Flags &= ~8u;
  KeClearEvent(&This->m_D0NotificationEvent.m_Event.m_Event);
  return 12LL;
}
