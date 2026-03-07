__int64 __fastcall BiConvertElementFormatToValueType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 3LL;
  v2 = v1 - 1;
  if ( !v2 )
    return 1LL;
  v4 = v2 - 1;
  if ( !v4 )
    return 1LL;
  if ( v4 == 1 )
    return 7LL;
  else
    return 3LL;
}
