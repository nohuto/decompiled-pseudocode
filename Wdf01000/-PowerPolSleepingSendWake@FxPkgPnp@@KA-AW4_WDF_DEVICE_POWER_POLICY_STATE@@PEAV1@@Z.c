/*
 * XREFs of ?PowerPolSleepingSendWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B0B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z @ 0x1C007DE80 (-PowerPolicySendWaitWakeRequest@FxPkgPnp@@IEAAJW4_SYSTEM_POWER_STATE@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingSendWake(FxPkgPnp *This)
{
  _SYSTEM_POWER_STATE m_SystemWake; // edx
  signed int _a1; // eax

  m_SystemWake = This->m_SystemWake;
  This->m_WakeInterruptsKeepConnected = 1;
  _a1 = FxPkgPnp::PowerPolicySendWaitWakeRequest(This, m_SystemWake);
  if ( _a1 >= 0 )
    return 1472LL;
  WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x20u, WPP_PowerPolicyStateMachine_cpp_Traceguids, _a1);
  return 1320LL;
}
