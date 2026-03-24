/*
 * XREFs of CmpSetPriorityThread @ 0x14032B86C
 * Callers:
 *     CmpDoFileWrite @ 0x1406EA3AC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140257340 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
