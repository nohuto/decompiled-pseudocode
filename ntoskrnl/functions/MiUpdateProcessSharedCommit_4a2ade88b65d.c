_QWORD *__fastcall MiUpdateProcessSharedCommit(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // r9
  _QWORD *v4; // r8
  _QWORD *i; // rcx
  _QWORD **v6; // rcx
  __int64 v7; // rcx
  volatile signed __int64 *v8; // rcx
  _QWORD *v9; // rcx

  result = (_QWORD *)MiIncludeSharedCommit(a1);
  if ( (_DWORD)result )
  {
    result = *(_QWORD **)v2;
    v4 = 0LL;
    for ( i = *(_QWORD **)(*(_QWORD *)v2 + 72LL); i; i = (_QWORD *)*i )
      v4 = i;
    while ( v4 )
    {
      v7 = v4[3];
      if ( (v7 & 1) != 0 )
        v8 = (volatile signed __int64 *)((v7 & 0xFFFFFFFFFFFFFFFEuLL) + 1552);
      else
        v8 = (volatile signed __int64 *)(v7 + 2344);
      _InterlockedExchangeAdd64(v8, v3);
      result = (_QWORD *)v4[1];
      v9 = v4;
      if ( result )
      {
        v6 = (_QWORD **)*result;
        v4 = (_QWORD *)v4[1];
        if ( *result )
        {
          do
          {
            result = *v6;
            v4 = v6;
            v6 = (_QWORD **)result;
          }
          while ( result );
        }
      }
      else
      {
        while ( 1 )
        {
          v4 = (_QWORD *)(v4[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v4 || (_QWORD *)*v4 == v9 )
            break;
          v9 = v4;
        }
      }
    }
  }
  return result;
}
