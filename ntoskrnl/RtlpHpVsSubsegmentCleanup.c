/*
 * XREFs of RtlpHpVsSubsegmentCleanup @ 0x1402E55D8
 * Callers:
 *     RtlpHpVsChunkFree @ 0x140249D70 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsChunkSplit @ 0x14024AB60 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 *     RtlpHpHeapDestroy @ 0x1405B4210 (RtlpHpHeapDestroy.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlpHpVsSubsegmentCleanup(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx

  v2 = *(_QWORD *)a2 ^ a2;
  v4 = *(_QWORD *)(a2 + 8) ^ a2;
  v5 = (unsigned __int64 *)(v2 + 8);
  if ( (*(_QWORD *)(v2 + 8) ^ v2) != a2 || (*(_QWORD *)v4 ^ v4) != a2 )
    __fastfail(3u);
  v6 = v4 ^ v2;
  *(_QWORD *)v4 = v6;
  *v5 = v6;
  v7 = *(_QWORD *)(a2 + 16) - ((*(_QWORD *)(a2 + 16) >> 1) & 0x5555555555555555LL);
  return _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(a1 + 48),
           -((unsigned int)((0x101010101010101LL
                           * (((v7 & 0x3333333333333333LL)
                             + ((v7 >> 2) & 0x3333333333333333LL)
                             + (((v7 & 0x3333333333333333LL) + ((v7 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24));
}
