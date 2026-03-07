__int64 __fastcall UmfdQueryFontCapsEx(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edx
  int v5; // edx
  int v6; // edx

  v3 = *(_DWORD *)(a1 + 8);
  *a3 = 2;
  if ( !v3 )
  {
    a3[1] = 3;
    return 2LL;
  }
  v5 = v3 - 1;
  if ( !v5 )
  {
    a3[1] = 2;
    return 2LL;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    a3[1] = 1;
    return 2LL;
  }
  if ( v6 == 1 )
  {
    a3[1] = 7;
    return 2LL;
  }
  *a3 = 0;
  return 0xFFFFFFFFLL;
}
