/*
 * XREFs of RtlTimeToTimeFields @ 0x14036E9A0
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A788 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B090 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D468 (PiDevCfgBuildDriverConfigurationId.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790278 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1407A909C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9554 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407A9CD0 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEF8C (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407D39F0 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4B40 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1408640B4 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x14094BD10 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x1409987D0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140998FC8 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409EFC18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A3B6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x1402B5C18 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
