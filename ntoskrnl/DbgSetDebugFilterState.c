/*
 * XREFs of DbgSetDebugFilterState @ 0x14038FA80
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x140828EB0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
