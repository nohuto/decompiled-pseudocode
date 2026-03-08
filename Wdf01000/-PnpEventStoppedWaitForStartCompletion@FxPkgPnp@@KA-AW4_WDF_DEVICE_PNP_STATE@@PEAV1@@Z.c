/*
 * XREFs of ?PnpEventStoppedWaitForStartCompletion@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B580
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStoppedWaitForStartCompletion(FxPkgPnp *This)
{
  return This->PnpSendStartDeviceDownTheStackOverload(This) != 0 ? 285 : 314;
}
