/*
 * XREFs of RtlpAddIntersectingRanges @ 0x1407BD114
 * Callers:
 *     RtlpAddRange @ 0x140764674 (RtlpAddRange.c)
 * Callees:
 *     RtlpCopyRangeListEntry @ 0x140761450 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140761828 (RtlpFreeRangeListEntry.c)
 *     RtlpAddToMergedRange @ 0x1407BD230 (RtlpAddToMergedRange.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  __int64 v7; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rsi
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  bool v21; // cf
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rdx
  __int64 v25; // rbp
  __int64 i; // rax
  __int64 v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rdx

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != (_QWORD *)(a2 + 40) )
  {
    v16 = a3[1];
    do
    {
      if ( v16 < *(_QWORD *)a2 )
        break;
      if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
      {
        v17 = *(_QWORD *)(a2 + 16);
        v18 = v17 - 40;
        if ( a2 != v17 - 16 )
        {
          v19 = *a3;
          do
          {
            v20 = *(_QWORD *)v18;
            v21 = v19 < *(_QWORD *)v18;
            if ( v19 > *(_QWORD *)v18 )
            {
              if ( *(_QWORD *)(v18 + 8) < v19 )
                goto LABEL_30;
              v21 = v19 < v20;
            }
            if ( (!v21 || v16 >= v20) && (!v4 || (*(_BYTE *)(v18 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_30:
            v18 = *(_QWORD *)(v18 + 40) - 40LL;
          }
          while ( a2 != v18 + 24 );
        }
      }
      else if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v22 = *(_QWORD **)(a2 + 40);
      a2 = (__int64)(v22 - 5);
    }
    while ( a1 != v22 );
  }
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)(v7 + 16);
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    *(_WORD *)(v7 + 34) = 1;
    v13[5] = v7 + 16;
    v13[6] = v7 + 16;
    *(_QWORD *)(v7 + 24) = v13 + 5;
    *(_QWORD *)(v7 + 16) = v13 + 5;
  }
  v9 = *(_QWORD **)(v7 + 40);
  v10 = v9 - 5;
  while ( 1 )
  {
    v11 = *v9 - 40LL;
    if ( a1 == v9 || (unsigned __int64)a3[1] < *v10 )
      return RtlpAddToMergedRange(v7, a3, a4);
    if ( (*((_BYTE *)v10 + 34) & 1) != 0 )
    {
      v23 = (_QWORD *)v10[2];
      v24 = v23 - 5;
      v25 = *v23 - 40LL;
      for ( i = (__int64)(v23 - 2); v10 != (_QWORD *)i; i = v29 + 24 )
      {
        v27 = v24[5];
        if ( *(_QWORD **)(v27 + 8) != v24 + 5 )
          goto LABEL_16;
        v28 = (_QWORD *)v24[6];
        if ( (_QWORD *)*v28 != v24 + 5 )
          goto LABEL_16;
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        RtlpAddToMergedRange(v7, v24, a4);
        v29 = v25;
        v24 = (_QWORD *)v25;
        v25 = *(_QWORD *)(v25 + 40) - 40LL;
      }
      v30 = v10[5];
      if ( *(_QWORD **)(v30 + 8) != v10 + 5 || (v31 = (_QWORD *)v10[6], (_QWORD *)*v31 != v10 + 5) )
LABEL_16:
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      RtlpFreeRangeListEntry(v10);
    }
    else
    {
      v14 = v10[5];
      if ( *(_QWORD **)(v14 + 8) != v10 + 5 )
        goto LABEL_16;
      v15 = (_QWORD *)v10[6];
      if ( (_QWORD *)*v15 != v10 + 5 )
        goto LABEL_16;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlpAddToMergedRange(v7, v10, a4);
    }
    v10 = (_QWORD *)v11;
    v9 = (_QWORD *)(v11 + 40);
  }
}
