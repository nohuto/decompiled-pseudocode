/*
 * XREFs of PopFxEmergencyWorker @ 0x140864F80
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWorkPool @ 0x14022EBF8 (PopFxProcessWorkPool.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(__int64 a1)
{
  KeSetActualBasePriorityThread((ULONG_PTR)KeGetCurrentThread(), 0x10u);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
