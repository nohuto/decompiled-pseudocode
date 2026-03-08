/*
 * XREFs of ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874 (-Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV-$TMil3DRect@MV-$TMilRect_@MUM.c)
 * Callees:
 *     ?GetTopCpuClipInScope@CScopedClipStack@@QEBAPEBVCShape@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180016C0C (-GetTopCpuClipInScope@CScopedClipStack@@QEBAPEBVCShape@@PEAW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?IsPure2DRect@@YA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001B48C (-IsPure2DRect@@YA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 *     ?CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z @ 0x180022370 (-CalcScopeTransformFromWorld@CCpuClippingData@@SA_NAEBVCMILMatrix@@0PEAV2@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180058018 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ @ 0x180059E30 (--$ProducesUniformZ@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180080DC4 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ??0CCpuClip@@QEAA@XZ @ 0x1800B5884 (--0CCpuClip@@QEAA@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntialiasSinkContext@@@Z @ 0x1800DB9F4 (-Initialize@CCpuClip@@QEAAXPEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@IPEBVCCpuClipAntia.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800DBA68 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::DoesCpuClipFullyContainRect(__int64 a1, struct MilRectF *a2)
{
  CScopedClipStack *v2; // rdi
  __int64 v3; // rax
  __int64 v6; // r10
  const struct CMILMatrix *v7; // r11
  const struct CShape *TopCpuClipInScope; // rax
  char v9; // bl
  _BYTE v10[64]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+70h] [rbp-90h]
  CShape *v12[10]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v13[48]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v14; // [rsp+100h] [rbp+0h] BYREF
  __int128 v15; // [rsp+110h] [rbp+10h] BYREF
  int v16; // [rsp+120h] [rbp+20h]
  int v17; // [rsp+124h] [rbp+24h]

  v2 = (CScopedClipStack *)(a1 + 896);
  v3 = *(_QWORD *)(a1 + 904);
  if ( v3 == *(_QWORD *)(a1 + 896) )
    return 0;
  if ( !*(_QWORD *)(v3 - 176) )
    return 0;
  v11 = 0;
  if ( !IsPure2DRect((__int64)a2) && !CMILMatrix::ProducesUniformZ<1>(*(_QWORD *)(v6 + 904) - 84LL) )
    return 0;
  if ( !CCpuClippingData::CalcScopeTransformFromWorld(
          (const struct CMILMatrix *)(*(_QWORD *)(v6 + 904) - 84LL),
          v7,
          (struct CMILMatrix *)v10) )
    return 0;
  v14 = 0LL;
  if ( IsPure2DRect((__int64)a2) )
  {
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v10, a2, (float *)&v14);
  }
  else
  {
    v16 = 0;
    v17 = 0;
    v15 = 0LL;
    CMILMatrix::Transform3DBoundsHelper<0>((CMILMatrix *)v10, (float *)a2, (float *)&v15);
    v14 = v15;
  }
  CCpuClip::CCpuClip((CCpuClip *)v12);
  TopCpuClipInScope = CScopedClipStack::GetTopCpuClipInScope(v2, 0LL);
  CCpuClip::Initialize((CCpuClip *)v12, TopCpuClipInScope, 0LL, D2D1_ANTIALIAS_MODE_ALIASED, 0, 0LL);
  v9 = CCpuClip::FullyContains(v12, (struct MilRectF *)&v14, 0LL);
  CShapePtr::Release((CShapePtr *)v13);
  return v9;
}
