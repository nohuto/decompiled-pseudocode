__int64 __fastcall ConvertDisplayConfigRotationToDMDO(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return 0LL;
  v3 = v1 - 1;
  if ( !v3 )
    return 1LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 2LL;
  if ( v4 != 1 )
    return 0LL;
  return 3LL;
}
