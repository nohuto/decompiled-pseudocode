/*
 * XREFs of DbgSetDebugFilterState @ 0x1403B6DE0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetDebugFilterState @ 0x1407A58F0 (NtSetDebugFilterState.c)
 */

NTSTATUS __stdcall DbgSetDebugFilterState(ULONG ComponentId, ULONG Level, BOOLEAN State)
{
  return NtSetDebugFilterState(ComponentId, Level, State);
}
