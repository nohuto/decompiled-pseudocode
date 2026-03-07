bool __fastcall IsSAS(__int64 a1, unsigned int *a2)
{
  int v2; // esi
  int v3; // ebp
  __int64 i; // rdi
  __int64 v6; // rcx
  bool result; // al
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ecx

  v2 = 0;
  v3 = (unsigned __int8)a1;
  for ( i = 0LL; ; i += 8LL )
  {
    if ( !*(_DWORD *)(i + SGDGetUserSessionState(a1) + 13804) )
      return 0;
    if ( v3 == *(_DWORD *)(i + SGDGetUserSessionState(v6) + 13804) )
    {
      v8 = *(_DWORD *)(SGDGetUserSessionState(a1) + 13796);
      if ( v8 == *(_DWORD *)(i + SGDGetUserSessionState(v9) + 13800) )
        break;
    }
    if ( (unsigned int)++v2 >= 2 )
      return 0;
  }
  v10 = *(_DWORD *)(SGDGetUserSessionState(a1) + 13796);
  result = 1;
  *a2 = v10;
  return result;
}
