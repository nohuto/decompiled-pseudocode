__int64 __fastcall FxPkgPnp::PowerGotoDxStopped(FxPkgPnp *This)
{
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
