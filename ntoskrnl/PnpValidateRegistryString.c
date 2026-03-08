/*
 * XREFs of PnpValidateRegistryString @ 0x1403C1BE8
 * Callers:
 *     PiDevCfgBuildIndirectString @ 0x1408748EC (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariable @ 0x140878210 (PiDevCfgResolveVariable.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095C778 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14095E470 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14095EB7C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14095F310 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14095F4F0 (PiDevCfgResolveVariableSwitchCase.c)
 * Callees:
 *     PnpValidateStringData @ 0x1403C1C24 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
