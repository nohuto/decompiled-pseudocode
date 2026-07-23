/*
 * XREFs of RtlpHpVsChunkDecommit @ 0x140349940
 * Callers:
 *     RtlpHpVsChunkFree @ 0x14034AE90 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsSubsegmentCommitPages @ 0x1402C0490 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkComputeCost @ 0x14034B0F0 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsChunkDecommit(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  int v13; // ebp
  int v14; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v15[6]; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0;
  v15[0] = 0LL;
  RtlpHpVsChunkComputeCost(a3, a2, &v14, v15);
  if ( !v14 )
    return 0LL;
  v9 = v15[0];
  if ( !v15[0] )
    return 0LL;
  v10 = (0x101010101010101LL
       * ((((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
         + ((((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v15[0] - ((v15[0] >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  if ( *(__int16 *)(a2 + 34) < 0 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 176) & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 48) >> 7;
    if ( v11 <= 8 )
      v11 = 8LL;
    if ( *(_QWORD *)(a1 + 56) + (unsigned __int64)(unsigned int)v10 <= v11 )
      return 0LL;
  }
  v15[0] = 0x1000000000000LL;
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals) ^ 1;
  *(_DWORD *)(a3 + 8) = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ ((unsigned int)(a3 - a2) >> 12)) | 0x200;
  v13 = a4 & 1;
  if ( !v13 )
    RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a5);
  RtlpHpVsSubsegmentCommitPages(a1, a2, v9, v10, 0);
  if ( !v13 )
    RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a5);
  *(_DWORD *)(a3 + 8) &= ~0x200u;
  return 1LL;
}
