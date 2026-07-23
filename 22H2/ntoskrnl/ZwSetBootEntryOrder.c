/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403FCB40
 * Callers:
 *     BiSetBootEntryOrder @ 0x140972B14 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
