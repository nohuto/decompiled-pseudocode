__int64 __fastcall ExtendMode::ToD2D1ExtendMode(char a1)
{
  if ( !a1 || a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return 1LL;
  if ( a1 != 3 )
    return 0LL;
  return 2LL;
}
