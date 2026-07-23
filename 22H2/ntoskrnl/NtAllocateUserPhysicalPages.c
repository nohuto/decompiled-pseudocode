/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1408D6810
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1408D4D38 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __cdecl NtAllocateUserPhysicalPages(HANDLE ProcessHandle, PULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  return MiAllocateUserPhysicalPages(ProcessHandle, NumberOfPages, UserPfnArray, 0LL, 0);
}
