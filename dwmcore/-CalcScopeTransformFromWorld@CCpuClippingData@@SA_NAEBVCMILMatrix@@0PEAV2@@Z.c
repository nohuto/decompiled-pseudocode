/*
 * XREFs of ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022370
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x180022224 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x180058840 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18005C160 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z @ 0x18008D534 (-GetCpuClip@CDrawingContext@@QEAAXPEAVCCpuClip@@@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180058478 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ??0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005C728 (--0CMILMatrix@@QEAA@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x1800E5C14 (--$IsPure2DUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CCpuClippingData::CalcScopeTransformFromWorld(
        const struct CMILMatrix *a1,
        const struct CMILMatrix *a2,
        struct CMILMatrix *a3)
{
  int v3; // eax
  __int128 v5; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v11; // xmm1_4
  __int128 v12; // [rsp+20h] [rbp-79h] BYREF
  __int128 v13; // [rsp+30h] [rbp-69h]
  __int128 v14; // [rsp+40h] [rbp-59h]
  __int128 v15; // [rsp+50h] [rbp-49h]
  int v16; // [rsp+60h] [rbp-39h]
  _OWORD v17[4]; // [rsp+70h] [rbp-29h] BYREF
  int v18; // [rsp+B0h] [rbp+17h]
  struct D2D_MATRIX_3X2_F v19; // [rsp+B8h] [rbp+1Fh] BYREF

  v3 = *((_DWORD *)a1 + 16);
  v5 = *((_OWORD *)a1 + 1);
  v12 = *(_OWORD *)a1;
  v8 = *((_OWORD *)a1 + 2);
  v16 = v3;
  v13 = v5;
  v9 = *((_OWORD *)a1 + 3);
  v14 = v8;
  v15 = v9;
  if ( !CMILMatrix::Invert((CMILMatrix *)&v12) )
  {
    if ( COERCE_FLOAT(*((_DWORD *)a1 + 10) & _xmm) >= 0.000081380211 )
      return 0;
    if ( !(unsigned __int8)CMILMatrix::IsPure2DUniformZ<1>(a1) )
      return 0;
    v11 = *((_DWORD *)a1 + 1);
    v19.m11 = *(FLOAT *)a1;
    *(_QWORD *)&v19.m[0][1] = __PAIR64__(*((_DWORD *)a1 + 4), v11);
    *(_QWORD *)&v19.m[1][1] = __PAIR64__(*((_DWORD *)a1 + 12), *((_DWORD *)a1 + 5));
    v19.dy = *((FLOAT *)a1 + 13);
    CMILMatrix::CMILMatrix((CMILMatrix *)v17, &v19);
    v16 = v18;
    v12 = v17[0];
    v13 = v17[1];
    v14 = v17[2];
    v15 = v17[3];
    if ( !CMILMatrix::Invert((CMILMatrix *)&v12) )
      return 0;
  }
  CMILMatrix::Multiply(a2, (const struct CMILMatrix *)&v12, a3);
  return 1;
}
