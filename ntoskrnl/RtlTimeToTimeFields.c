/*
 * XREFs of RtlTimeToTimeFields @ 0x1402D14B0
 * Callers:
 *     ExInitializeUtcTimeZoneBias @ 0x14080F488 (ExInitializeUtcTimeZoneBias.c)
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1408119D0 (RtlCutoverTimeToSystemTime.c)
 *     ExpRefreshSystemTime @ 0x1408132EC (ExpRefreshSystemTime.c)
 *     IopCopyBootLogRegistryToFile @ 0x140818E28 (IopCopyBootLogRegistryToFile.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085A0F4 (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x14085FC80 (ExpKernelExpirationDateCacheProvider.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140874BA8 (PiDevCfgBuildDriverConfigurationId.c)
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140874D18 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140930198 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x1409F54B0 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140A93480 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140AA7AF4 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x140AE7CAC (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x1402D14C8 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
