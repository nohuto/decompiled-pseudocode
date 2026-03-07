__int64 __fastcall FxPkgPnp::PowerReportPowerDownFailed(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  FxPkgPnp::PowerSendPowerDownFailureEvent(This, FxPowerDownTypeExplicit);
  return 873LL;
}
