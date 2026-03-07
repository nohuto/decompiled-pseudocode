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
