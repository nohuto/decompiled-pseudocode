/*
 * XREFs of PopFxEmergencyWorker @ 0x1407D5240
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWorkPool @ 0x140284DE8 (PopFxProcessWorkPool.c)
 *     KeSetActualBasePriorityThread @ 0x1402D4E00 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
