/*
 * XREFs of RtlpHpVsContextAllocateInternal @ 0x140349B10
 * Callers:
 *     RtlpHpVsContextAllocate @ 0x140223844 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsContextMultiAlloc @ 0x140229B34 (RtlpHpVsContextMultiAlloc.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 * Callees:
 *     RtlpHpVsSubsegmentCreate @ 0x140234C34 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpVsContextAddSubsegment @ 0x140239F6C (RtlpHpVsContextAddSubsegment.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x1402C1900 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1403467D0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x140349EE0 (RtlpHpVsChunkSplit.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

char *__fastcall RtlpHpVsContextAllocateInternal(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        _QWORD *a5,
        _DWORD *a6)
{
  int v7; // r13d
  _DWORD *v9; // rsi
  _QWORD *v10; // r11
  unsigned int v11; // r14d
  unsigned int v12; // edi
  unsigned __int64 *v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  _QWORD *v16; // rdx
  int v17; // ecx
  unsigned int v18; // eax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned __int64 v22; // r10
  int v23; // r9d
  int v24; // ecx
  unsigned __int64 v25; // r10
  char *v26; // rsi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v30; // r8
  int v31; // r9d
  __int16 v32; // ax
  __int16 v33; // cx
  unsigned __int64 v34; // rsi

  v7 = a3;
  if ( a2 != a3 )
    v7 = a3 + 2;
  v9 = a6;
  v10 = a5;
  v11 = ((unsigned int)(v7 + 15) >> 4) + (*(_DWORD *)(a1 + 176) & 1) + 1;
  v12 = v11 << 16;
  if ( !*a6 )
  {
    *a6 = 1;
    if ( (a4 & 1) == 0 )
    {
      RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a5);
      v10 = a5;
    }
  }
  v13 = (unsigned __int64 *)(a1 + 16);
  while ( 1 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    v15 = *v13;
    if ( (v14 & 1) != 0 && v15 )
      v15 ^= (unsigned __int64)v13;
    v16 = 0LL;
    v17 = v14 & 1;
    while ( v15 )
    {
      v18 = RtlpHpHeapGlobals ^ *(_DWORD *)(v15 - 8) ^ (v15 - 8);
      if ( v12 < v18 )
      {
        v19 = *(_QWORD *)v15;
        v16 = (_QWORD *)v15;
        if ( v17 && v19 )
          goto LABEL_39;
      }
      else
      {
        if ( v12 <= v18 )
          goto LABEL_17;
        v19 = *(_QWORD *)(v15 + 8);
        if ( v17 && v19 )
        {
LABEL_39:
          v15 ^= v19;
          continue;
        }
      }
      v15 = v19;
    }
    v15 = (unsigned __int64)v16;
LABEL_17:
    if ( v15 )
      break;
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)v10);
    *v9 = 0;
    v34 = RtlpHpVsSubsegmentCreate(a1, v7, a4);
    if ( !v34 )
      return 0LL;
    *a6 = 1;
    if ( (a4 & 1) == 0 )
      RtlpHpAcquireQueuedLockExclusive((volatile LONG *)a1, *(_DWORD *)(a1 + 8), a5);
    RtlpHpVsContextAddSubsegment(a1, v34);
    v10 = a5;
    v9 = a6;
  }
  v20 = v15 - 8;
  v21 = HIDWORD(*(_QWORD *)(v15 - 8));
  v22 = v15 - 8;
  if ( ((DWORD1(RtlpHpHeapGlobals) ^ (unsigned int)v21 ^ ((v15 - 8) >> 32)) & 0xFF0000) != 0 )
  {
    v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v20 ^ *(_BYTE *)v15);
  }
  else
  {
    if ( WORD2(RtlpHpHeapGlobals) ^ (unsigned __int16)(v21 ^ WORD2(v20)) )
    {
      v22 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v20 ^ *(_QWORD *)(v15 - 8)) >> 32);
      v23 = DWORD1(RtlpHpHeapGlobals) ^ HIDWORD(v22) ^ HIDWORD(*(_QWORD *)v22);
      if ( (v23 & 0xFF0000) != 0 )
      {
        v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ *(_BYTE *)(v22 + 8));
        goto LABEL_23;
      }
      if ( (_WORD)v23 )
      {
        v22 -= 16LL * (unsigned __int16)(((unsigned __int64)RtlpHpHeapGlobals ^ v22 ^ *(_QWORD *)v22) >> 32);
        v24 = (unsigned __int8)(RtlpHpHeapGlobals ^ v22 ^ *(_BYTE *)(v22 + 8));
        goto LABEL_23;
      }
    }
    v24 = 0;
  }
LABEL_23:
  v25 = (v22 - (unsigned int)(v24 << 12)) & 0xFFFFFFFFFFFFF000uLL;
  if ( (((unsigned __int16)(*(_WORD *)(v25 + 32) ^ *(_WORD *)(v25 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), v25, v15 - 8, 0LL, 0LL);
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v20 + 32) & 0xFFF) != 0 )
    --v11;
  if ( !(unsigned int)RtlpHpVsChunkSplit(a1, v25, (int)v15 - 8, v11, a4, (__int64)v10) )
    return 0LL;
  v26 = (char *)(v20 + 16);
  v27 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v20) ^ *(unsigned __int16 *)(v20 + 2)) - 16;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((v20 + 32) & 0xFFF) == 0 )
  {
    v26 = (char *)(v20 + 32);
    v27 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v20) ^ *(unsigned __int16 *)(v20 + 2)) - 32;
  }
  v28 = *(_DWORD *)v15;
  if ( a2 < (unsigned int)v27 )
  {
    v30 = (unsigned int)v27;
    v31 = v27 - a2;
    *(_DWORD *)v15 = v28 | 0x100;
    v26[v27 - 1] = 0;
    v32 = *(_WORD *)&v26[v27 - 2];
    v33 = v32 ^ (v32 ^ (v27 - a2)) & 0x1FFF;
    if ( v31 == 1 )
      v33 = v32 | 0x8000;
    *(_WORD *)&v26[v30 - 2] = v33;
  }
  else
  {
    *(_DWORD *)v15 = v28 & 0xFFFFFEFF;
  }
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) == 0 )
      RtlpHpReleaseQueuedLockExclusive(*(_DWORD *)(a1 + 8), (__int64)a5);
    *a6 = 0;
    memset(v26, 0, a2);
  }
  return v26;
}
