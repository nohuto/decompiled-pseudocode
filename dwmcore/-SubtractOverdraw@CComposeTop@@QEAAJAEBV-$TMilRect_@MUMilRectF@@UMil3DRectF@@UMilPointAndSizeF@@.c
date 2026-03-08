/*
 * XREFs of ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014ECC
 * Callers:
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x18008B408 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$span@.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEAVCComposeTop@@@Z @ 0x1801E5DF4 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@AEBVCDirtyRegion@@IAEBV-$spa.c)
 * Callees:
 *     ?ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z @ 0x18001D60C (-ShapeBoundsEmpty@@YA_NAEBVCShape@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180045E20 (--1CRegionShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800804EC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800DF1AC (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?CMilRectLFromMilRectF@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800E45D8 (-CMilRectLFromMilRectF@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_.c)
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1800F0A30 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ??$?4U?$default_delete@VCShape@@@std@@$0A@@?$unique_ptr@VCShape@@U?$default_delete@VCShape@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F91D0 (--$-4U-$default_delete@VCShape@@@std@@$0A@@-$unique_ptr@VCShape@@U-$default_delete@VCShape@@@std.c)
 */

__int64 __fastcall CComposeTop::SubtractOverdraw(__int64 a1)
{
  int v1; // edi
  __int64 *v2; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  struct CShape *v9; // rdx
  __int64 v10; // rdx
  struct CShape *v11; // [rsp+30h] [rbp-49h] BYREF
  struct CShape **v12; // [rsp+38h] [rbp-41h] BYREF
  struct CShape *v13; // [rsp+40h] [rbp-39h] BYREF
  char v14; // [rsp+48h] [rbp-31h]
  _QWORD v15[3]; // [rsp+50h] [rbp-29h] BYREF
  int v16; // [rsp+68h] [rbp-11h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+2Fh]

  v1 = 0;
  v2 = (__int64 *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 160) )
  {
    v11 = 0LL;
    v15[1] = 0LL;
    v16 = 0;
    v17 = 0LL;
    v15[0] = &CRegionShape::`vftable';
    v15[2] = &v16;
    v5 = CMilRectLFromMilRectF(&v12);
    CRegionShape::BuildFromRects(v15, v5, 1LL);
    v6 = *v2;
    v13 = 0LL;
    v12 = &v11;
    v14 = 1;
    v1 = CShape::Combine(v6, v7, v15, a1 + 92, 2, &v13);
    if ( v14 )
    {
      v8 = (unsigned int)v13;
      v9 = *v12;
      *v12 = v13;
      if ( v9 )
        std::default_delete<CShape>::operator()();
    }
    if ( v1 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v1, 0xA6u, 0LL);
    }
    else if ( ShapeBoundsEmpty(v11) )
    {
      v10 = *v2;
      *v2 = 0LL;
      if ( v10 )
        std::default_delete<CShape>::operator()();
    }
    else
    {
      std::unique_ptr<CShape>::operator=<std::default_delete<CShape>,0>(v2, &v11);
    }
    CRegionShape::~CRegionShape((CRegionShape *)v15);
    if ( v11 )
      std::default_delete<CShape>::operator()();
  }
  return (unsigned int)v1;
}
