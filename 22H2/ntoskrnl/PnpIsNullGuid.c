/*
 * XREFs of PnpIsNullGuid @ 0x140786D44
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407869A0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiPnpRtlCmActionCallback @ 0x140789030 (PiPnpRtlCmActionCallback.c)
 *     PiDqIrpQueryCreate @ 0x1407F97F8 (PiDqIrpQueryCreate.c)
 *     IopRegisterDeviceInterface @ 0x140866CCC (IopRegisterDeviceInterface.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14087BF60 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgFindDeviceDriver @ 0x14087D884 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14095FC00 (PiDevCfgResetDeviceDriverSettings.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&NullGuid, Source2, 0x10uLL) == 16;
}
