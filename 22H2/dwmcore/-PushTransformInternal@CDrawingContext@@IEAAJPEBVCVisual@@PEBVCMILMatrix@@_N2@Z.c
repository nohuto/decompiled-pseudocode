/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x1800415F0
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180004E48 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800050F0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x1800052F4 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000D460 (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18000F3D4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180010848 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180015D30 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180019304 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001C808 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCBrush@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18001F5F0 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003F9A8 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@Z @ 0x1800535AC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@AEBVCMILMatrix@@AEBVCShape@@_NH@.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_N@Z @ 0x1800754F0 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18007BE10 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180093D90 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x1800D0E40 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180161C3C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_NH@Z @ 0x1801749EC (-DrawBitmapRealization@CDrawingContext@@IEAAJPEAVIBitmapRealization@@AEBV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180174F4C (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x180175370 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180175740 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x180175944 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180175DC8 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180176980 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndS.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801780BC (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x180187E00 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801912B8 (-RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x18019DC38 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9970 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020BCE0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180261050 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180040998 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180041938 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x180041C44 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800421E0 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x1800821F0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x18008D128 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1800F400B (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v5; // r12
  int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  unsigned int v13; // eax
  unsigned int v14; // ecx
  int v15; // edi
  unsigned int *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // r14d
  __int64 v20; // rdx
  unsigned int v21; // eax
  void *v22; // rcx
  bool v23; // si
  __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // ecx
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  unsigned int v32; // r13d
  int v33; // eax
  unsigned int v34; // ecx
  unsigned __int64 v35; // rcx
  void *v36; // rdi
  unsigned int v37; // r14d
  int v38; // eax
  unsigned int v39; // ecx
  void *v40; // rdi
  unsigned int v41; // r13d
  int v42; // eax
  unsigned int v43; // ecx
  unsigned __int64 v44; // rax
  void *v45; // rdi
  void *v46; // rdi
  HANDLE ProcessHeap; // rax
  void *v48; // rdi
  HANDLE v49; // rax
  void *v50; // rdi
  HANDLE v51; // rax
  void *lpMem; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v53; // [rsp+38h] [rbp-E0h]
  _BYTE v54[64]; // [rsp+50h] [rbp-C8h] BYREF
  int v55; // [rsp+90h] [rbp-88h]
  _BYTE v56[64]; // [rsp+A0h] [rbp-78h] BYREF
  int v57; // [rsp+E0h] [rbp-38h]

  v5 = 0;
  v9 = -2147024362;
  if ( a5 )
  {
    v10 = *((_DWORD *)this + 94);
    v11 = *((unsigned int *)this + 95);
    LODWORD(v53) = 5;
    *((_QWORD *)&v53 + 1) = a2;
    lpMem = 0LL;
    if ( v10 != (_DWORD)v11 )
    {
LABEL_3:
      v12 = 0;
      *(_OWORD *)(*((_QWORD *)this + 49) + 16LL * v10) = v53;
      v13 = *((_DWORD *)this + 100);
      v14 = ++*((_DWORD *)this + 94);
      if ( v13 <= v14 )
        v13 = *((_DWORD *)this + 94);
      *((_DWORD *)this + 100) = v13;
      goto LABEL_6;
    }
    v41 = 2 * v11;
    if ( (unsigned __int64)(2 * v11) > 0xFFFFFFFF )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v15 = -2147024362;
      goto LABEL_51;
    }
    if ( v41 <= 0x40 )
      v41 = 64;
    v42 = HrMalloc(0x10uLL, v41, &lpMem);
    v12 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x53u, 0LL);
    }
    else
    {
      v44 = 16LL * *((unsigned int *)this + 94);
      if ( v44 <= 0xFFFFFFFF )
      {
        v45 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 49), (unsigned int)v44);
        operator delete(*((void **)this + 49));
        v10 = *((_DWORD *)this + 94);
        *((_DWORD *)this + 95) = v41;
        *((_QWORD *)this + 49) = v45;
        goto LABEL_3;
      }
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v46 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v46);
    }
LABEL_6:
    v15 = v12;
    if ( v12 >= 0 )
    {
      v5 = 1;
      goto LABEL_8;
    }
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0xC3Du, 0LL);
    goto LABEL_24;
  }
