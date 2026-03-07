unsigned __int8 __fastcall FxPkgPnp::PowerIndicateWaitWakeStatus(FxPkgPnp *this, int WaitWakeStatus)
{
  FxPowerEvent v4; // edx

  if ( !FxPkgPnp::PowerMakeWakeRequestNonCancelable(this, WaitWakeStatus) )
    return 0;
  if ( WaitWakeStatus == -1073741536 )
  {
    v4 = PowerWakeCanceled;
  }
  else
  {
    v4 = PowerWakeFailed;
    if ( WaitWakeStatus >= 0 )
      v4 = PowerWakeSucceeded;
  }
  FxPkgPnp::PowerProcessEvent(this, v4, 0);
  return 1;
}
