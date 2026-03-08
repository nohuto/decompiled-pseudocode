/*
 * XREFs of ?PnpEventInitStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitStarting(FxPkgPnp *This)
{
  return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 264 : 314;
}
