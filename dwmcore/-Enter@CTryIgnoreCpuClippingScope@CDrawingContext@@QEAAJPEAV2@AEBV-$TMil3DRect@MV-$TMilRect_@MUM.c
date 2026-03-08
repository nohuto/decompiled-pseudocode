/*
 * XREFs of ?Enter@CTryIgnoreCpuClippingScope@CDrawingContext@@QEAAJPEAV2@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800DB874
 * Callers:
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180012DCC (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x18005A5D4 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180079180 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 *     ?DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x1801B3300 (-DrawMesh2D@CGlobalDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x1801D0D00 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x1801D0F00 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x1801D1564 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 * Callees:
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800DB304 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1801D2E10 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801D31F4 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRe.c)
 */

__int64 __fastcall CDrawingContext::CTryIgnoreCpuClippingScope::Enter(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const struct CMILMatrix *TopByReference)
{
  CMatrixStack *v5; // rsi
  int v6; // ebx
  __int64 v7; // r9
  const struct CMILMatrix *v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int128 v17; // [rsp+30h] [rbp-48h] BYREF

  v5 = (CMatrixStack *)(a2 + 400);
  v6 = 0;
  v7 = a3;
  if ( !TopByReference )
    TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a2 + 400));
  if ( (unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(a2, v7, TopByReference) )
  {
    v17 = 0LL;
    v11 = CMatrixStack::GetTopByReference(v5);
    LOBYTE(v12) = 1;
    LOBYTE(v13) = 1;
    v14 = CDrawingContext::PushClippingScope(a2, 0LL, v13, v12, v11, &v17);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1A37u, 0LL);
    }
    else
    {
      v6 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, (__int64)&v17, D2D1_ANTIALIAS_MODE_PER_PRIMITIVE, 1);
      if ( v6 >= 0 )
      {
        *a1 = a2;
      }
      else
      {
        CDrawingContext::PopClippingScope((CDrawingContext *)a2, 0);
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v6, 0x1A44u, 0LL);
      }
    }
  }
  return (unsigned int)v6;
}
