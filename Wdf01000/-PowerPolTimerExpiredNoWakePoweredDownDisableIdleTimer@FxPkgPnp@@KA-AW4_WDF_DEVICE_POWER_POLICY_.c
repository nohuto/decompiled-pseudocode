__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWakePoweredDownDisableIdleTimer(FxPkgPnp *This)
{
  __int64 result; // rax

  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  result = 1438LL;
  if ( !_InterlockedCompareExchange(
          &This->m_PowerPolicyMachine.m_Owner->m_PoxInterface.m_DirectedTransitionActive,
          0,
          0) )
    return 1289LL;
  return result;
}
