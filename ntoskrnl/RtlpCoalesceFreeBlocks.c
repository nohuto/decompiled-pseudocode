/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x1405A97B8
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x140420E50 (RtlCompareMemoryUlong.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapRemoveListEntry @ 0x1405B33A0 (RtlpHeapRemoveListEntry.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r9
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 *v9; // r15
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rdx
  unsigned __int64 i; // rax
  __int64 *v16; // rax
  int v17; // r9d
  char v18; // al
  SIZE_T v19; // rsi
  SIZE_T v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v23; // edx
  __int64 *v24; // r15
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 *v28; // rdx
  unsigned __int64 j; // rax
  __int64 *v30; // rax
  int v31; // r8d
  char v32; // al
  SIZE_T v33; // rsi
  SIZE_T v34; // rax
  int v36; // [rsp+20h] [rbp-38h]

  v4 = a2;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v7 = a2 - v5;
  if ( a2 - v5 != a2 )
  {
    v8 = *(_DWORD *)(a1 + 124);
    if ( ((*(_BYTE *)(v7 + 10) ^ *(_BYTE *)(a1 + 138) & (v8 >> 20)) & 1) == 0 )
    {
      if ( v8 )
      {
        *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
          RtlpAnalyzeHeapFailure(a1, a2 - v5);
      }
      v9 = *(__int64 **)(v7 + 24);
      v10 = v7 + 16;
      v11 = *(_QWORD *)(v7 + 16);
      v12 = *v9;
      v13 = *(_QWORD *)(v11 + 8);
      if ( *v9 == v13 && v12 == v10 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
        v14 = *(__int64 **)(a1 + 312);
        if ( v14 )
        {
          for ( i = *((unsigned int *)v14 + 2); ; i = *((unsigned int *)v16 + 2) )
          {
            if ( *(unsigned __int16 *)(v7 + 8) < i )
            {
              v17 = *(unsigned __int16 *)(v7 + 8);
              goto LABEL_14;
            }
            v16 = (__int64 *)*v14;
            if ( !*v14 )
              break;
            v14 = (__int64 *)*v14;
          }
          v17 = *((_DWORD *)v14 + 2) - 1;
LABEL_14:
          LOBYTE(v10) = 1;
          RtlpHeapRemoveListEntry(a1, (_DWORD)v14, v10, v7 + 16, v17, *(unsigned __int16 *)(v7 + 8));
        }
        *v9 = v11;
        *(_QWORD *)(v11 + 8) = v9;
        v18 = *(_BYTE *)(v7 + 10);
        if ( (v18 & 4) != 0 )
        {
          v19 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v18 & 2) != 0 && v19 > 4 )
            v19 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v20 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v19, 0xFEEEFEEE);
          if ( v20 != v19 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v20 + v7 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
        v21 = *(unsigned __int16 *)(v7 + 8);
        v4 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        *a3 += v21;
        *(_WORD *)(v7 + 8) = *(_WORD *)a3;
        *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        RtlpLogHeapFailure(13, a1, v10, v13, v12, 0LL);
      }
    }
  }
  v22 = v4 + 16LL * *a3;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v23 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v22 + 8);
    if ( HIBYTE(v23) != ((unsigned __int8)v23 ^ (unsigned __int8)(BYTE1(v23) ^ BYTE2(v23))) )
      RtlpLogHeapFailure(3, a1, v22, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v22 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v22 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v22 + 11) != (*(_BYTE *)(v22 + 8) ^ (unsigned __int8)(*(_BYTE *)(v22 + 9) ^ *(_BYTE *)(v22 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v22);
    }
    v24 = *(__int64 **)(v22 + 24);
    v25 = *(_QWORD *)(v22 + 16);
    v26 = *v24;
    v27 = *(_QWORD *)(v25 + 8);
    if ( *v24 == v27 && v26 == v22 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v22 + 8);
      v28 = *(__int64 **)(a1 + 312);
      if ( v28 )
      {
        for ( j = *((unsigned int *)v28 + 2); ; j = *((unsigned int *)v30 + 2) )
        {
          if ( *(unsigned __int16 *)(v22 + 8) < j )
          {
            v31 = *(unsigned __int16 *)(v22 + 8);
            goto LABEL_41;
          }
          v30 = (__int64 *)*v28;
          if ( !*v28 )
            break;
          v28 = (__int64 *)*v28;
        }
        v31 = *((_DWORD *)v28 + 2) - 1;
LABEL_41:
        v36 = v31;
        LOBYTE(v31) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v28, v31, v22 + 16, v36, *(unsigned __int16 *)(v22 + 8));
      }
      *v24 = v25;
      *(_QWORD *)(v25 + 8) = v24;
      v32 = *(_BYTE *)(v22 + 10);
      if ( (v32 & 4) != 0 )
      {
        v33 = 16LL * *(unsigned __int16 *)(v22 + 8) - 32;
        if ( (v32 & 2) != 0 && v33 > 4 )
          v33 = 16LL * *(unsigned __int16 *)(v22 + 8) - 36;
        v34 = RtlCompareMemoryUlong((PVOID)(v22 + 32), v33, 0xFEEEFEEE);
        if ( v34 != v33 )
        {
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v22,
            (const void *)(v22 + v34 + 32));
          if ( (_BYTE)KdDebuggerEnabled )
            __debugbreak();
        }
      }
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      *a3 += *(unsigned __int16 *)(v22 + 8);
      *(_WORD *)(v4 + 8) = *(_WORD *)a3;
      *(_WORD *)(v4 + 16LL * *a3 + 12) = *(_WORD *)a3 ^ *(_WORD *)(a1 + 140);
      return v4;
    }
    RtlpLogHeapFailure(13, a1, v22 + 16, v27, v26, 0LL);
  }
  return v4;
}
