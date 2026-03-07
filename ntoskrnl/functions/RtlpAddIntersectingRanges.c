__int64 __fastcall RtlpAddIntersectingRanges(unsigned __int64 *a1, unsigned __int64 *a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v13; // rdx
  _DWORD **v14; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 *v16; // rax
  unsigned __int64 *v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rax
  bool v20; // cf
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 *i; // rdx
  unsigned __int64 v25; // r8
  unsigned __int64 **v26; // rcx
  __int64 v27; // rbp
  unsigned __int64 v28; // rcx
  unsigned __int64 **v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 **v31; // rcx

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 && a1 != a2 + 5 )
  {
    v15 = a3[1];
    do
    {
      if ( v15 < *a2 )
        break;
      if ( (*((_BYTE *)a2 + 34) & 1) != 0 )
      {
        v16 = (unsigned __int64 *)a2[2];
        v17 = v16 - 5;
        if ( a2 + 2 != v16 )
        {
          v18 = *a3;
          do
          {
            v19 = *v17;
            v20 = v18 < *v17;
            if ( v18 > *v17 )
            {
              if ( v17[1] < v18 )
                goto LABEL_25;
              v20 = v18 < v19;
            }
            if ( (!v20 || v15 >= v19) && (!v4 || (*((_BYTE *)v17 + 33) & 1) == 0) )
              return 3221226114LL;
LABEL_25:
            v21 = (unsigned __int64 *)v17[5];
            v17 = v21 - 5;
          }
          while ( a2 + 2 != v21 );
        }
      }
      else if ( !v4 || (*((_BYTE *)a2 + 33) & 1) == 0 )
      {
        return 3221226114LL;
      }
      v22 = (unsigned __int64 *)a2[5];
      a2 = v22 - 5;
    }
    while ( a1 != v22 );
  }
  if ( (*((_BYTE *)v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    v14 = (_DWORD **)(v7 + 2);
    if ( (*((_BYTE *)v7 + 33) & 0x10) != 0 )
    {
      --**v14;
      *((_BYTE *)v7 + 33) &= ~0x10u;
    }
    *((_WORD *)v7 + 17) = 1;
    *(_QWORD *)(v13 + 40) = v14;
    *(_QWORD *)(v13 + 48) = v14;
    v7[3] = v13 + 40;
    *v14 = (_DWORD *)(v13 + 40);
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
      v23 = (unsigned __int64 *)v10[2];
      for ( i = v23 - 5; ; i = (_QWORD *)v27 )
      {
        v27 = *v23 - 40;
        if ( v10 + 2 == v23 )
          break;
        v25 = *v23;
        if ( *(unsigned __int64 **)(*v23 + 8) != v23 )
          goto LABEL_45;
        v26 = (_QWORD *)v23[1];
        if ( (unsigned __int64 *)*v26 != v23 )
          goto LABEL_45;
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        RtlpAddToMergedRange(v7, i, a4);
        v23 = (unsigned __int64 *)(v27 + 40);
      }
      v28 = v10[5];
      if ( *(unsigned __int64 **)(v28 + 8) != v10 + 5 || (v29 = (unsigned __int64 **)v10[6], *v29 != v10 + 5) )
LABEL_45:
        __fastfail(3u);
      *v29 = (unsigned __int64 *)v28;
      *(_QWORD *)(v28 + 8) = v29;
      RtlpFreeRangeListEntry(v10);
    }
    else
    {
      v30 = v10[5];
      if ( *(unsigned __int64 **)(v30 + 8) != v10 + 5 )
        goto LABEL_45;
      v31 = (unsigned __int64 **)v10[6];
      if ( *v31 != v10 + 5 )
        goto LABEL_45;
      *v31 = (unsigned __int64 *)v30;
      *(_QWORD *)(v30 + 8) = v31;
      RtlpAddToMergedRange(v7, v10, a4);
    }
    v10 = (unsigned __int64 *)v11;
    v9 = (unsigned __int64 *)(v11 + 40);
  }
}
