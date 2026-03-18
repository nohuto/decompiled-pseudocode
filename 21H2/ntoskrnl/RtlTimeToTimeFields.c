/*
 * XREFs of RtlTimeToTimeFields @ 0x1402D1A30
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x1407446E0 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1407459F4 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140746B5C (PiDevCfgBuildDriverConfigurationId.c)
 *     IopCopyBootLogRegistryToFile @ 0x14082848C (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1408357A0 (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x140835844 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x140835D14 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x14085EDEC (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x140864400 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140864D14 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x1409082EC (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x1409F8350 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x140A523B0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140A52E00 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x140AA9C94 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x1402D1A48 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  RtlpTimeToTimeFields(Time, TimeFields);
}
