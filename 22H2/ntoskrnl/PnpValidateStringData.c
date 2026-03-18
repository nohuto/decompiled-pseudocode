/*
 * XREFs of PnpValidateStringData @ 0x1403CDC10
 * Callers:
 *     PnpValidateRegistryString @ 0x1403CDBD4 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x140562368 (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405624EC (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086D134 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14087E5B4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14087E8F4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EA6C (PiDevCfgMakeServiceBootStart.c)
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
