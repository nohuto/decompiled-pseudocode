// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlQueryRegistryValues(
        ULONG RelativeTo,
        PCWSTR Path,
        PRTL_QUERY_REGISTRY_TABLE QueryTable,
        PVOID Context,
        PVOID Environment)
{
  return RtlpQueryRegistryValues(*(__int64 *)&RelativeTo, Path, QueryTable, (__int64)Context);
}
