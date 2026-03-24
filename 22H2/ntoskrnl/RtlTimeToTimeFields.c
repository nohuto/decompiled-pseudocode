/*
 * XREFs of RtlTimeToTimeFields @ 0x14036DE60
 * Callers:
 *     _CmSetDeviceMappedPropertyFromDriverKeyRegValue @ 0x140736C30 (_CmSetDeviceMappedPropertyFromDriverKeyRegValue.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140737538 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140739908 (PiDevCfgBuildDriverConfigurationId.c)
 *     IopCopyBootLogRegistryToFile @ 0x14079A4DC (IopCopyBootLogRegistryToFile.c)
 *     ExpRefreshSystemTime @ 0x1407A94CC (ExpRefreshSystemTime.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407A9984 (ExpRefreshTimeZoneInformation.c)
 *     RtlCutoverTimeToSystemTime @ 0x1407AA100 (RtlCutoverTimeToSystemTime.c)
 *     CmpUpdateReorganizeRegistryValues @ 0x1407CEEAC (CmpUpdateReorganizeRegistryValues.c)
 *     ExpKernelExpirationDateCacheProvider @ 0x1407D3910 (ExpKernelExpirationDateCacheProvider.c)
 *     ExInitializeUtcTimeZoneBias @ 0x1407D4A60 (ExInitializeUtcTimeZoneBias.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140864104 (HalpUtcTimeToAcpiRealTime.c)
 *     NtSetSystemTime @ 0x14094BD60 (NtSetSystemTime.c)
 *     HaliSetWakeAlarm @ 0x1409987C0 (HaliSetWakeAlarm.c)
 *     ExpSetSystemTime @ 0x140998FB8 (ExpSetSystemTime.c)
 *     HdlspProcessDumpCommand @ 0x1409EFC18 (HdlspProcessDumpCommand.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlpTimeToTimeFields @ 0x14030D368 (RtlpTimeToTimeFields.c)
 */

void __stdcall RtlTimeToTimeFields(PLARGE_INTEGER Time, PTIME_FIELDS TimeFields)
{
  __int64 v2; // r8

  RtlpTimeToTimeFields((__int64 *)Time, TimeFields, v2);
}
