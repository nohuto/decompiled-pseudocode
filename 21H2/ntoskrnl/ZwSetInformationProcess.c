/*
 * XREFs of ZwSetInformationProcess @ 0x1403FA900
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x14060E248 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1406412C8 (RtlCreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x1407C638C (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A4CB74 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
