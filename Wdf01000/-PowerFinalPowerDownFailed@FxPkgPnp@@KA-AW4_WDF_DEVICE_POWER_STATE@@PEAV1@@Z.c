__int64 __fastcall FxPkgPnp::PowerFinalPowerDownFailed(FxPkgPnp *This)
{
  FxPkgPnp::PowerSendPowerDownFailureEvent(This, FxPowerDownTypeImplicit);
  return 789LL;
}
