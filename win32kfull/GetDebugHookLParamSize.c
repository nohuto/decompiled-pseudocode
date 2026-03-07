__int64 __fastcall GetDebugHookLParamSize(unsigned __int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = 0;
  if ( a1 > 6 )
  {
    switch ( a1 )
    {
      case 7uLL:
        return 40;
      case 0xAuLL:
        if ( *(_DWORD *)(a2 + 24) != 5 )
          return v2;
        return 16;
      case 0xCuLL:
        return 40;
    }
    if ( a1 != -1LL )
      return v2;
    return 48;
  }
  if ( a1 == 6 )
    return 48;
  if ( !a1 )
    return 24;
  v3 = a1 - 1;
  if ( !v3 )
    return 24;
  v4 = v3 - 2;
  if ( !v4 )
    return 48;
  v5 = v4 - 1;
  if ( !v5 )
    return 32;
  if ( v5 != 1 )
    return v2;
  v6 = *(_DWORD *)(a2 + 24);
  if ( !v6 )
    return 16;
  v7 = v6 - 3;
  if ( !v7 )
    return 16;
  v8 = v7 - 2;
  if ( !v8 )
    return 16;
  if ( v8 == 1 )
    return 40;
  return v2;
}
