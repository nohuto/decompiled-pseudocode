__int64 __fastcall FxPkgPnp::PowerPolSleepingWakeCancelWakeNP(FxPkgPnp *This)
{
  if ( FxPkgPnp::PowerPolicyCancelWaitWake(This) )
    return 1472LL;
  else
    return This->m_PowerPolicyMachine.m_Owner->m_WakeCompletionEventDropped != 0 ? 1320 : 1472;
}
