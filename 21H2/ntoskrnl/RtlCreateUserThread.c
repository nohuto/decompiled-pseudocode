/*
 * XREFs of RtlCreateUserThread @ 0x140910120
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1405D9C80 (RtlpCreateUserThreadEx.c)
 */

NTSTATUS __cdecl RtlCreateUserThread(
        HANDLE ProcessHandle,
        PSECURITY_DESCRIPTOR ThreadSecurityDescriptor,
        BOOLEAN CreateSuspended,
        ULONG ZeroBits,
        SIZE_T MaximumStackSize,
        SIZE_T CommittedStackSize,
        PUSER_THREAD_START_ROUTINE StartAddress,
        PVOID Parameter,
        PHANDLE ThreadHandle,
        PCLIENT_ID ClientId)
{
  int v11; // [rsp+30h] [rbp-38h]

  return RtlpCreateUserThreadEx(
           ProcessHandle,
           ThreadSecurityDescriptor,
           CreateSuspended == 1,
           ZeroBits,
           MaximumStackSize,
           CommittedStackSize,
           v11,
           StartAddress,
           Parameter,
           ThreadHandle,
           ClientId);
}
