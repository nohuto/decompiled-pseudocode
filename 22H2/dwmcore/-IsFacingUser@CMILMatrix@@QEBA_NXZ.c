/*
 * XREFs of ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180210FF4
 * Callers:
 *     ??$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4WalkReason@@@Z @ 0x18009DED0 (--$WalkSubtree@VCHitTestContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@PEAVCHitTestContext@@W4.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180199384 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x1800C5A3C (-IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1802119B4 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

bool __fastcall CMILMatrix::IsFacingUser(CMILMatrix *this, const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  float v3; // xmm6_4
  bool IsInvertibleDeterminant; // al
  int v5; // ecx
  __int64 v6; // rax

  v3 = Windows::Foundation::Numerics::determinant(this, a2);
  IsInvertibleDeterminant = CMILMatrix::IsInvertibleDeterminant(v3);
  v5 = 0;
  if ( IsInvertibleDeterminant )
  {
    LOBYTE(v5) = v3 < 0.0;
    return v5 == (float)((float)((float)((float)((float)(*((float *)this + 4) * *((float *)this + 3))
                                               - (float)(*(float *)this * *((float *)this + 7)))
                                       * *((float *)this + 13))
                               + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                                               - (float)(*((float *)this + 3) * *((float *)this + 5)))
                                       * *((float *)this + 12)))
                       + (float)((float)((float)(*(float *)this * *((float *)this + 5))
                                       - (float)(*((float *)this + 4) * *((float *)this + 1)))
                               * *((float *)this + 15))) < 0.0;
  }
  else
  {
    LOBYTE(v6) = (float)((float)(*((float *)this + 5) * *(float *)this)
                       - (float)(*((float *)this + 4) * *((float *)this + 1))) > 0.0;
  }
  return v6;
}
