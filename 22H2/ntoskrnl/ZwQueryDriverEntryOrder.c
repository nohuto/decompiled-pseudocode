/*
 * XREFs of ZwQueryDriverEntryOrder @ 0x1403FC2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
