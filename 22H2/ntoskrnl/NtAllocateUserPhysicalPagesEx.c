/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x1408D6830
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPagesEx(
        HANDLE ProcessHandle,
        PULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return MiAllocateUserPhysicalPages(
           ProcessHandle,
           NumberOfPages,
           UserPfnArray,
           (__int64 *)ExtendedParameters,
           ExtendedParameterCount);
}
