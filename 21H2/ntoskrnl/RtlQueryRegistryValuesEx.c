/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x1406BBF50
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x1402CD240 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403AF83C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403AFAA4 (EtwpReadPerSiloConfigParameters.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B7EC4 (RtlpFindRegTziForCurrentYear.c)
 *     sub_1405B2E48 @ 0x1405B2E48 (sub_1405B2E48.c)
 *     ExpReadTimeZoneInformation @ 0x1405D1A44 (ExpReadTimeZoneInformation.c)
 *     SmQueryRegistry @ 0x140A4B4A4 (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6CE38 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A6F1BC (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140A70DB4 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140640A68 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, const WCHAR *a2, __int64 a3, __int64 a4)
{
  return RtlpQueryRegistryValues(a1, a2, a3, a4);
}
