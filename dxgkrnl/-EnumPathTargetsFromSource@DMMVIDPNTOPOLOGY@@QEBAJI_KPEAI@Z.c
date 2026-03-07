__int64 __fastcall DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(
        DMMVIDPNTOPOLOGY *this,
        char *a2,
        __int64 a3,
        unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int *v5; // rdi
  char *v8; // r8
  DMMVIDPNTOPOLOGY *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  char *v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  v4 = (unsigned int)a2;
  v5 = a4;
  if ( !a4 )
    WdLogSingleEntry0(1LL);
  *v5 = -1;
  v8 = (char *)this + 24;
  v9 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v10 = 0LL;
  if ( v9 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    goto LABEL_5;
  a4 = (unsigned int *)((char *)v9 - 8);
  a2 = (char *)v9 - 8;
  if ( v9 == (DMMVIDPNTOPOLOGY *)8 )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL) == (_DWORD)v4 )
    {
      if ( v10 == a3 )
      {
        result = 0LL;
        *v5 = *(_DWORD *)(*((_QWORD *)a2 + 12) + 24LL);
        return result;
      }
      ++v10;
    }
    v12 = (char *)*((_QWORD *)a2 + 1);
    a2 = v12 - 8;
    if ( v12 == v8 )
      a2 = 0LL;
  }
  while ( a2 );
  if ( !a4 )
  {
LABEL_5:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, a2, v8, a4) + 24) = this;
    return 3223192377LL;
  }
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdTrace(0LL, 0LL, v8, a4);
    *(_QWORD *)(v14 + 24) = v4;
    *(_QWORD *)(v14 + 32) = this;
    return 3223192377LL;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, 0LL, v8, a4);
  v13[3] = this;
  v13[4] = v4;
  v13[5] = a3;
  return 1075708748LL;
}
