__int64 __fastcall FxPkgPnp::PowerPolStopping(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicyBlockChildrenPowerUp(This);
  FxPkgPnp::PowerProcessEvent(This, 0x80u, 0);
  return 1472LL;
}
