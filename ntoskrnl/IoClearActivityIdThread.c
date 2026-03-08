/*
 * XREFs of IoClearActivityIdThread @ 0x140203960
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140688EF0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x140745F08 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
