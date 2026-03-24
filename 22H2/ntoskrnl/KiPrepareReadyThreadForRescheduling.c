/*
 * XREFs of KiPrepareReadyThreadForRescheduling @ 0x14035BA40
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiApplyForegroundBoostThread @ 0x14035B5EC (KiApplyForegroundBoostThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiSetPriorityBoost @ 0x140315DB0 (KiSetPriorityBoost.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 */

__int64 __fastcall KiPrepareReadyThreadForRescheduling(_KTHREAD *a1, int a2, __int64 a3)
{
  if ( (unsigned int)(a2 - 1) <= 0xD && (unsigned int)(MEMORY[0xFFFFF78000000320] - 300) >= a1->WaitBlock[2].SpareLong )
    KiSetPriorityBoost(0LL, a1, 15, a1->CycleTime);
  return KiInsertDeferredReadyList(a3, a1);
}
