/*
 * XREFs of ZwQuerySystemTime @ 0x1403FA560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SystemTime);
}
