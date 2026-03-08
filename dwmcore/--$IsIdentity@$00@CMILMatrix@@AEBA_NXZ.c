/*
 * XREFs of ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A490
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 *     ?GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800B3440 (-GetBlurredWallpaperEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z.c)
 *     ?RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x1801EFFD0 (-RenderNoOpLayer@CExternalLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800559D0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 */

bool __fastcall CMILMatrix::IsIdentity<1>(__int64 a1, __int64 a2)
{
  bool v2; // bl
  char v4; // al
  bool result; // al

  v2 = 0;
  v4 = (char)(*(_BYTE *)(a1 + 64) << 6) >> 6;
  if ( v4 )
    return v4 == 1;
  if ( CMILMatrix::IsTranslate<1>(a1, a2)
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 48) - 0.0) & _xmm) < 0.000081380211
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 52) - 0.0) & _xmm) < 0.000081380211 )
  {
    v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 56) - 0.0) & _xmm) < 0.000081380211;
  }
  *(_BYTE *)(a1 + 64) &= 0xFCu;
  result = v2;
  *(_BYTE *)(a1 + 64) |= (-1 - 2 * v2) & 3;
  return result;
}
