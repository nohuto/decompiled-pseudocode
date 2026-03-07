__int64 __fastcall FxPkgPnp::PnpEventQueriedRemoving(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStop, a3);
  FxPkgPnp::PnpPowerDereferenceSelf(This);
  return 314LL;
}
