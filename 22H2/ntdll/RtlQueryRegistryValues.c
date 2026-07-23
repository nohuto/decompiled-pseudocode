/*
 * XREFs of RtlQueryRegistryValues @ 0x1800EE750
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180045B3C (RtlpQueryRegistryValues.c)
 */

NTSTATUS __cdecl RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(RelativeTo, Path, (__int64)QueryTable, (__int64)Context, Environment, 0);
}
