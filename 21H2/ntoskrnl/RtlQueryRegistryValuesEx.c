/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x14061AFD0
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x14024B740 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403AF9AC (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403AFC14 (EtwpReadPerSiloConfigParameters.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B8034 (RtlpFindRegTziForCurrentYear.c)
 *     sub_1405B3078 @ 0x1405B3078 (sub_1405B3078.c)
 *     ExpReadTimeZoneInformation @ 0x1405D1A44 (ExpReadTimeZoneInformation.c)
 *     SmQueryRegistry @ 0x140A4C4A4 (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6DE38 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A701BC (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140A71DB4 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValuesEx(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}
