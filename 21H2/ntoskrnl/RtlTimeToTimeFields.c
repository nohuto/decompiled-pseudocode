/*
 * XREFs of RtlTimeToTimeFields @ 0x14036EB50
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x14073A948 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x14073B250 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x14073D628 (PiDevCfgBuildDriverConfigurationId.c)
 *     IopCopyBootLogRegistryToFile @ 0x140791828 (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1407A929C (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9754 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407A9ED0 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CF0FC (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407D3B60 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4CB0 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x14086420C (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x14094BEE0 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x1409997D0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140999FC8 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409F0C18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x140233DF8 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
