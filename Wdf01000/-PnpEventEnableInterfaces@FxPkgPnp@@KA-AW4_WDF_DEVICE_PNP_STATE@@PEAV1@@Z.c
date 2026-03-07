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
