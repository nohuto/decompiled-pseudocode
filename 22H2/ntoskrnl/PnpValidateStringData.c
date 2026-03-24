/*
 * XREFs of PnpValidateStringData @ 0x14036E438
 * Callers:
 *     PnpValidateRegistryString @ 0x14036E3FC (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x14050E3E4 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14050E568 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x1407392E4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14076942C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14077B23C (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14077BD90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1408A6E44 (PiDevCfgMakeServiceBootStart.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
