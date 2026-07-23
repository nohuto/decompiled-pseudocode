/*
 * XREFs of ZwCallbackReturn @ 0x1403FA620
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
