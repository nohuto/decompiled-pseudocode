/*
 * XREFs of PnpValidateRegistryString @ 0x1403CDBD4
 * Callers:
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgBuildIndirectString @ 0x14087BCA4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x14087F0D0 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140961490 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140961B9C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140962330 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140962510 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     PnpValidateStringData @ 0x1403CDC10 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
