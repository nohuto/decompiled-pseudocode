__int64 __fastcall FxPkgPnp::PowerEnablingWakeAtBusNP(FxPkgPnp *This)
{
  int v2; // eax

  v2 = This->PowerEnableWakeAtBusOverload(This);
  if ( v2 >= 0 )
    return 33548LL;
  if ( FxPkgPnp::PowerMakeWakeRequestNonCancelable(This, v2) )
    FxPkgPnp::PowerCompletePendedWakeIrp(This);
  return 33546LL;
}
