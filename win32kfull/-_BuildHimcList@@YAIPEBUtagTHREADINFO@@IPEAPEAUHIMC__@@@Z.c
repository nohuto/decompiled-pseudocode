__int64 __fastcall _BuildHimcList(const struct tagTHREADINFO *a1, unsigned int a2, struct HIMC__ **a3)
{
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 j; // rdx
  __int64 k; // r8

  v5 = 0LL;
  if ( a1 )
  {
    for ( i = *((_QWORD *)a1 + 99); i && (unsigned int)v5 < a2; i = *(_QWORD *)(i + 56) )
    {
      a3[v5] = *(struct HIMC__ **)i;
      v5 = (unsigned int)(v5 + 1);
    }
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    for ( j = *(_QWORD *)(v9 + 320); j; j = *(_QWORD *)(j + 664) )
    {
      for ( k = *(_QWORD *)(j + 792); k && (unsigned int)v5 < a2; k = *(_QWORD *)(k + 56) )
      {
        a3[v5] = *(struct HIMC__ **)k;
        v5 = (unsigned int)(v5 + 1);
      }
    }
  }
  return (unsigned int)v5;
}
