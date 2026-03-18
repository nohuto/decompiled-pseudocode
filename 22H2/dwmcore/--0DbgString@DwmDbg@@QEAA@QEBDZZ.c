/*
 * XREFs of ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x180088A0C
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x18000A5B4 (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x180037F24 (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 *     ?CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z @ 0x1800387C0 (-CreateDrawingContext@CBackdropVisualImage@@EEAAXPEAPEAVCDrawingContext@@@Z.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AD00 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z @ 0x18004AC44 (-UpdateHasBackdropInputFlag@CVisual@@IEAAXPEBVCBackdropBrush@@@Z.c)
 *     ?UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z @ 0x18004ACD4 (-UpdateHasWindowBackdropInputFlag@CVisual@@IEAAX_N@Z.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18004AD58 (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 *     ?CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004C96C (-CreateOrUpdateBVI@CVisual@@QEAAJAEBVCVisualTreePath@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18004CA84 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004CDFC (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004D0E8 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180051CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067A20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B570 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E9F0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18007A550 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x180081D8C (-ProcessPostSubgraphBackdropInput@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180087B2C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18008850C (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x180093240 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z @ 0x1800A44FC (-ProcessPostSubgraphWindowBackgroundTreatment@CPreComputeContext@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ??1CBackdropVisualImage@@UEAA@XZ @ 0x1800A6060 (--1CBackdropVisualImage@@UEAA@XZ.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z @ 0x1800C4FF8 (-PreCompute@CPreComputeContext@@IEAAJPEAVCVisualTree@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z @ 0x1800E22E0 (--0DbgString@DwmDbg@@QEAA@AEBVCMILMatrix@@@Z.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z @ 0x1800E5248 (--0DbgString@DwmDbg@@QEAA@AEBUMilRectF@@@Z.c)
 *     ?SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z @ 0x1800EE288 (-SetBackdropVisualImage@CTreeData@@IEAAXAEBVCVisualTreePath@@PEAVCBackdropVisualImage@@@Z.c)
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x1801D91D4 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180218708 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ??0DbgString@DwmDbg@@QEAA@AEBUD2D_VECTOR_2F@@@Z @ 0x18021A964 (--0DbgString@DwmDbg@@QEAA@AEBUD2D_VECTOR_2F@@@Z.c)
 *     ?GetDebugString@CBackdropVisualImageKey@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x18021A9A4 (-GetDebugString@CBackdropVisualImageKey@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 *     ?ConvertHR@DbgString@DwmDbg@@AEBA?AV12@AEBJ@Z @ 0x180272368 (-ConvertHR@DbgString@DwmDbg@@AEBA-AV12@AEBJ@Z.c)
 *     ?LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z @ 0x180272444 (-LogBrushEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@0@Z.c)
 *     ?LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisualTreePath@@0@Z @ 0x180272518 (-LogTreeWalkEtwEvent@Backdrops@DwmDbg@@YAXVDbgString@2@PEBVCVisual@@PEBVCVisualTree@@AEBVCVisual.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x1801100E8 (memset_0.c)
 *     vsprintf_s @ 0x180110228 (vsprintf_s.c)
 *     _vscprintf @ 0x18011028C (_vscprintf.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

DwmDbg::DbgString *DwmDbg::DbgString::DbgString(char **this, const char *a2, ...)
{
  SIZE_T v3; // rsi
  HANDLE ProcessHeap; // rax
  char *v5; // rax
  char *v6; // rbx
  char *v7; // rcx
  char v9; // [rsp+20h] [rbp-38h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, a2);
  *this = 0LL;
  v3 = vscprintf(a2, va) + 1;
  ProcessHeap = GetProcessHeap();
  v5 = (char *)HeapAlloc(ProcessHeap, 0, v3);
  v6 = v5;
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v5, 0, v3);
  if ( this == (char **)&v9 )
  {
    v7 = v6;
  }
  else
  {
    v7 = *this;
    *this = v6;
    if ( !v7 )
      goto LABEL_4;
  }
  operator delete(v7);
LABEL_4:
  if ( *this )
  {
    vsprintf_s(*this, v3, a2, va);
    puts(*this);
  }
  return (DwmDbg::DbgString *)this;
}
