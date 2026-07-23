/*
 * XREFs of ZwCallbackReturn @ 0x1403F9AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCallbackReturn(PVOID OutputBuffer, ULONG OutputLength, NTSTATUS Status)
{
  _disable();
  __readeflags();
  return KiServiceInternal(OutputBuffer);
}
