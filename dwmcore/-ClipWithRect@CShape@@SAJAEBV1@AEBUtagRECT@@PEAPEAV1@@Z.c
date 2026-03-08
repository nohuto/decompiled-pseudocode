/*
 * XREFs of ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x1801AE828
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4874 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ??1CRegionShape@@UEAA@XZ @ 0x180045E20 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800804EC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800F0A30 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct tagRECT *a2, struct CShape **a3)
{
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  struct tagRECT v10; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-29h] BYREF
  int v12; // [rsp+58h] [rbp-11h] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh]

  v11[1] = 0LL;
  v12 = 0;
  v13 = 0LL;
  v11[0] = &CRegionShape::`vftable';
  v11[2] = &v12;
  v10 = *a2;
  CRegionShape::BuildFromRects((__int64)v11, &v10, 1u);
  v6 = CShape::Combine((__int64)a1, v5, (__int64)v11, 0LL, D2D1_COMBINE_MODE_INTERSECT, a3);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB5u, 0LL);
  CRegionShape::~CRegionShape((CRegionShape *)v11);
  return v8;
}
