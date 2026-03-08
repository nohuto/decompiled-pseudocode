/*
 * XREFs of ?TimedOutIoIncrement@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00777B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C007D66C (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPowerIdleMachine::TimedOutIoIncrement(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  const void *_a1; // rax
  __int64 v5; // r10

  if ( (This->m_Flags & 0x40) != 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)This[2].m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v5 + 16), 4u, 0xCu, 0xAu, WPP_PowerIdleStateMachine_cpp_Traceguids, _a1);
  }
  else
  {
    FxPkgPnp::PowerPolicyProcessEvent((FxPkgPnp *)This[2].m_TagTracker, PwrPolIoPresent, a3);
    This->m_Flags |= 0x40u;
  }
  return 12LL;
}
