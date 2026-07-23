/*
 * XREFs of ZwOpenPartition @ 0x1403FBF00
 * Callers:
 *     IopLiveDumpAllocateFromVMMemoryPartition @ 0x140897960 (IopLiveDumpAllocateFromVMMemoryPartition.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwOpenPartition(
        PHANDLE PartitionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PartitionHandle);
}
