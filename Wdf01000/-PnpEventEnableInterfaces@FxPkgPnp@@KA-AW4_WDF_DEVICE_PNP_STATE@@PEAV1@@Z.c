/*
 * XREFs of ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C006A2EC (-PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventEnableInterfaces(FxPkgPnp *This, _FX_DRIVER_GLOBALS *a2)
{
  int v2; // eax
  unsigned int v3; // ecx

  v2 = FxPkgPnp::PnpEnableInterfacesAndRegisterWmi(This, a2);
  v3 = 281;
  if ( v2 < 0 )
    return 296;
  return v3;
}
