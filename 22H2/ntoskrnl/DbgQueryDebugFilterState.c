/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405A7850
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x14032A730 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
