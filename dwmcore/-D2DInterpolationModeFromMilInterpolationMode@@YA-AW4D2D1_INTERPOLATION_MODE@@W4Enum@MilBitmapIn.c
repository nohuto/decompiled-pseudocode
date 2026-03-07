__int64 __fastcall D2DInterpolationModeFromMilInterpolationMode(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
      return 2;
    v4 = v3 - 1;
    if ( !v4 )
      return 2;
    v5 = v4 - 1;
    if ( !v5 )
      return 3;
    v6 = v5 - 1;
    if ( !v6 )
      return 4;
    if ( v6 == 1 )
      return 3;
  }
  else
  {
    return 1;
  }
  return v1;
}
