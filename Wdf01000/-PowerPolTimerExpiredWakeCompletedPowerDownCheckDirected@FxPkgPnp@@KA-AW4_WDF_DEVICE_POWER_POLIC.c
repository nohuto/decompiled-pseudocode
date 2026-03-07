__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCompletedPowerDownCheckDirected(FxPkgPnp *This)
{
  __int64 result; // rax

  result = 1443LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1340LL;
  return result;
}
