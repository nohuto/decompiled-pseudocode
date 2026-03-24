/*
 * XREFs of DbgQueryDebugFilterState @ 0x140585500
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x140364540 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
