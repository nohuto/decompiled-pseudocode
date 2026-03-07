__int64 __fastcall FxPkgPnp::PnpEventRemovingDisableInterfaces(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8

  FxPkgPnp::PnpReleaseHardware(This);
  FxPkgPnp::PnpCleanupForRemove(This, 1u);
  FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolRemove, v2);
  return 314LL;
}
