/*
 * XREFs of RtlpHpVsContextFreeList @ 0x140249050
 * Callers:
 *     RtlpHpVsContextFree @ 0x1402B6740 (RtlpHpVsContextFree.c)
 *     RtlpHpHeapCompact @ 0x1402CC2D4 (RtlpHpHeapCompact.c)
 * Callees:
 *     RtlpHpVsChunkFree @ 0x140249D70 (RtlpHpVsChunkFree.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1402CD080 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsSubsegmentFree @ 0x1402EAA68 (RtlpHpVsSubsegmentFree.c)
 *     RtlpHpAcquireQueuedLockExclusive @ 0x140350330 (RtlpHpAcquireQueuedLockExclusive.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextFreeList(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int *v3; // rdi
  __int64 result; // rax
  int v8; // r15d
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r10
  int v14; // edx
  unsigned __int64 v15; // r10
  __int64 v16; // rdi
  __int64 v17; // r11
  int v18; // edx
  unsigned __int64 v19; // r11
  unsigned __int64 v20; // r11
  int v21; // ecx
  __int128 v22; // [rsp+30h] [rbp-38h] BYREF
  __int64 v23; // [rsp+40h] [rbp-28h]

  v3 = (unsigned int *)(a1 + 8);
  result = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v8 = a2 & 1;
  if ( (a2 & 1) == 0 )
    result = RtlpHpAcquireQueuedLockExclusive(a1, *v3, &v22);
  if ( a3 )
  {
    while ( 1 )
    {
      v9 = *(a3 - 2);
      v10 = (unsigned __int64)(a3 - 2);
      v11 = a3 - 2;
      a3 = (_QWORD *)*a3;
      v12 = v10 ^ RtlpHpHeapGlobals ^ v9;
      v13 = v10;
      if ( ((HIDWORD(v11) ^ ((RtlpHpHeapGlobals ^ v9) >> 32)) & 0xFF0000) != 0 )
      {
        v14 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v10 + 8) ^ v10);
        goto LABEL_6;
      }
      if ( !WORD2(v12) )
        goto LABEL_22;
      v13 = v10 - 16LL * WORD2(v12);
      v17 = RtlpHpHeapGlobals ^ *(_QWORD *)v13;
      v18 = HIDWORD(v13) ^ HIDWORD(v17);
      v19 = v13 ^ v17;
      if ( (v18 & 0xFF0000) != 0 )
      {
        v14 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
        goto LABEL_6;
      }
      v20 = HIDWORD(v19);
      if ( (_WORD)v20 )
      {
        v13 -= 16LL * (unsigned __int16)v20;
        v14 = (unsigned __int8)(RtlpHpHeapGlobals ^ *(_BYTE *)(v13 + 8) ^ v13);
      }
      else
      {
LABEL_22:
        v14 = 0;
      }
LABEL_6:
      v15 = (v13 - (unsigned int)(v14 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      if ( (((unsigned __int16)(*(_WORD *)(v15 + 32) ^ *(_WORD *)(v15 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
      {
        LODWORD(v10) = v15;
        v21 = 18;
      }
      else
      {
        if ( (v12 & 0xFF000000000000LL) != 0 )
        {
          result = RtlpHpVsChunkFree(a1, v15, v10, a2, (__int64)&v22);
          v16 = result;
          if ( result )
          {
            if ( v8 )
            {
              result = RtlpHpVsSubsegmentFree(a1, result, a2);
            }
            else
            {
              RtlpHpReleaseQueuedLockExclusive(*(unsigned int *)(a1 + 8), &v22);
              RtlpHpVsSubsegmentFree(a1, v16, a2);
              result = RtlpHpAcquireQueuedLockExclusive(a1, *(unsigned int *)(a1 + 8), &v22);
            }
          }
          goto LABEL_9;
        }
        v21 = 8;
      }
      result = RtlpLogHeapFailure(v21, *(_DWORD *)(a1 + 128) ^ (unsigned int)a1, v10, 0, 0LL, 0LL);
LABEL_9:
      if ( !a3 )
      {
        v3 = (unsigned int *)(a1 + 8);
        break;
      }
    }
  }
  if ( !v8 )
    return RtlpHpReleaseQueuedLockExclusive(*v3, &v22);
  return result;
}
