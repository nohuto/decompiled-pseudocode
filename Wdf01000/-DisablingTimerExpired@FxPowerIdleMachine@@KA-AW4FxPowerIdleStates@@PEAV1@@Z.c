__int64 __fastcall FxPowerIdleMachine::DisablingTimerExpired(FxPowerIdleMachine *This, __int64 a2, unsigned __int8 a3)
{
  This->m_Flags &= ~8u;
  FxPkgPnp::PowerPolicyProcessEvent((FxPkgPnp *)This[2].m_TagTracker, PwrPolPowerTimeoutExpired, a3);
  return 5LL;
}
