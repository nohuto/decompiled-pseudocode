/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x1405B28D8
 * Callers:
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x1405AA9D8 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1405AAC2C (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x1405AAE88 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x1405ABCBC (RtlpSetupExtendedBlock.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x1409BAEE0 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x1405B276C (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v4; // r9
  unsigned int v5; // r8d
  int v6; // esi
  __int64 v7; // rax
  char v8; // al
  _QWORD **v10; // rdx
  unsigned __int64 v11; // rdi
  _QWORD **v12; // rax
  _QWORD **v13; // rdx
  _QWORD **v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  ULONG_PTR v17; // rax
  int v18; // ecx
  __int16 v19; // dx
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+48h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 124);
  if ( (v6 & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v5 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v5 = 1;
  v7 = *(unsigned __int8 *)(a2 + 14);
  if ( (_BYTE)v7 )
  {
    v4 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v7) << 16);
    v23 = v4;
  }
  else
  {
    v4 = a1;
    v23 = a1;
  }
  if ( *(_DWORD *)(v4 + 16) != -1114130 )
    goto LABEL_33;
  v8 = *(_BYTE *)(a2 + 15);
  if ( v8 != 4 )
  {
    v5 = 2;
    if ( a2 < *(_QWORD *)(v4 + 48) || a2 >= *(_QWORD *)(v4 + 72) || *(_QWORD *)(v4 + 40) != a1 )
      goto LABEL_33;
  }
  v5 = 3;
  if ( v8 == 3 )
  {
    v10 = (_QWORD **)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 48);
    if ( (v11 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v11 < *(_QWORD *)(v4 + 48) )
      goto LABEL_33;
    if ( v11 + *(_QWORD *)(a2 + 56) > *(_QWORD *)(v4 + 72) )
      goto LABEL_33;
    v5 = 4;
    v12 = **(_QWORD ****)(a2 + 24);
    if ( v12 != (_QWORD **)(*v10)[1] )
      goto LABEL_33;
    if ( v12 != v10 )
      goto LABEL_33;
    v5 = 5;
    v13 = v10 + 2;
    v14 = (_QWORD **)*v13[1];
    if ( v14 != (_QWORD **)(*v13)[1] || v14 != v13 )
      goto LABEL_33;
  }
  else
  {
    v5 = 6;
    if ( (*(_WORD *)(a1 + 140) ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v5 = 7;
  v15 = *(unsigned __int16 *)(a1 + 140);
  v16 = *(unsigned __int16 *)(a2 + 12);
  if ( (_WORD)v15 == (_WORD)v16 )
    goto LABEL_29;
  v17 = a2 - 16 * (v15 ^ v16);
  if ( v6 )
  {
    v18 = *(_DWORD *)(v17 + 8);
    LOWORD(v24) = v18;
    if ( (v18 & *(_DWORD *)(a1 + 124)) != 0 )
      v24 = *(_DWORD *)(a1 + 136) ^ v18;
    v19 = v24;
    v4 = v23;
    v5 = 7;
  }
  else
  {
    v19 = *(_WORD *)(v17 + 8);
  }
  if ( v19 == (*(_WORD *)(a2 + 12) ^ *(_WORD *)(a1 + 140)) )
  {
LABEL_29:
    v5 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v20 = **(_QWORD **)(a2 + 24), v20 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v20 == a2 + 16 )
    {
      v5 = 9;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v5 > 5 )
  {
    if ( v5 != 6 && v5 != 7 )
    {
      if ( v5 == 8 )
      {
        v21 = 13;
        goto LABEL_50;
      }
      if ( v5 != 10 )
      {
        v21 = 2;
        goto LABEL_50;
      }
    }
    goto LABEL_49;
  }
  if ( v5 == 5 )
    goto LABEL_40;
  if ( v5 < 2 )
  {
LABEL_49:
    v21 = 3;
    goto LABEL_50;
  }
  if ( v5 != 2 )
  {
    if ( v5 == 3 )
    {
      v21 = 0;
      goto LABEL_50;
    }
LABEL_40:
    v21 = 14;
LABEL_50:
    v22 = v5;
    goto LABEL_51;
  }
  v22 = *(_QWORD *)(v4 + 40);
  v21 = 12;
LABEL_51:
  RtlpLogHeapFailure(v21, a1, a2, v22, 0LL, 0LL);
}
