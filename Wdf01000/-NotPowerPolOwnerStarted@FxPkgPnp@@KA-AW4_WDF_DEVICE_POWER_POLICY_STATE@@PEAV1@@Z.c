__int64 __fastcall FxPkgPnp::NotPowerPolOwnerStarted(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolStarted, a3);
  return 1282LL;
}
