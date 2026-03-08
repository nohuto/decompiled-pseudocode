/*
 * XREFs of ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000FCAC
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18000F1BC (-RenderShadow@CTreeEffectLayer@@AEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F05C0 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F11C0 (-RenderLayer@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIBitmapRealization@@AEBUD2D_POINT_2F@@MPEAPEAVIRenderTargetBitmap@@@Z @ 0x1802B4594 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FDA0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180048300 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800E07BC (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800E2990 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillEffect(
        CDrawingContext *this,
        struct ID2D1Effect *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_POINT_2F *a4,
        char a5)
{
  char v9; // si
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ebx
  enum D2D1_INTERPOLATION_MODE v13; // eax
  __int64 v14; // r10
  enum D2D1_COMPOSITE_MODE v15; // r9d
  int v16; // eax
  unsigned int v17; // ecx
  int v19; // eax
  unsigned int v20; // ecx

  v9 = 0;
  if ( a5 )
  {
    v19 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
    v12 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x9DAu, 0LL);
      return v12;
    }
    v9 = 1;
  }
  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 112LL))((char *)this + 16);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x9E3u, 0LL);
  }
  else
  {
    v13 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 83));
    v15 = D2D1_COMPOSITE_MODE_MASK_INVERT;
    if ( *((_DWORD *)this + 90) != 2 )
      v15 = D2D1_COMPOSITE_MODE_SOURCE_OVER;
    v16 = CD2DContext::FillEffect(
            (CD2DContext *)(v14 + 16),
            (const struct ID2DContextOwner *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
            a2,
            a3,
            a4,
            v13,
            v15);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x9EAu, 0LL);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal(this, 1);
  return v12;
}
