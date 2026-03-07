__int64 __fastcall DMMVIDPNTOPOLOGY::GetPathSourceFromTarget(
        DMMVIDPNTOPOLOGY *this,
        _QWORD *a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v9; // rax
  __int64 v10; // rax

  v5 = (unsigned int)a2;
  v6 = (_QWORD *)((char *)this + 24);
  v7 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
    goto LABEL_3;
  a2 = v7 - 1;
  a4 = 0LL;
  a3 = v7 - 1;
  if ( v7 == (_QWORD *)8 )
    goto LABEL_3;
  do
  {
    if ( *(_DWORD *)(a3[12] + 24LL) == (_DWORD)v5 )
      return *(unsigned int *)(a3[11] + 24LL);
    v9 = (_QWORD *)a3[1];
    a3 = v9 - 1;
    if ( v9 == v6 )
      a3 = 0LL;
  }
  while ( a3 );
  if ( !a2 )
  {
LABEL_3:
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, a2, a3, a4) + 24) = this;
  }
  else
  {
    v10 = WdLogNewEntry5_WdTrace(v6, a2, 0LL, 0LL);
    *(_QWORD *)(v10 + 24) = v5;
    *(_QWORD *)(v10 + 32) = this;
  }
  return 0xFFFFFFFFLL;
}
