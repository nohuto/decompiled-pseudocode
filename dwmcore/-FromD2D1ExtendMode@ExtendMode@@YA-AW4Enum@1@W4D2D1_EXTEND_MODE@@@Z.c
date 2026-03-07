char __fastcall ExtendMode::FromD2D1ExtendMode(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return 1;
  v2 = a1 - 1;
  if ( !v2 )
    return 2;
  if ( v2 != 1 )
    return 1;
  return 3;
}
