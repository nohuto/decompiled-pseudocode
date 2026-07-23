/*
 * XREFs of RtlQueryRegistryValues @ 0x140633990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x140635878 (RtlpQueryRegistryValues.c)
 */

NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, QueryTable, Context);
}
