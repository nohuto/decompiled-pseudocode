/*
 * XREFs of ExQueueWorkItemEx @ 0x140343218
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1403228A0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140574900 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E058 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E0A0 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
