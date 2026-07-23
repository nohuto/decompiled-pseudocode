/*
 * XREFs of ZwTraceEvent @ 0x1403FB140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwTraceEvent(HANDLE TraceHandle, ULONG Flags, ULONG FieldSize, PVOID Fields)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TraceHandle);
}
