/*
 * XREFs of ZwInitializeEnclave @ 0x1403FC560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwInitializeEnclave(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID EnclaveInformation,
        ULONG EnclaveInformationLength,
        PULONG EnclaveError)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
