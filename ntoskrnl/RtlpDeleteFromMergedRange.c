__int64 __fastcall RtlpDeleteFromMergedRange(_QWORD *Entry, _QWORD *a2)
{
  int v2; // ebx
  _QWORD **v3; // r8
  PVOID *v6; // rdx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rbx
  _QWORD **v18; // r8
  PVOID *v19; // rdx
  _QWORD *v20; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v3 = (_QWORD **)Entry[5];
  if ( v3[1] != Entry + 5 )
    goto LABEL_18;
  v6 = (PVOID *)Entry[6];
  if ( *v6 != Entry + 5 )
    goto LABEL_18;
  *v6 = v3;
  v3[1] = v6;
  v21 = &v20;
  v20 = &v20;
  v7 = (_QWORD *)a2[2];
  v8 = v7 - 5;
  v9 = *v7 - 40LL;
  if ( a2 + 2 == v7 )
    goto LABEL_15;
  do
  {
    v10 = *v7;
    if ( *(_QWORD **)(*v7 + 8LL) != v7 )
      goto LABEL_18;
    v11 = (_QWORD *)v7[1];
    if ( (_QWORD *)*v11 != v7 )
      goto LABEL_18;
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *((_BYTE *)v8 + 33) &= ~2u;
    v2 = RtlpAddRange(&v20, v8, 1LL);
    if ( v2 < 0 )
    {
      v15 = v20 - 5;
      v16 = v20;
      while ( 1 )
      {
        v17 = *v16 - 40LL;
        if ( &v20 == v16 )
          break;
        RtlpAddToMergedRange(a2, v15, 1LL);
        v16 = (_QWORD *)(v17 + 40);
        v15 = (_QWORD *)v17;
      }
      return RtlpAddToMergedRange(a2, Entry, 1LL);
    }
    v7 = (_QWORD *)(v9 + 40);
    v8 = (_QWORD *)v9;
    v9 = *(_QWORD *)(v9 + 40) - 40LL;
  }
  while ( a2 + 2 != v7 );
  if ( v20 != &v20 )
  {
    v12 = (_QWORD *)a2[6];
    v13 = a2[5];
    *v12 = v20;
    v20[1] = v12;
    *(_QWORD *)(v13 + 8) = v21;
    *v21 = v13;
    goto LABEL_10;
  }
LABEL_15:
  v18 = (_QWORD **)a2[5];
  if ( v18[1] != a2 + 5 || (v19 = (PVOID *)a2[6], *v19 != a2 + 5) )
LABEL_18:
    __fastfail(3u);
  *v19 = v18;
  v18[1] = v19;
LABEL_10:
  RtlpFreeRangeListEntry(Entry);
  RtlpFreeRangeListEntry(a2);
  return (unsigned int)v2;
}
