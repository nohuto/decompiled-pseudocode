/*
 * XREFs of ZwUmsThreadYield @ 0x1403FD300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUmsThreadYield(PVOID SchedulerParam)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SchedulerParam);
}
