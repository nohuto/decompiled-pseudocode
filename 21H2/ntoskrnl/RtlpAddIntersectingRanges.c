/*
 * XREFs of RtlpAddIntersectingRanges @ 0x14083A1D0
 * Callers:
 *     RtlpAddRange @ 0x14083A0B4 (RtlpAddRange.c)
 * Callees:
 *     RtlpFreeRangeListEntry @ 0x1408398AC (RtlpFreeRangeListEntry.c)
 *     RtlpAddToMergedRange @ 0x14083A2EC (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x14083A490 (RtlpCopyRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(unsigned __int64 *a1, unsigned __int64 *a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 **v15; // rdx
  unsigned __int64 v16; // r11
  unsigned __int64 *v17; // rax
  unsigned __int64 *v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  bool v21; // cf
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 *v24; // rax
  unsigned __int64 *i; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 **v27; // rcx
  __int64 v28; // rbp
  unsigned __int64 v29; // rcx
  unsigned __int64 **v30; // rdx

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != a2 + 5 )
  {
    v16 = a3[1];
    do
    {
      if ( v16 < *a2 )
        break;
      if ( (*((_BYTE *)a2 + 34) & 1) != 0 )
      {
        v17 = (unsigned __int64 *)a2[2];
        v18 = v17 - 5;
        if ( a2 + 2 != v17 )
        {
          v19 = *a3;
          do
          {
            v20 = *v18;
            v21 = v19 < *v18;
            if ( v19 > *v18 )
            {
              if ( v18[1] < v19 )
                goto LABEL_30;
              v21 = v19 < v20;
            }
            if ( (!v21 || v16 >= v20) && (!v4 || (*((_BYTE *)v18 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_30:
            v22 = (unsigned __int64 *)v18[5];
            v18 = v22 - 5;
          }
          while ( a2 + 2 != v22 );
        }
      }
      else if ( !v4 || (*((_BYTE *)a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v23 = (unsigned __int64 *)a2[5];
      a2 = v23 - 5;
    }
    while ( a1 != v23 );
  }
  if ( (*((_BYTE *)v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*((_BYTE *)v7 + 33) & 0x10) != 0 )
    {
      --*(_DWORD *)v7[2];
      *((_BYTE *)v7 + 33) &= ~0x10u;
    }
    *((_WORD *)v7 + 17) = 1;
    *(_QWORD *)(v13 + 40) = v7 + 2;
    *(_QWORD *)(v13 + 48) = v7 + 2;
    v7[3] = v13 + 40;
    v7[2] = v13 + 40;
  }
  v9 = (unsigned __int64 *)v7[5];
  v10 = v9 - 5;
  while ( 1 )
  {
    v11 = *v9 - 40;
    if ( a1 == v9 || a3[1] < *v10 )
      return RtlpAddToMergedRange(v7, a3, a4);
    if ( (*((_BYTE *)v10 + 34) & 1) != 0 )
    {
      v24 = (unsigned __int64 *)v10[2];
      for ( i = v24 - 5; ; i = (_QWORD *)v28 )
      {
        v28 = *v24 - 40;
        if ( v10 + 2 == v24 )
          break;
        v26 = *v24;
        if ( *(unsigned __int64 **)(*v24 + 8) != v24 )
          goto LABEL_16;
        v27 = (_QWORD *)v24[1];
        if ( (unsigned __int64 *)*v27 != v24 )
          goto LABEL_16;
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        RtlpAddToMergedRange(v7, i, a4);
        v24 = (unsigned __int64 *)(v28 + 40);
      }
      v29 = v10[5];
      if ( *(unsigned __int64 **)(v29 + 8) != v10 + 5 || (v30 = (unsigned __int64 **)v10[6], *v30 != v10 + 5) )
LABEL_16:
        __fastfail(3u);
      *v30 = (unsigned __int64 *)v29;
      *(_QWORD *)(v29 + 8) = v30;
      RtlpFreeRangeListEntry(v10);
    }
    else
    {
      v14 = v10[5];
      if ( *(unsigned __int64 **)(v14 + 8) != v10 + 5 )
        goto LABEL_16;
      v15 = (unsigned __int64 **)v10[6];
      if ( *v15 != v10 + 5 )
        goto LABEL_16;
      *v15 = (unsigned __int64 *)v14;
      *(_QWORD *)(v14 + 8) = v15;
      RtlpAddToMergedRange(v7, v10, a4);
    }
    v10 = (unsigned __int64 *)v11;
    v9 = (unsigned __int64 *)(v11 + 40);
  }
}
