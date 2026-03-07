__int64 __fastcall ValidateNewParent(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *i; // rax
  __int64 v9; // rcx

  if ( *(char *)(a1[5] + 19LL) >= 0 && *(char *)(a2[5] + 19LL) >= 0 && (unsigned int)ValidateParentDepth() )
  {
    if ( !a3 && !(unsigned int)ProtectedContentAccessCheck(a1) )
    {
      v9 = 5LL;
      goto LABEL_17;
    }
    if ( a2[3] == a1[3] && (unsigned int)IsParentBandValid(a1, a2) )
    {
      v6 = a2;
      while ( a1 != v6 )
      {
        v6 = (_QWORD *)v6[13];
        if ( !v6 )
        {
          for ( i = (_QWORD *)a2[15]; i; i = (_QWORD *)i[15] )
          {
            if ( a1 == i )
              goto LABEL_16;
          }
          return 1LL;
        }
      }
    }
  }
LABEL_16:
  v9 = 87LL;
LABEL_17:
  UserSetLastError(v9);
  return 0LL;
}
