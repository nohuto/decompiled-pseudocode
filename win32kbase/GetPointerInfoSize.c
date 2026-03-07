__int64 __fastcall GetPointerInfoSize(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 96LL;
  v2 = v1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return 120LL;
    if ( v3 != 2 )
      return 0LL;
  }
  return 144LL;
}
