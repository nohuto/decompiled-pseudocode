/*
 * XREFs of ?PowerEnablingWakeAtBusNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E7E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ @ 0x1C006DF68 (-PowerCompletePendedWakeIrp@FxPkgPnp@@IEAAXXZ.c)
 *     ?PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z @ 0x1C006F364 (-PowerMakeWakeRequestNonCancelable@FxPkgPnp@@IEAAEJ@Z.c)
 */

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
