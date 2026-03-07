__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredNoWake(FxPkgPnp *This)
{
  int v2; // eax
  FxPowerPolicyOwnerSettings *m_Owner; // r8

  v2 = FxPoxInterface::NotifyDevicePowerDown(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  m_Owner = This->m_PowerPolicyMachine.m_Owner;
  if ( v2 >= 0 )
    return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, m_Owner->m_IdleSettings.DxState) != 0 ? 1472 : 1416;
  _InterlockedCompareExchange(&m_Owner->m_PoxInterface.m_DirectedTransitionActive, 0, 0);
  return 1426LL;
}
