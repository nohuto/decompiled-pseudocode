/*
 * XREFs of RtlpAnalyzeHeapFailure @ 0x1405937F0
 * Callers:
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405896C0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x140589AB0 (RtlpCreateSplitBlock.c)
 *     RtlpExtendHeap @ 0x14058A8E4 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x14058AB68 (RtlpFindAndCommitPages.c)
 *     RtlpFreeHeap @ 0x14058ADC4 (RtlpFreeHeap.c)
 *     RtlpSetupExtendedBlock @ 0x14058BB08 (RtlpSetupExtendedBlock.c)
 *     RtlpPopulateListIndex @ 0x1405943AC (RtlpPopulateListIndex.c)
 *     RtlZeroHeap @ 0x140915A90 (RtlZeroHeap.c)
 * Callees:
 *     RtlpHeapExceptionFilter @ 0x140593684 (RtlpHeapExceptionFilter.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 */

void __fastcall RtlpAnalyzeHeapFailure(ULONG_PTR a1, ULONG_PTR a2)
{
  unsigned __int64 v3; // r9
  unsigned int v4; // r8d
  int v5; // esi
  __int64 v6; // rax
  char v7; // al
  ULONG_PTR v8; // rbx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int16 v12; // di
  unsigned __int16 v13; // bx
  ULONG_PTR v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+48h] [rbp-10h]

  v3 = 0LL;
  v4 = 0;
  v5 = *(_DWORD *)(a1 + 124);
  if ( (v5 & *(_DWORD *)(a2 + 8)) != 0 )
    goto LABEL_33;
  v4 = 10;
  if ( (*(_DWORD *)(a1 + 112) & 0x4000000) == 0
    && *(_BYTE *)(a2 + 11) != (*(_BYTE *)(a2 + 8) ^ (unsigned __int8)(*(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10))) )
  {
    goto LABEL_33;
  }
  v4 = 1;
  v6 = *(unsigned __int8 *)(a2 + 14);
  if ( (_BYTE)v6 )
  {
    v3 = (a2 & 0xFFFFFFFFFFFF0000uLL) + ((1 - v6) << 16);
    v20 = v3;
  }
  else
  {
    v3 = a1;
    v20 = a1;
  }
  if ( *(_DWORD *)(v3 + 16) != -1114130 )
    goto LABEL_33;
  v7 = *(_BYTE *)(a2 + 15);
  if ( v7 != 4 )
  {
    v4 = 2;
    if ( a2 < *(_QWORD *)(v3 + 48) || a2 >= *(_QWORD *)(v3 + 72) || *(_QWORD *)(v3 + 40) != a1 )
      goto LABEL_33;
  }
  v4 = 3;
  if ( v7 == 3 )
  {
    v8 = a2 + 16;
    v9 = *(_QWORD *)(a2 + 48);
    if ( (v9 & 0xFFF) != 0 )
      goto LABEL_33;
    if ( v9 < *(_QWORD *)(v3 + 48) )
      goto LABEL_33;
    if ( *(_QWORD *)(a2 + 56) + v9 > *(_QWORD *)(v3 + 72) )
      goto LABEL_33;
    v4 = 4;
    v10 = **(_QWORD **)(a2 + 24);
    if ( v10 != *(_QWORD *)(*(_QWORD *)v8 + 8LL) )
      goto LABEL_33;
    if ( v10 != v8 )
      goto LABEL_33;
    v4 = 5;
    v11 = **(_QWORD **)(a2 + 40);
    if ( v11 != *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL) || v11 != a2 + 32 )
      goto LABEL_33;
    v12 = *(_WORD *)(a1 + 140);
  }
  else
  {
    v4 = 6;
    v12 = *(_WORD *)(a1 + 140);
    if ( (v12 ^ *(_WORD *)(a2 + 16LL * *(unsigned __int16 *)(a2 + 8) + 12)) != *(_WORD *)(a2 + 8) )
      goto LABEL_33;
  }
  v4 = 7;
  v13 = *(_WORD *)(a2 + 12);
  if ( v12 == v13 )
    goto LABEL_29;
  v14 = a2 - 16 * (v12 ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  if ( v5 )
  {
    v15 = *(_DWORD *)(v14 + 8);
    LOWORD(v21) = v15;
    if ( (v15 & *(_DWORD *)(a1 + 124)) != 0 )
      v21 = v15 ^ *(_DWORD *)(a1 + 136);
    v16 = v21;
    v12 = *(_WORD *)(a1 + 140);
    v13 = *(_WORD *)(a2 + 12);
    v3 = v20;
    v4 = 7;
  }
  else
  {
    v16 = *(_WORD *)(v14 + 8);
  }
  if ( v16 == (v12 ^ v13) )
  {
LABEL_29:
    v4 = 8;
    if ( (*(_BYTE *)(a2 + 10) & 1) != 0
      || (v17 = **(_QWORD **)(a2 + 24), v17 == *(_QWORD *)(*(_QWORD *)(a2 + 16) + 8LL)) && v17 == a2 + 16 )
    {
      v4 = 9;
    }
  }
LABEL_33:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a2 + 11) = *(_BYTE *)(a2 + 8) ^ *(_BYTE *)(a2 + 9) ^ *(_BYTE *)(a2 + 10);
    *(_DWORD *)(a2 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  if ( v4 > 5 )
  {
    if ( v4 <= 7 )
      goto LABEL_47;
    if ( v4 == 8 )
    {
      v18 = 8LL;
      v19 = 13;
      goto LABEL_49;
    }
    if ( v4 == 10 )
      goto LABEL_47;
    v19 = 2;
LABEL_48:
    v18 = v4;
    goto LABEL_49;
  }
  if ( v4 >= 4 )
  {
    v19 = 14;
    goto LABEL_48;
  }
  if ( v4 <= 1 )
  {
LABEL_47:
    v19 = 3;
    goto LABEL_48;
  }
  if ( v4 == 2 )
  {
    v18 = *(_QWORD *)(v3 + 40);
    v19 = 12;
  }
  else
  {
    v18 = 3LL;
    v19 = 0;
  }
LABEL_49:
  RtlpLogHeapFailure(v19, a1, a2, v18, 0LL, 0LL);
}
