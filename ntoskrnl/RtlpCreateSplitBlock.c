/*
 * XREFs of RtlpCreateSplitBlock @ 0x1405A9BA8
 * Callers:
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x1402BDD20 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x140420E50 (RtlCompareMemoryUlong.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x1405B2884 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405B28D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x1405B2FB0 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x1405B30D4 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405B33A0 (RtlpHeapRemoveListEntry.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 *v13; // r12
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 i; // rax
  __int64 *v20; // rax
  int v21; // ecx
  char v22; // al
  SIZE_T v23; // rbp
  SIZE_T v24; // rax
  unsigned __int64 v25; // r15
  _QWORD *v26; // rdi
  _QWORD *v27; // r8
  int v28; // ecx
  int v29; // eax
  unsigned __int16 v30; // ax
  __int64 *v31; // rax
  _QWORD *v32; // rdi
  __int64 *v33; // rdx
  unsigned __int64 v34; // rcx
  unsigned __int64 k; // rax
  __int64 *v36; // rax
  int v37; // r8d
  _DWORD *v38; // r8
  unsigned __int64 v39; // rdx
  _QWORD *v40; // rdi
  _QWORD *Entry; // r8
  int v42; // ecx
  int v43; // eax
  unsigned __int16 v44; // ax
  __int64 *v45; // rax
  unsigned __int64 j; // rax
  __int64 *v47; // rax
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 m; // rax
  __int64 *v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *v60; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 n; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+38h] [rbp-60h]
  int v71; // [rsp+48h] [rbp-50h]
  int v72; // [rsp+58h] [rbp-40h]
  int v73; // [rsp+68h] [rbp-30h]

  v7 = 0;
  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( v11 >= 0xFE )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v11;
  v12 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v13 = *(__int64 **)(v12 + 24);
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *v13;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v13 == v16 && v15 == v12 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        v18 = *(unsigned __int16 *)(v12 + 8);
        for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v20 + 2) )
        {
          if ( v18 < i )
          {
            v21 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_20;
          }
          v20 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v21 = *((_DWORD *)v17 + 2) - 1;
LABEL_20:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v18, v12 + 16, v21, *(unsigned __int16 *)(v12 + 8));
      }
      *v13 = v14;
      *(_QWORD *)(v14 + 8) = v13;
      if ( a5 )
      {
        v22 = *(_BYTE *)(v12 + 10);
        if ( (v22 & 4) != 0 )
        {
          v23 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v22 & 2) != 0 && v23 > 4 )
            v23 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v24 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v23, 0xFEEEFEEE);
          if ( v24 != v23 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(a3 + 16 * a7),
              (const void *)(v24 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(a3 + 10) = *(_BYTE *)(v12 + 10);
      v25 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v25 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, a3, v25);
        return 1;
      }
      *(_WORD *)(a3 + 8) = v25;
      *(_WORD *)(a3 + 16 * v25 + 12) = *(_WORD *)(a1 + 140) ^ v25;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v38 = (_DWORD *)(a3 + 32);
          v39 = (16 * (unsigned __int64)(unsigned __int16)v25 - 32) >> 2;
          if ( v39 )
          {
            if ( ((unsigned __int8)v38 & 4) != 0 )
            {
              --v39;
              *v38 = -17891602;
              v38 = (_DWORD *)(a3 + 36);
            }
            memset64(v38, 0xFEEEFEEEFEEEFEEEuLL, v39 >> 1);
            if ( (v39 & 1) != 0 )
              v38[v39 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v40 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v25);
        else
          Entry = (_QWORD *)*v40;
        if ( v40 != Entry )
        {
          v42 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v42 )
            {
              v43 = *((_DWORD *)Entry - 2);
              v42 = *(_DWORD *)(a1 + 124);
              LOWORD(v71) = v43;
              if ( (v43 & v42) != 0 )
                v71 = *(_DWORD *)(a1 + 136) ^ v43;
              v44 = v71;
            }
            else
            {
              v44 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v25 <= (unsigned __int64)v44 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v40 != Entry );
        }
        v45 = (__int64 *)Entry[1];
        v32 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v45 == Entry )
        {
          *v32 = Entry;
          *(_QWORD *)(a3 + 24) = v45;
          *v45 = (__int64)v32;
          Entry[1] = v32;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v45, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v33 = *(__int64 **)(a1 + 312);
        if ( v33 )
        {
          v34 = *(unsigned __int16 *)(a3 + 8);
          for ( j = *((unsigned int *)v33 + 2); v34 >= j; j = *((unsigned int *)v47 + 2) )
          {
            v47 = (__int64 *)*v33;
            if ( !*v33 )
              goto LABEL_84;
            v33 = (__int64 *)*v33;
          }
          goto LABEL_52;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v26 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v27 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v25);
        else
          v27 = (_QWORD *)*v26;
        if ( v26 != v27 )
        {
          v28 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v28 )
            {
              v29 = *((_DWORD *)v27 - 2);
              v28 = *(_DWORD *)(a1 + 124);
              LOWORD(v70) = v29;
              if ( (v29 & v28) != 0 )
                v70 = *(_DWORD *)(a1 + 136) ^ v29;
              v30 = v70;
            }
            else
            {
              v30 = *((_WORD *)v27 - 4);
            }
            if ( (unsigned __int16)v25 <= (unsigned __int64)v30 )
              break;
            v27 = (_QWORD *)*v27;
          }
          while ( v26 != v27 );
        }
        v31 = (__int64 *)v27[1];
        v32 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v31 == v27 )
        {
          *v32 = v27;
          *(_QWORD *)(a3 + 24) = v31;
          *v31 = (__int64)v32;
          v27[1] = v32;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v27, 0, *v31, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v33 = *(__int64 **)(a1 + 312);
        if ( v33 )
        {
          v34 = *(unsigned __int16 *)(a3 + 8);
          for ( k = *((unsigned int *)v33 + 2); v34 >= k; k = *((unsigned int *)v36 + 2) )
          {
            v36 = (__int64 *)*v33;
            if ( !*v33 )
              goto LABEL_84;
            v33 = (__int64 *)*v33;
          }
          goto LABEL_52;
        }
      }
      goto LABEL_54;
    }
    RtlpLogHeapFailure(13, a1, v12 + 16, v16, v15, 0LL);
    if ( v7 )
      return 0;
    v7 = 1;
  }
  *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v49 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v50 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
    else
      v50 = (_QWORD *)*v49;
    if ( v49 != v50 )
    {
      v51 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v51 )
        {
          v52 = *((_DWORD *)v50 - 2);
          v51 = *(_DWORD *)(a1 + 124);
          LOWORD(v72) = v52;
          if ( (v51 & v52) != 0 )
            v72 = *(_DWORD *)(a1 + 136) ^ v52;
          v53 = v72;
        }
        else
        {
          v53 = *((_WORD *)v50 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v53 )
          break;
        v50 = (_QWORD *)*v50;
      }
      while ( v49 != v50 );
    }
    v54 = (__int64 *)v50[1];
    v32 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v54 == v50 )
    {
      *v32 = v50;
      *(_QWORD *)(a3 + 24) = v54;
      *v54 = (__int64)v32;
      v50[1] = v32;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v50, 0, *v54, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
    v33 = *(__int64 **)(a1 + 312);
    if ( v33 )
    {
      v34 = *(unsigned __int16 *)(a3 + 8);
      for ( m = *((unsigned int *)v33 + 2); v34 >= m; m = *((unsigned int *)v56 + 2) )
      {
        v56 = (__int64 *)*v33;
        if ( !*v33 )
        {
LABEL_84:
          v37 = *((_DWORD *)v33 + 2) - 1;
          goto LABEL_53;
        }
        v33 = (__int64 *)*v33;
      }
LABEL_52:
      v37 = v34;
LABEL_53:
      RtlpHeapAddListEntry(a1, (_DWORD)v33, v37, (_DWORD)v32, v37, v34);
    }
LABEL_54:
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
      *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    return 1;
  }
  *(_BYTE *)(a3 + 10) &= 0xF0u;
  if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
  {
    v57 = (_DWORD *)(a3 + 32);
    v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v58 )
    {
      if ( ((unsigned __int8)v57 & 4) != 0 )
      {
        --v58;
        *v57 = -17891602;
        v57 = (_DWORD *)(a3 + 36);
      }
      memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
      if ( (v58 & 1) != 0 )
        v57[v58 - 1] = -17891602;
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v59 = (_QWORD *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v60 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
  else
    v60 = (_QWORD *)*v59;
  if ( v59 != v60 )
  {
    v61 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v61 )
      {
        v62 = *((_DWORD *)v60 - 2);
        v61 = *(_DWORD *)(a1 + 124);
        LOWORD(v73) = v62;
        if ( (v61 & v62) != 0 )
          v73 = *(_DWORD *)(a1 + 136) ^ v62;
        v63 = v73;
      }
      else
      {
        v63 = *((_WORD *)v60 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
        break;
      v60 = (_QWORD *)*v60;
    }
    while ( v59 != v60 );
  }
  v64 = (__int64 *)v60[1];
  v65 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v64 == v60 )
  {
    *v65 = v60;
    *(_QWORD *)(a3 + 24) = v64;
    *v64 = (__int64)v65;
    v60[1] = v65;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v60, 0, *v64, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
  v66 = *(__int64 **)(a1 + 312);
  if ( v66 )
  {
    for ( n = *((unsigned int *)v66 + 2); ; n = *((unsigned int *)v68 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 8) < n )
      {
        v69 = *(unsigned __int16 *)(a3 + 8);
        goto LABEL_137;
      }
      v68 = (__int64 *)*v66;
      if ( !*v66 )
        break;
      v66 = (__int64 *)*v66;
    }
    v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_137:
    RtlpHeapAddListEntry(a1, (_DWORD)v66, v69, a3 + 16, v69, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
