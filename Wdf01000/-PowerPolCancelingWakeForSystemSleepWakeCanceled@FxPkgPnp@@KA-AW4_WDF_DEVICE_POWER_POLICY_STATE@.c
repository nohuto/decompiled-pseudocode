__int64 __fastcall FxPkgPnp::PowerPolCancelingWakeForSystemSleepWakeCanceled(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, NoRetry, RequestD0ForSx);
  v2 = 1472;
  if ( v1 < 0 )
    return 1404;
  return v2;
}
