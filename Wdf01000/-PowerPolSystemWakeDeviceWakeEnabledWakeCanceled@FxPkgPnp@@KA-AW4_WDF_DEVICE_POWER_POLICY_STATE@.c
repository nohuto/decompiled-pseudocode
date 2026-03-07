__int64 __fastcall FxPkgPnp::PowerPolSystemWakeDeviceWakeEnabledWakeCanceled(FxPkgPnp *This)
{
  int v1; // eax
  unsigned int v2; // ecx

  v1 = FxPkgPnp::PowerPolicySendDevicePowerRequest(This, PowerDeviceD0, Retry, RequestD0ForS0);
  v2 = 1472;
  if ( v1 < 0 )
    return 1470;
  return v2;
}
