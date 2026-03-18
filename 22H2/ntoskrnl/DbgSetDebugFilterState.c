/*
 * XREFs of DbgSetDebugFilterState @ 0x140391F50
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1408310C0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
