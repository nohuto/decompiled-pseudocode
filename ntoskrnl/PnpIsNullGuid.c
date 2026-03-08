/*
 * XREFs of PnpIsNullGuid @ 0x140689294
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlCmActionCallback @ 0x1406CE2F0 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 *     IopRegisterDeviceInterface @ 0x14086A664 (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140874BA8 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087867C (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095CBE0 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
