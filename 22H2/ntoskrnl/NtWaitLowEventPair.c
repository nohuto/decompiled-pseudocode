/*
 * XREFs of NtWaitLowEventPair @ 0x140726130
 * Callers:
 *     MiKernelWriteToExecutableMemory @ 0x1405488F4 (MiKernelWriteToExecutableMemory.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtWaitLowEventPair(HANDLE EventPairHandle)
{
  return -1073741822;
}
