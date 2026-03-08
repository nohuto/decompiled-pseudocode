/*
 * XREFs of PnpValidateStringData @ 0x1403C1C24
 * Callers:
 *     PnpValidateRegistryString @ 0x1403C1BE8 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x14055FEC8 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x14056004C (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x140877A34 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1408784A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095BA4C (PiDevCfgMakeServiceBootStart.c)
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
