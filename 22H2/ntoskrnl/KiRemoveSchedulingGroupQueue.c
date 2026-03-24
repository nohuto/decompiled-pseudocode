/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x14035CD9C
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140258040 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140258C10 (KiQueueReadyThread.c)
 *     KiComputeGroupSchedulingRank @ 0x1402594A0 (KiComputeGroupSchedulingRank.c)
 *     KiSwapThread @ 0x1402C6D60 (KiSwapThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DE278 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1402DE5CC (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x14035CCEC (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x14035D48C (KiResortScbQueue.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rax

  v4 = (unsigned __int64 *)(a1 + 31856);
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (unsigned __int64 *)(v6 + 392);
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    LOBYTE(v8) = RtlRbRemoveNode(v7, a2 + 88);
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    v8 = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( v8 )
    {
      v8 ^= a2 + 392;
LABEL_12:
      if ( v8 )
        return v8;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return v8;
}
