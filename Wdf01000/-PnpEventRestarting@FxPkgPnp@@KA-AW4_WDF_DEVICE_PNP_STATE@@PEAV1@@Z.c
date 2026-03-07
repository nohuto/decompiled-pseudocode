__int64 __fastcall FxPkgPnp::PnpEventRestarting(FxPkgPnp *This, __int64 a2, unsigned __int8 a3)
{
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, a3);
  return 314LL;
}
