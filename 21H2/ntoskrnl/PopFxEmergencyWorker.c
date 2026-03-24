/*
 * XREFs of PopFxEmergencyWorker @ 0x1407D50D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x140263914 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
