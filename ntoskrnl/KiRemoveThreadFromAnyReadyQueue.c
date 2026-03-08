/*
 * XREFs of KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4
 * Callers:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KiSetPriorityThread @ 0x1402273F0 (KiSetPriorityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x1402AFD1C (KiRescheduleThreadAfterAffinityChange.c)
 *     KiApplyForegroundBoostThread @ 0x1402E3178 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     KiRemoveThreadFromSharedReadyQueue @ 0x1402AE13C (KiRemoveThreadFromSharedReadyQueue.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402AE79C (KiRemoveThreadFromScbQueue.c)
 *     KiRemoveThreadFromReadyQueue @ 0x1403BD0A8 (KiRemoveThreadFromReadyQueue.c)
 */

__int64 __fastcall KiRemoveThreadFromAnyReadyQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a3 + 116) & 0x2000) != 0 )
    return KiRemoveThreadFromScbQueue(a1, *(_QWORD *)(a3 + 944), a3, a4);
  if ( *(int *)(a3 + 536) >= 0 )
    return KiRemoveThreadFromReadyQueue(a1, a3 + 216, (unsigned int)a4);
  return KiRemoveThreadFromSharedReadyQueue(a2, a3, (unsigned int)a4);
}
