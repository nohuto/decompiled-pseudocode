__int64 __fastcall BmlCompareModeResolution(int *a1, int *a2)
{
  int v2; // eax
  int v3; // r8d
  unsigned int v4; // ecx
  unsigned int v5; // edx

  v2 = *a1;
  v3 = *a2;
  if ( *a1 < (unsigned int)*a2 )
    return 0xFFFFFFFFLL;
  v4 = a1[1];
  v5 = a2[1];
  if ( v4 < v5 )
    return 0xFFFFFFFFLL;
  if ( v2 == v3 )
    return v4 != v5;
  return 1LL;
}
