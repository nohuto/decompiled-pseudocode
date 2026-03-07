__int64 __fastcall KeFindConfigurationNextEntry(__int64 a1, int a2, int a3, int *a4, __int64 *a5)
{
  __int64 v8; // rbx
  int v9; // ebp
  __int64 v10; // rdx
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v13; // rcx

  v8 = a1;
  if ( a4 )
    v9 = *a4;
  else
    v9 = 0;
  if ( !a1 )
    return 0LL;
  while ( 2 )
  {
    v10 = *a5;
    if ( *a5 )
    {
      if ( v8 == v10 )
      {
        *a5 = 0LL;
        v10 = 0LL;
      }
LABEL_7:
      for ( i = *(_QWORD *)(v8 + 16); i; i = *(_QWORD *)(i + 16) )
      {
        if ( v10 )
        {
          if ( i == v10 )
          {
            *a5 = 0LL;
            v10 = 0LL;
          }
        }
        else if ( *(_DWORD *)(i + 24) == a2 && *(_DWORD *)(i + 28) == a3 && (a4 != 0LL ? *(_DWORD *)(i + 40) : 0) == v9 )
        {
          return i;
        }
        v13 = *(_QWORD *)(i + 8);
        if ( v13 )
        {
          result = KeFindConfigurationNextEntry(v13, a2, a3, (_DWORD)a4, (__int64)a5);
          if ( result )
            return result;
          v10 = *a5;
        }
      }
      v8 = *(_QWORD *)(v8 + 8);
      if ( v8 )
        continue;
      return 0LL;
    }
    break;
  }
  if ( *(_DWORD *)(v8 + 24) != a2 || *(_DWORD *)(v8 + 28) != a3 || (a4 != 0LL ? *(_DWORD *)(v8 + 40) : 0) != v9 )
    goto LABEL_7;
  return v8;
}
