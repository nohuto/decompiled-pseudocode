/*
 * XREFs of ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x1800559D0
 * Callers:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A490 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800634C0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z @ 0x18006DD30 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@PEAV1@_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_NPEAVCCpuClipAntialiasSink@@PEA_N@Z @ 0x180073A60 (-PushCpuClipToScope@CScopedClipStack@@QEAAJPEBVCShape@@0PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@_.c)
 * Callees:
 *     ??$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A39C (--$IsTranslateAndScaleIgnoreZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005B510 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

char __fastcall CMILMatrix::IsTranslate<1>(__int64 a1, __int64 a2)
{
  char v3; // al
  char v4; // bl
  bool v5; // dl
  _BYTE *v6; // r11
  char v7; // al
  bool v8; // cl
  float v9; // xmm5_4
  char v10; // al
  bool v11; // dl
  _BYTE *v13; // r11
  float v14; // xmm5_4
  float v15; // xmm5_4

  v3 = (char)(16 * *(_BYTE *)(a1 + 65)) >> 6;
  if ( v3 )
  {
    v4 = 1;
    v5 = v3 == 1;
  }
  else
  {
    v4 = 1;
    v5 = (unsigned __int8)CMILMatrix::IsAffine<1>(a1, 0LL)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 32) - v14) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 36) - v14) & _xmm) < 0.000081380211;
    *(_BYTE *)(a1 + 65) &= 0xF3u;
    *(_BYTE *)(a1 + 65) |= (-4 - 8 * v5) & 0xC;
  }
  if ( !v5 )
    return 0;
  v6 = (_BYTE *)(a1 + 64);
  v7 = (char)(16 * *(_BYTE *)(a1 + 64)) >> 6;
  if ( v7 )
  {
    v8 = v7 == 1;
  }
  else
  {
    LOBYTE(a2) = 1;
    v8 = (unsigned __int8)CMILMatrix::IsAffine<1>(a1, a2)
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 8) - v15) & _xmm) < 0.000081380211
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 24) - v15) & _xmm) < 0.000081380211;
    *v6 &= 0xF3u;
    *v6 |= (-4 - 8 * v8) & 0xC;
  }
  if ( !v8 )
    return 0;
  v9 = *(float *)&FLOAT_1_0;
  v10 = (char)(4 * *v6) >> 6;
  if ( v10 )
  {
    v11 = v10 == 1;
  }
  else
  {
    v11 = (unsigned __int8)CMILMatrix::IsTranslateAndScaleIgnoreZ<1>(a1)
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)a1 - v9) & _xmm) < 0.000081380211
       && COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 20) - v9) & _xmm) < 0.000081380211;
    *v13 &= 0xCFu;
    *v13 |= (-16 - 32 * v11) & 0x30;
  }
  if ( !v11 || COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(a1 + 40) - v9) & _xmm) >= 0.000081380211 )
    return 0;
  return v4;
}
