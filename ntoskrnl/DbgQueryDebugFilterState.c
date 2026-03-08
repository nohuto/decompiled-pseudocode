/*
 * XREFs of DbgQueryDebugFilterState @ 0x1405A53C0
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryDebugFilterState @ 0x1402BDF40 (NtQueryDebugFilterState.c)
 */

NTSTATUS __stdcall DbgQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  return NtQueryDebugFilterState(ComponentId, Level);
}
