__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeInterruptFired(FxPkgPnp *This)
{
  This->m_SystemWokenByWakeInterrupt = 1;
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1303 : 1472;
}
