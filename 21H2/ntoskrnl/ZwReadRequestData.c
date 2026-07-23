/*
 * XREFs of ZwReadRequestData @ 0x1403FB000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadRequestData(
        HANDLE PortHandle,
        PPORT_MESSAGE Message,
        ULONG DataEntryIndex,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
