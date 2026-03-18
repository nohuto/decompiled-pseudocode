/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140206878
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x140206598 (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402067BC (KiRemoveThreadFromScbQueue.c)
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiResortScbQueue @ 0x1403055D0 (KiResortScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x140305708 (KiComputeGroupSchedulingRank.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax

  v4 = a1 + 32560;
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = v6 + 392;
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    result = RtlRbRemoveNode(v7, a2 + 88);
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    result = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( result )
    {
      result ^= a2 + 392;
LABEL_12:
      if ( result )
        return result;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return result;
}
