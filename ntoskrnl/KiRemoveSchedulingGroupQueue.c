/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x1402AEF44
 * Callers:
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1402AB8A8 (KiGroupSchedulingQuantumEnd.c)
 *     KiRemoveThreadFromScbQueue @ 0x1402AE79C (KiRemoveThreadFromScbQueue.c)
 *     KiComputeGroupSchedulingRank @ 0x1402AEC84 (KiComputeGroupSchedulingRank.c)
 *     KiResortScbQueue @ 0x1402AEDFC (KiResortScbQueue.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402F2018 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x1402F24DC (KiResetScb.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024C010 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  __int64 v8; // rax

  v4 = (unsigned __int64 *)(a1 + 32560);
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
