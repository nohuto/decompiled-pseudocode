/*
 * XREFs of ExQueueWorkItemEx @ 0x140353EB0
 * Callers:
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140355670 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140355AD0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14033EE40 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x14033F620 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x140343758 (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
