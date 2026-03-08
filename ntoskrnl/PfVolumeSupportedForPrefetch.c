/*
 * XREFs of PfVolumeSupportedForPrefetch @ 0x1402DC294
 * Callers:
 *     PfpVolumeOpenAndVerify @ 0x140766A44 (PfpVolumeOpenAndVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfVolumeSupportedForPrefetch(_DWORD *a1)
{
  unsigned int v1; // eax

  if ( (unsigned int)(*a1 - 7) > 1 )
    return 1LL;
  v1 = a1[1];
  if ( (v1 & 0x10) != 0 )
    return 2LL;
  if ( (v1 & 1) != 0 )
    return 3LL;
  return ~(unsigned __int8)(v1 >> 3) & 4;
}
