/*
 * XREFs of ZwManagePartition @ 0x1403FC7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetHandle);
}
