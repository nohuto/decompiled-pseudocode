/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x1402AE13C
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x1402AC070 (KiNormalPriorityReadyScan.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x1402AE0E4 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSetThreadSchedulingGroup @ 0x1403557B8 (KiSetThreadSchedulingGroup.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x1402AE1AC (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v3 = *(_QWORD **)(a2 + 216);
  v4 = *(_QWORD **)(a2 + 224);
  if ( v3[1] != a2 + 216 || *v4 != a2 + 216 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 672);
  *(_QWORD *)(a1 + 680) -= *(unsigned int *)(a2 + 2288);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(a1, a2, 0LL);
}
