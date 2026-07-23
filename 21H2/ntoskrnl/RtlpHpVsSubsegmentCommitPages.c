/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1402C0490
 * Callers:
 *     RtlpHpVsChunkDecommit @ 0x140349940 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 * Callees:
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  __int64 v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  int v15; // esi
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]

  _BitScanForward64(&v5, a3);
  v7 = a4;
  v18 = 0LL;
  _BitScanReverse64(&v8, a3);
  LODWORD(v8) = v8 - v5;
  v10 = a2 + (unsigned int)((_DWORD)v5 << 12);
  v17 = 0LL;
  v11 = ((_DWORD)v8 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v8 + 1)) - 1) << v5;
  RtlpHpAcquireQueuedLockExclusive(a2 + 24, *(unsigned int *)(a1 + 8), &v17);
  v13 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( a5 )
  {
    v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
            v13,
            v10,
            v11);
    if ( v15 < 0 )
      goto LABEL_4;
    *(_QWORD *)(a2 + 16) |= v12;
    v14 = v7;
  }
  else
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v13, v10, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v14 = -(int)v7;
  }
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v14);
  v15 = 0;
LABEL_4:
  RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v17);
  return (unsigned int)v15;
}
