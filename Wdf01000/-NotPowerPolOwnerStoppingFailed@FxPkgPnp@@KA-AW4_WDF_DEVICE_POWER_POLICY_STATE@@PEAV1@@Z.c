__int64 __fastcall FxPkgPnp::NotPowerPolOwnerStoppingFailed(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStopFailed, a3);
  return 1379LL;
}