LABEL_8:
  v16 = (unsigned int *)((char *)this + 408);
  v17 = *((unsigned int *)this + 102);
  if ( !(_DWORD)v17 || !a4 )
  {
    v18 = *((unsigned int *)this + 103);
    lpMem = 0LL;
    if ( (_DWORD)v17 != (_DWORD)v18 )
    {
LABEL_11:
      v19 = 0;
      v20 = *((_QWORD *)this + 53) + 68 * v17;
      *(_OWORD *)v20 = *(_OWORD *)a3;
      *(_OWORD *)(v20 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v20 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v20 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v20 + 64) = *((_DWORD *)a3 + 16);
      v21 = *((_DWORD *)this + 108);
      if ( v21 <= ++*v16 )
        v21 = *v16;
      *((_DWORD *)this + 108) = v21;
      goto LABEL_14;
    }
    v32 = 2 * v18;
    if ( (unsigned __int64)(2 * v18) > 0xFFFFFFFF )
    {
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v15 = -2147024362;
LABEL_58:
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v19, 0x36u, 0LL);
      goto LABEL_15;
    }
    if ( v32 <= 8 )
      v32 = 8;
    v33 = HrMalloc(0x44uLL, v32, &lpMem);
    v19 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x53u, 0LL);
    }
    else
    {
      v35 = 68LL * *v16;
      if ( v35 <= 0xFFFFFFFF )
      {
        v36 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 53), (unsigned int)v35);
        operator delete(*((void **)this + 53));
        v17 = *v16;
        *((_DWORD *)this + 103) = v32;
        *((_QWORD *)this + 53) = v36;
        goto LABEL_11;
      }
      v19 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v48 = lpMem;
    if ( lpMem )
    {
      v49 = GetProcessHeap();
      HeapFree(v49, 0, v48);
    }
LABEL_14:
    v15 = v19;
    if ( v19 >= 0 )
      goto LABEL_15;
    goto LABEL_58;
  }
  v55 = 0;
  v57 = 0;
  v29 = CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)this + 408, v54);
  v15 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x3Du, 0LL);
  }
  else
  {
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v54, (struct CMILMatrix *)v56);
    v31 = CWatermarkStack<CMILMatrix,8,2,8>::Push((char *)this + 408, v56);
    v15 = v31;
    if ( v31 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v31, 0x45u, 0LL);
  }
LABEL_15:
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v15, 0xC46u, 0LL);
    goto LABEL_24;
  }
  if ( *v16 )
    v22 = (void *)(*((_QWORD *)this + 53) + 68LL * (*v16 - 1));
  else
    v22 = &CMILMatrix::Identity;
  v23 = (unsigned __int8)CMILMatrix::Is2DAffine<0>(v22) == 0;
  v24 = *((unsigned int *)this + 111);
  v25 = *((_DWORD *)this + 110);
  lpMem = 0LL;
  if ( v25 != (_DWORD)v24 )
    goto LABEL_19;
  v37 = 2 * v24;
  if ( (unsigned __int64)(2 * v24) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v15 = -2147024362;
    goto LABEL_63;
  }
  if ( v37 <= 0x40 )
    v37 = 64;
  v38 = HrMalloc(1uLL, v37, &lpMem);
  v9 = v38;
  if ( v38 >= 0 )
  {
    v40 = lpMem;
    memcpy_0(lpMem, *((const void **)this + 57), *((unsigned int *)this + 110));
    operator delete(*((void **)this + 57));
    v25 = *((_DWORD *)this + 110);
    *((_QWORD *)this + 57) = v40;
    *((_DWORD *)this + 111) = v37;
LABEL_19:
    v9 = 0;
    *(_BYTE *)(v25 + *((_QWORD *)this + 57)) = v23;
    v26 = *((_DWORD *)this + 116);
    v27 = ++*((_DWORD *)this + 110);
    if ( v26 <= v27 )
      v26 = *((_DWORD *)this + 110);
    *((_DWORD *)this + 116) = v26;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x53u, 0LL);
  v50 = lpMem;
  if ( lpMem )
  {
    v51 = GetProcessHeap();
    HeapFree(v51, 0, v50);
  }
LABEL_22:
  v15 = v9;
  if ( v9 < 0 )
  {
LABEL_63:
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v9, 0xC49u, 0LL);
    goto LABEL_24;
  }
  *((_BYTE *)this + 5953) = 1;
LABEL_24:
  if ( v15 < 0 && v5 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 94, 0LL);
  return (unsigned int)v15;
}
