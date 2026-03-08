/*
 * XREFs of ?BmlCompareModeResolution@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C03B85B4
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1C01706B0 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModes @ 0x1C03B86F4 (BmlCompareSourceModes.c)
 * Callees:
 *     <none>
 */

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
