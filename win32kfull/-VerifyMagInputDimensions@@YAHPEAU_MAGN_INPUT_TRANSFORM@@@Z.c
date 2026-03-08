/*
 * XREFs of ?VerifyMagInputDimensions@@YAHPEAU_MAGN_INPUT_TRANSFORM@@@Z @ 0x1C01F7CC4
 * Callers:
 *     _SetMagnificationInputTransform @ 0x1C007F160 (_SetMagnificationInputTransform.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00E42C8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 */

__int64 __fastcall VerifyMagInputDimensions(const struct tagRECT *a1)
{
  const struct tagRECT *v1; // rcx

  if ( !IsRectEmptyInl(a1) && !IsRectEmptyInl(v1 + 1) )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
