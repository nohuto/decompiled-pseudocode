/*
 * XREFs of ZwContinueEx @ 0x1403FB9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwContinueEx(PCONTEXT ContextRecord, PVOID ContinueArgument)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ContextRecord);
}
