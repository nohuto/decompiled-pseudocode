/*
 * XREFs of ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C007B820
 * Callers:
 *     <none>
 * Callees:
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1C00793A8 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007A474 (-FreezeIdleTimeoutManagementStatus@IdleTimeoutManagement@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x1C0083C28 (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStartingPoweredUp(FxPkgPnp *This)
{
  IdleTimeoutManagement::FreezeIdleTimeoutManagementStatus(
    &This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.m_TimeoutMgmt,
    This->m_Globals);
  if ( FxPoxInterface::InitializeComponents(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) < 0 )
    return 1425LL;
  FxPkgPnp::SleepStudyEvaluateParticipation(This);
  return 1282LL;
}
