/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403FD6A0
 * Callers:
 *     BiSetBootEntryOrder @ 0x140972CA4 (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
