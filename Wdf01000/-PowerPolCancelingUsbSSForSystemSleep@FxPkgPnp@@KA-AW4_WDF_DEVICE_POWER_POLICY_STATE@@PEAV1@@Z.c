__int64 __fastcall FxPkgPnp::PowerPolCancelingUsbSSForSystemSleep(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1472 : 1356;
}
