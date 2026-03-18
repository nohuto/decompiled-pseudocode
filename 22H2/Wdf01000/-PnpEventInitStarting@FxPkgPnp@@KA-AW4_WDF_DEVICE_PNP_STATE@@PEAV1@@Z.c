/*
 * XREFs of ?PnpEventInitStarting@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C007A8B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventInitStarting(FxPkgPnp *This)
{
  return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 264 : 314;
}
