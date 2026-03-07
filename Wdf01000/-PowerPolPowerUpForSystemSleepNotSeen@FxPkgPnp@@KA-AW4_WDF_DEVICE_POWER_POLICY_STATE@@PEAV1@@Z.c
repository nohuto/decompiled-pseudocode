__int64 __fastcall FxPkgPnp::PowerPolPowerUpForSystemSleepNotSeen(FxPkgPnp *This)
{
  if ( This->m_PendingSystemPowerIrp )
    FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1389LL;
}
