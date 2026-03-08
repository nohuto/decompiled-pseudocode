/*
 * XREFs of ?PowerGotoDxStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F020
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z @ 0x1C006FB28 (-PowerSendPowerDownEvents@FxPkgPnp@@IEAAXW4FxPowerDownType@@@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStopped(FxPkgPnp *This)
{
  FxPkgPnp::PowerSendPowerDownEvents(This, FxPowerDownTypeImplicit);
  return 789LL;
}
