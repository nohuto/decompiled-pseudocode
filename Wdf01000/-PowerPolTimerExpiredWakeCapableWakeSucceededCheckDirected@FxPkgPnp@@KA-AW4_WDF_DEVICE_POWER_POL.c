__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapableWakeSucceededCheckDirected(FxPkgPnp *This)
{
  __int64 result; // rax

  result = 1451LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1360LL;
  return result;
}
