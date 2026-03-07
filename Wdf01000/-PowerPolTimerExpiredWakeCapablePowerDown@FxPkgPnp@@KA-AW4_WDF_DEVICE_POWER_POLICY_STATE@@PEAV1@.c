__int64 __fastcall FxPkgPnp::PowerPolTimerExpiredWakeCapablePowerDown(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCanIdlePowerDown(This, This->m_PowerPolicyMachine.m_Owner->m_IdleSettings.DxState) != 0
       ? 1472
       : 1338;
}
