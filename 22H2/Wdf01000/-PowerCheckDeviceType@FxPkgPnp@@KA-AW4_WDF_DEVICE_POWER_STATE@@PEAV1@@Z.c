/*
 * XREFs of ?PowerCheckDeviceType@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00195D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerCheckDeviceType(FxPkgPnp *This)
{
  return ((__int64 (__fastcall *)(FxPkgPnp *))This->PowerCheckDeviceTypeOverload)(This);
}
