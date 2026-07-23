/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x14069EF80
 * Callers:
 *     RtlCheckPortableOperatingSystem @ 0x140326640 (RtlCheckPortableOperatingSystem.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x1403AA65C (EtwpQueryPartitionRegistryInformation.c)
 *     EtwpReadPerSiloConfigParameters @ 0x1403AA8C4 (EtwpReadPerSiloConfigParameters.c)
 *     RtlpFindRegTziForCurrentYear @ 0x1403B7864 (RtlpFindRegTziForCurrentYear.c)
 *     sub_1405B2D88 @ 0x1405B2D88 (sub_1405B2D88.c)
 *     ExpReadTimeZoneInformation @ 0x1405D1A44 (ExpReadTimeZoneInformation.c)
 *     SmQueryRegistry @ 0x140A4B4A4 (SmQueryRegistry.c)
 *     IopInitCrashDumpDuringSysInit @ 0x140A6CE38 (IopInitCrashDumpDuringSysInit.c)
 *     CmIsLastKnownGoodBoot @ 0x140A6F1BC (CmIsLastKnownGoodBoot.c)
 *     EtwpReadConfigParameters @ 0x140A70DB4 (EtwpReadConfigParameters.c)
 * Callees:
 *     RtlpQueryRegistryValues @ 0x1406B9848 (RtlpQueryRegistryValues.c)
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
