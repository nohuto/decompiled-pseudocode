__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeEnabled(FxPkgPnp *This)
{
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1301 : 1472;
}
