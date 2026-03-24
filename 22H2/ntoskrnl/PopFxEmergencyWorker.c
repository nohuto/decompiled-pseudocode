/*
 * XREFs of PopFxEmergencyWorker @ 0x1407D4FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x140262E94 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
