__int64 __fastcall FxPkgPnp::NotPowerPolOwnerRemoved(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PnpProcessEvent(This, PnpEventPwrPolRemoved, a3);
  return 1472LL;
}
