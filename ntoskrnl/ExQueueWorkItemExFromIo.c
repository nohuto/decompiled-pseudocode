/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14060A7DC
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140555E90 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x14033F620 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140343758 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1);
}
