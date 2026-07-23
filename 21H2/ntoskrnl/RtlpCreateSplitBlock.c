/*
 * XREFs of RtlpCreateSplitBlock @ 0x140589AB0
 * Callers:
 *     RtlpAllocateHeap @ 0x140588D60 (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140272780 (DbgPrint.c)
 *     RtlCompareMemoryUlong @ 0x140408410 (RtlCompareMemoryUlong.c)
 *     RtlpInsertFreeBlock @ 0x14058B5DC (RtlpInsertFreeBlock.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1405937F0 (RtlpAnalyzeHeapFailure.c)
 *     RtlpFindEntry @ 0x140593EC4 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x140593FE8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1405942B8 (RtlpHeapRemoveListEntry.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v7; // r15d
  __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int16 v13; // r14
  __int64 v14; // rdi
  __int64 *v15; // rcx
  __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 *v19; // rdx
  unsigned __int64 v20; // r8
  unsigned __int64 i; // rax
  __int64 *v22; // rax
  int v23; // ecx
  char v24; // al
  SIZE_T v25; // r14
  SIZE_T v26; // rax
  unsigned __int64 v27; // r12
  _QWORD *v28; // rdi
  _QWORD *v29; // r8
  int v30; // ecx
  int v31; // eax
  unsigned __int16 v32; // ax
  __int64 *v33; // rax
  _QWORD *v34; // rdi
  __int64 *v35; // rdx
  unsigned __int64 v36; // rcx
  unsigned __int64 k; // rax
  __int64 *v38; // rax
  int v39; // r8d
  _DWORD *v40; // r8
  unsigned __int64 v41; // rdx
  _QWORD *v42; // rdi
  _QWORD *Entry; // r8
  int v44; // ecx
  int v45; // eax
  unsigned __int16 v46; // ax
  __int64 *v47; // rax
  unsigned __int64 j; // rax
  __int64 *v49; // rax
  _QWORD *v51; // rdi
  _QWORD *v52; // r8
  int v53; // ecx
  int v54; // eax
  unsigned __int16 v55; // ax
  __int64 *v56; // rax
  unsigned __int64 m; // rax
  __int64 *v58; // rax
  _DWORD *v59; // r8
  unsigned __int64 v60; // rdx
  _QWORD *v61; // rdi
  _QWORD *v62; // r8
  int v63; // ecx
  int v64; // eax
  unsigned __int16 v65; // ax
  __int64 *v66; // rax
  _QWORD *v67; // rdi
  __int64 *v68; // rdx
  unsigned __int64 n; // rax
  __int64 *v70; // rax
  int v71; // r8d
  int v72; // [rsp+38h] [rbp-38h]
  int v73; // [rsp+48h] [rbp-28h]
  int v74; // [rsp+58h] [rbp-18h]
  int v75; // [rsp+68h] [rbp-8h]
  __int64 *v76; // [rsp+D0h] [rbp+60h]

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
  v13 = a7;
  v14 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( ((*(_BYTE *)(v14 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v14 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v14 + 11) != (*(_BYTE *)(v14 + 8) ^ (unsigned __int8)(*(_BYTE *)(v14 + 9) ^ *(_BYTE *)(v14 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v15 = *(__int64 **)(v14 + 24);
    v16 = *(_QWORD *)(v14 + 16);
    v76 = v15;
    v17 = *v15;
    v18 = *(_QWORD *)(v16 + 8);
    if ( *v15 == v18 && v17 == v14 + 16 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v14 + 8);
      v19 = *(__int64 **)(a1 + 312);
      if ( v19 )
      {
        v20 = *(unsigned __int16 *)(v14 + 8);
        for ( i = *((unsigned int *)v19 + 2); ; i = *((unsigned int *)v22 + 2) )
        {
          if ( v20 < i )
          {
            v23 = *(unsigned __int16 *)(v14 + 8);
            goto LABEL_20;
          }
          v22 = (__int64 *)*v19;
          if ( !*v19 )
            break;
          v19 = (__int64 *)*v19;
        }
        v23 = *((_DWORD *)v19 + 2) - 1;
LABEL_20:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v19, v20, v14 + 16, v23, *(unsigned __int16 *)(v14 + 8));
        v15 = v76;
      }
      *v15 = v16;
      *(_QWORD *)(v16 + 8) = v15;
      if ( a5 )
      {
        v24 = *(_BYTE *)(v14 + 10);
        if ( (v24 & 4) != 0 )
        {
          v25 = 16LL * *(unsigned __int16 *)(v14 + 8) - 32;
          if ( (v24 & 2) != 0 && v25 > 4 )
            v25 = 16LL * *(unsigned __int16 *)(v14 + 8) - 36;
          v26 = RtlCompareMemoryUlong((PVOID)(v14 + 32), v25, 0xFEEEFEEE);
          if ( v26 != v25 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(a3 + 16 * a7),
              (const void *)(v26 + v14 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(a3 + 10) = *(_BYTE *)(v14 + 10);
      v27 = *(unsigned __int16 *)(v14 + 8) + a7;
      if ( v27 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, a3, v27);
        return 1;
      }
      *(_WORD *)(a3 + 8) = v27;
      *(_WORD *)(a3 + 16 * v27 + 12) = *(_WORD *)(a1 + 140) ^ v27;
      *(_BYTE *)(a3 + 15) = 0;
      if ( a5 )
      {
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
        {
          v40 = (_DWORD *)(a3 + 32);
          v41 = (16 * (unsigned __int64)(unsigned __int16)v27 - 32) >> 2;
          if ( v41 )
          {
            if ( ((unsigned __int8)v40 & 4) != 0 )
            {
              --v41;
              *v40 = -17891602;
              v40 = (_DWORD *)(a3 + 36);
            }
            memset64(v40, 0xFEEEFEEEFEEEFEEEuLL, v41 >> 1);
            if ( (v41 & 1) != 0 )
              v40[v41 - 1] = -17891602;
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v42 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v27);
        else
          Entry = (_QWORD *)*v42;
        if ( v42 != Entry )
        {
          v44 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v44 )
            {
              v45 = *((_DWORD *)Entry - 2);
              v44 = *(_DWORD *)(a1 + 124);
              LOWORD(v73) = v45;
              if ( (v45 & v44) != 0 )
                v73 = *(_DWORD *)(a1 + 136) ^ v45;
              v46 = v73;
            }
            else
            {
              v46 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)v27 <= (unsigned __int64)v46 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v42 != Entry );
        }
        v47 = (__int64 *)Entry[1];
        v34 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v47 == Entry )
        {
          *v34 = Entry;
          *(_QWORD *)(a3 + 24) = v47;
          *v47 = (__int64)v34;
          Entry[1] = v34;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)Entry, 0, *v47, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v35 = *(__int64 **)(a1 + 312);
        if ( v35 )
        {
          v36 = *(unsigned __int16 *)(a3 + 8);
          for ( j = *((unsigned int *)v35 + 2); v36 >= j; j = *((unsigned int *)v49 + 2) )
          {
            v49 = (__int64 *)*v35;
            if ( !*v35 )
              goto LABEL_84;
            v35 = (__int64 *)*v35;
          }
          goto LABEL_52;
        }
      }
      else
      {
        *(_BYTE *)(a3 + 10) = 0;
        v28 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v29 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v27);
        else
          v29 = (_QWORD *)*v28;
        if ( v28 != v29 )
        {
          v30 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v30 )
            {
              v31 = *((_DWORD *)v29 - 2);
              v30 = *(_DWORD *)(a1 + 124);
              LOWORD(v72) = v31;
              if ( (v31 & v30) != 0 )
                v72 = *(_DWORD *)(a1 + 136) ^ v31;
              v32 = v72;
            }
            else
            {
              v32 = *((_WORD *)v29 - 4);
            }
            if ( (unsigned __int16)v27 <= (unsigned __int64)v32 )
              break;
            v29 = (_QWORD *)*v29;
          }
          while ( v28 != v29 );
        }
        v33 = (__int64 *)v29[1];
        v34 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v33 == v29 )
        {
          *v34 = v29;
          *(_QWORD *)(a3 + 24) = v33;
          *v33 = (__int64)v34;
          v29[1] = v34;
        }
        else
        {
          RtlpLogHeapFailure(13, 0, (_DWORD)v29, 0, *v33, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v35 = *(__int64 **)(a1 + 312);
        if ( v35 )
        {
          v36 = *(unsigned __int16 *)(a3 + 8);
          for ( k = *((unsigned int *)v35 + 2); v36 >= k; k = *((unsigned int *)v38 + 2) )
          {
            v38 = (__int64 *)*v35;
            if ( !*v35 )
              goto LABEL_84;
            v35 = (__int64 *)*v35;
          }
          goto LABEL_52;
        }
      }
      goto LABEL_54;
    }
    RtlpLogHeapFailure(13, a1, v14 + 16, v18, v17, 0LL);
    if ( v7 )
      return 0;
    v7 = 1;
  }
  *(_WORD *)(v14 + 12) = *(_WORD *)(a1 + 140) ^ v13;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v51 = (_QWORD *)(a1 + 336);
    if ( *(_QWORD *)(a1 + 312) )
      v52 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
    else
      v52 = (_QWORD *)*v51;
    if ( v51 != v52 )
    {
      v53 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v53 )
        {
          v54 = *((_DWORD *)v52 - 2);
          v53 = *(_DWORD *)(a1 + 124);
          LOWORD(v74) = v54;
          if ( (v53 & v54) != 0 )
            v74 = *(_DWORD *)(a1 + 136) ^ v54;
          v55 = v74;
        }
        else
        {
          v55 = *((_WORD *)v52 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v55 )
          break;
        v52 = (_QWORD *)*v52;
      }
      while ( v51 != v52 );
    }
    v56 = (__int64 *)v52[1];
    v34 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v56 == v52 )
    {
      *v34 = v52;
      *(_QWORD *)(a3 + 24) = v56;
      *v56 = (__int64)v34;
      v52[1] = v34;
    }
    else
    {
      RtlpLogHeapFailure(13, 0, (_DWORD)v52, 0, *v56, 0LL);
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
    v35 = *(__int64 **)(a1 + 312);
    if ( v35 )
    {
      v36 = *(unsigned __int16 *)(a3 + 8);
      for ( m = *((unsigned int *)v35 + 2); v36 >= m; m = *((unsigned int *)v58 + 2) )
      {
        v58 = (__int64 *)*v35;
        if ( !*v35 )
        {
LABEL_84:
          v39 = *((_DWORD *)v35 + 2) - 1;
          goto LABEL_53;
        }
        v35 = (__int64 *)*v35;
      }
LABEL_52:
      v39 = v36;
LABEL_53:
      RtlpHeapAddListEntry(a1, (_DWORD)v35, v39, (_DWORD)v34, v39, v36);
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
    v59 = (_DWORD *)(a3 + 32);
    v60 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v60 )
    {
      if ( ((unsigned __int8)v59 & 4) != 0 )
      {
        --v60;
        *v59 = -17891602;
        v59 = (_DWORD *)(a3 + 36);
      }
      memset64(v59, 0xFEEEFEEEFEEEFEEEuLL, v60 >> 1);
      if ( (v60 & 1) != 0 )
        v59[v60 - 1] = -17891602;
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v61 = (_QWORD *)(a1 + 336);
  if ( *(_QWORD *)(a1 + 312) )
    v62 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
  else
    v62 = (_QWORD *)*v61;
  if ( v61 != v62 )
  {
    v63 = *(_DWORD *)(a1 + 124);
    do
    {
      if ( v63 )
      {
        v64 = *((_DWORD *)v62 - 2);
        v63 = *(_DWORD *)(a1 + 124);
        LOWORD(v75) = v64;
        if ( (v63 & v64) != 0 )
          v75 = *(_DWORD *)(a1 + 136) ^ v64;
        v65 = v75;
      }
      else
      {
        v65 = *((_WORD *)v62 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v65 )
        break;
      v62 = (_QWORD *)*v62;
    }
    while ( v61 != v62 );
  }
  v66 = (__int64 *)v62[1];
  v67 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v66 == v62 )
  {
    *v67 = v62;
    *(_QWORD *)(a3 + 24) = v66;
    *v66 = (__int64)v67;
    v62[1] = v67;
  }
  else
  {
    RtlpLogHeapFailure(13, 0, (_DWORD)v62, 0, *v66, 0LL);
  }
  *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
  v68 = *(__int64 **)(a1 + 312);
  if ( v68 )
  {
    for ( n = *((unsigned int *)v68 + 2); ; n = *((unsigned int *)v70 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 8) < n )
      {
        v71 = *(unsigned __int16 *)(a3 + 8);
        goto LABEL_137;
      }
      v70 = (__int64 *)*v68;
      if ( !*v68 )
        break;
      v68 = (__int64 *)*v68;
    }
    v71 = *((_DWORD *)v68 + 2) - 1;
LABEL_137:
    RtlpHeapAddListEntry(a1, (_DWORD)v68, v71, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
  }
  return 1;
}
