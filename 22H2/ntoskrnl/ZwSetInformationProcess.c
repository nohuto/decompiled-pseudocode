/*
 * XREFs of ZwSetInformationProcess @ 0x1403F9DA0
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x140692B5C (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1406C5268 (RtlCreateUserStack.c)
 *     CmpInitializeRegistryProcess @ 0x140799280 (CmpInitializeRegistryProcess.c)
 *     StartFirstUserProcess @ 0x140A4BB74 (StartFirstUserProcess.c)
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
