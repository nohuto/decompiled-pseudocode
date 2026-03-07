__int64 __fastcall BlendMode::FromMilCompositingMode(int a1)
{
  int v2; // ecx
  int v3; // ecx

  if ( !a1 )
    return 0LL;
  v2 = a1 - 1;
  if ( !v2 )
    return 5LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 21LL;
  if ( v3 != 2 )
    return 0LL;
  return 22LL;
}
