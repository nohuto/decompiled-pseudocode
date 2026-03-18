/*
 * XREFs of PnpValidateRegistryDword @ 0x1403C655C
 * Callers:
 *     PnpGetRegistryDword @ 0x1403A070C (PnpGetRegistryDword.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1408790C0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1408792EC (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x140879D2C (PiDevCfgVerifyService.c)
 *     PiDevCfgMigrateDevice @ 0x14087C44C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14087CF74 (PiDevCfgConfigureDeviceKeys.c)
 *     PipDmgInitReadGroupPolicy @ 0x14095B1A0 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14095DB3C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14095EA6C (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14095EC94 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14095F728 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14095F798 (PiDevCfgQueryPolicyStringList.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
