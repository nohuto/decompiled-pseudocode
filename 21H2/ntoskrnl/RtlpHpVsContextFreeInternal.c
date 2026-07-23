/*
 * XREFs of RtlpHpVsContextFreeInternal @ 0x140349810
 * Callers:
 *     RtlpHpVsContextFreeList @ 0x140349770 (RtlpHpVsContextFreeList.c)
 * Callees:
 *     RtlpHpVsSubsegmentFree @ 0x14023DB94 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkFree @ 0x14034AE90 (RtlpHpVsChunkFree.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFreeInternal(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _QWORD *a5)
{
  __int64 v5; // rax
  int v7; // r11d
  __int64 v9; // r10
  int v10; // edx
  unsigned __int64 v11; // r10
  __int64 v12; // rdi
  int v14; // edx

  v5 = *(_QWORD *)a3;
  v7 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(a3) ^ HIDWORD(*(_QWORD *)a3);
  v9 = a3;
  if ( (v7 & 0xFF0000) != 0 )
  {
    v10 = (unsigned __int8)(RtlpHpHeapGlobals ^ a3 ^ *(_BYTE *)(a3 + 8));
    goto LABEL_3;
  }
  if ( !(_WORD)v7 )
    goto LABEL_16;
  v9 = a3 - 16LL * (unsigned __int16)((a3 ^ (unsigned __int64)RtlpHpHeapGlobals ^ v5) >> 32);
  v14 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v9) ^ HIDWORD(v9);
  if ( (v14 & 0xFF0000) != 0 )
  {
    v10 = (unsigned __int8)(RtlpHpHeapGlobals ^ v9 ^ *(_BYTE *)(v9 + 8));
    goto LABEL_3;
  }
  if ( (_WORD)v14 )
  {
    v9 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ *(_QWORD *)v9 ^ v9) >> 32);
    v10 = (unsigned __int8)(RtlpHpHeapGlobals ^ v9 ^ *(_BYTE *)(v9 + 8));
  }
  else
  {
LABEL_16:
    v10 = 0;
  }
LABEL_3:
  v11 = (v9 - (unsigned int)(v10 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v11 + 32) ^ *(_WORD *)(v11 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v11, 0, 0LL, 0LL);
    return 0LL;
  }
  else if ( ((a3 ^ (unsigned __int64)RtlpHpHeapGlobals ^ v5) & 0xFF000000000000LL) != 0 )
  {
    v12 = RtlpHpVsChunkFree(a1, v11, a3, a4, (__int64)a5);
    if ( v12 )
    {
      if ( (a4 & 1) == 0 )
        RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a5);
      RtlpHpVsSubsegmentFree(a1, v12, a4);
      if ( (a4 & 1) == 0 )
        RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a5);
    }
    return 1LL;
  }
  else
  {
    RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, 0, 0LL, 0LL);
    return 0LL;
  }
}
