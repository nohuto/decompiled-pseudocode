/*
 * XREFs of ?PnpEventFdoRemovedOverload@FxPkgFdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0084350
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ @ 0x1C007AFD0 (-PnpEventRemovedCommonCode@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgFdo::PnpEventFdoRemovedOverload(FxPkgFdo *this)
{
  FxPkgPnp::PnpEventRemovedCommonCode(this);
  return 309LL;
}
