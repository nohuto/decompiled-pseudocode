/*
 * XREFs of KiCheckMaxOverQuotaTransition @ 0x140305858
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiComputeGroupSchedulingRank @ 0x140305708 (KiComputeGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiChargeSchedulingGroupCycleTime @ 0x140308808 (KiChargeSchedulingGroupCycleTime.c)
 */

char __fastcall KiCheckMaxOverQuotaTransition(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a1 + 112) & 0x12) != 0 || !(unsigned __int8)KiChargeSchedulingGroupCycleTime(a2, a1) )
    return 0;
  *(_BYTE *)(a1 + 112) |= 2u;
  return 1;
}
