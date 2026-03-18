/*
 * XREFs of ExQueueWorkItemEx @ 0x14030B180
 * Callers:
 *     KeTerminateThread @ 0x14030A438 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140367890 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140369070 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7670 (ExpQueueWorkItem.c)
 *     ExpValidateWorkItem @ 0x1402B7E50 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B951C (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
