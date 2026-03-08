/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x1402AEDD4
 * Callers:
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x1402AB400 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, volatile signed __int64 *a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !KiChargeSchedulingGroupCycleTime(a2, (_QWORD *)a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
