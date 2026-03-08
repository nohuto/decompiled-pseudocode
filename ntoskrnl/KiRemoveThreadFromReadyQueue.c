/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x1403BD0A8
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402AC810 (KiSearchForNewThreadOnProcessor.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4 (KiRemoveThreadFromAnyReadyQueue.c)
 * Callees:
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x14040B024 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a2 - 12) & 0x400000) != 0 )
    _InterlockedAnd((volatile signed __int32 *)a2[94], 0xFFFBFFFF);
  v3 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v4 = (_QWORD *)a2[1], (_QWORD *)*v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 32472) ^= 1 << a3;
  return KiUpdateLocalReadyQueueStatisticsOnRemoval(a1, a2 - 27);
}
