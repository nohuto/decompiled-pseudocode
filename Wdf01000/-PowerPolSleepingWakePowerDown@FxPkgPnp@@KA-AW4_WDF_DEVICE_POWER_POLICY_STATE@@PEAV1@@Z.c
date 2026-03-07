__int64 __fastcall FxPkgPnp::PowerPolSleepingWakePowerDown(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicyPowerDownForSx(This, This->m_PowerPolicyMachine.m_Owner->m_WakeSettings.DxState, NoRetry);
  v2 = 1472;
  if ( v1 < 0 )
    return 1319;
  return v2;
}
