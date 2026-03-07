__int64 __fastcall IsCodePointTypeNoisy(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx

  if ( a1 <= 38 )
  {
    if ( a1 == 38 )
      return 1LL;
    v8 = a1 - 17;
    if ( !v8 )
      return 1LL;
    v9 = v8 - 8;
    if ( !v9 )
      return 1LL;
    v10 = v9 - 3;
    if ( !v10 )
      return 1LL;
    v11 = v10 - 4;
    if ( !v11 )
      return 1LL;
    v12 = v11 - 1;
    if ( !v12 )
      return 1LL;
    return v12 == 4;
  }
  else
  {
    v1 = a1 - 39;
    if ( !v1 )
      return 1LL;
    v2 = v1 - 3;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 18;
    if ( !v3 )
      return 1LL;
    v4 = v3 - 17;
    if ( !v4 )
      return 1LL;
    v6 = v4 - 40;
    if ( !v6 )
      return 1LL;
    return v6 == 1;
  }
}
