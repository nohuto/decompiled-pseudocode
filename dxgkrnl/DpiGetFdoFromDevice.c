__int64 __fastcall DpiGetFdoFromDevice(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 v4; // rcx

  v1 = 0LL;
  if ( !a1 )
    return 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 16) != 1953656900 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 20) == 3 )
  {
    v4 = *(_QWORD *)(v2 + 2728);
    if ( v4 )
    {
      v2 = *(_QWORD *)(v4 + 64);
      if ( !v2 )
        return 0LL;
    }
  }
  if ( *(_DWORD *)(v2 + 16) != 1953656900 )
    return 0LL;
  if ( *(_DWORD *)(v2 + 20) == 2 )
    return v2;
  return v1;
}
