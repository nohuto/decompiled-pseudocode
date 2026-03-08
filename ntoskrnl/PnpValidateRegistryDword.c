/*
 * XREFs of PnpValidateRegistryDword @ 0x1403C0C9C
 * Callers:
 *     PnpGetRegistryDword @ 0x14039BC5C (PnpGetRegistryDword.c)
 *     PiDevCfgMigrateDevice @ 0x1408758B8 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x140876750 (PiDevCfgVerifyService.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140876A38 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408776A0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14087FC64 (PiDevCfgVerifyDeviceAllowed.c)
 *     PipDmgInitReadGroupPolicy @ 0x140958180 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095AB1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095BA4C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095BC74 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095C708 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095C778 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
