/*
 * XREFs of ??$IsTranslateAndScaleIgnoreZ@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18026C784
 * Callers:
 *     ?CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ @ 0x1802B5E18 (-CanUseWarpExtension@CPrimitiveGroupDrawListGenerator@@QEBA_NXZ.c)
 * Callees:
 *     ??$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180062070 (--$IsAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::IsTranslateAndScaleIgnoreZ<0>(__int64 a1)
{
  __int64 v1; // r10
  char v2; // r11

  if ( !CMILMatrix::IsAffine<0>(a1, 1) || *(float *)(v1 + 4) != 0.0 || *(float *)(v1 + 16) != 0.0 )
    return 0;
  *(_BYTE *)(v1 + 64) = *(_BYTE *)(v1 + 64) & 0x3F | 0x40;
  return v2;
}
