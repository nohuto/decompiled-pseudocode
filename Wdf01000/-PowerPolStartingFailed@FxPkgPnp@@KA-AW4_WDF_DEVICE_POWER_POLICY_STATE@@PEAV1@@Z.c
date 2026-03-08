/*
 * XREFs of ?PowerPolStartingFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?Stop@FxPowerIdleMachine@@QEAAXXZ @ 0x1C00776EC (-Stop@FxPowerIdleMachine@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingFailed(FxPkgPnp *This)
{
  KIRQL v2; // bl
  unsigned __int8 v3; // r8

  FxPowerIdleMachine::Stop(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  v2 = KfRaiseIrql(2u);
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStartFailed, v3);
  KeLowerIrql(v2);
  return 1472LL;
}
