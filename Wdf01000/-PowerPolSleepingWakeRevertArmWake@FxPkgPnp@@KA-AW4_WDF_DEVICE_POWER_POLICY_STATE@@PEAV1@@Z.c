/*
 * XREFs of ?PowerPolSleepingWakeRevertArmWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B1F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C007D2A8 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeRevertArmWake(FxPkgPnp *This)
{
  WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x1Au, WPP_PowerPolicyStateMachine_cpp_Traceguids);
  FxPkgPnp::PowerPolicyDisarmWakeFromSx(This);
  return 1468LL;
}
