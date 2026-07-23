/*
 * XREFs of ZwQueryDebugFilterState @ 0x1403FC260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwQueryDebugFilterState(ULONG ComponentId, ULONG Level)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&ComponentId);
}
