/*
 * XREFs of ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x18001ABD0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AC10 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x18007A8C0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x18008795C (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801D1120 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801EAAB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801EEC3C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F05C0 (-RenderLayer@CColorTransformLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801F1650 (-PreRestoreState@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     gsl::final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___::_final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___ @ 0x180225394 (gsl--final_action__lambda_f5980df7b8a7e043f4787e76bfd73b62___--_final_action__lambda_f5980df7b8a.c)
 *     ?RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180225690 (-RenderContent@CCursorVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180257134 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800E29EC (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

void __fastcall CDrawingContext::PopRenderOptionsInternal(CDrawingContext *this, char a2)
{
  CDrawingContext *v2; // r8
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v2 = this;
  if ( a2 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 368, &v9, this);
  v3 = *((_DWORD *)v2 + 216);
  if ( v3 )
  {
    v4 = (unsigned int)(v3 - 1);
    v5 = 28 * v4;
    *((_DWORD *)v2 + 216) = v4;
    v6 = *((_QWORD *)v2 + 110);
    v7 = *(_OWORD *)(v5 + v6);
    v8 = *(_QWORD *)(v5 + v6 + 16);
    LODWORD(v6) = *(_DWORD *)(v5 + v6 + 24);
    v9 = v7;
    v11 = v6;
    v10 = v8;
  }
  *((_BYTE *)v2 + 352) = v11;
  *(_QWORD *)((char *)v2 + 332) = v9;
  *((_DWORD *)v2 + 90) = DWORD2(v9);
  *((_DWORD *)v2 + 85) = HIDWORD(v9);
  *((_QWORD *)v2 + 43) = v10;
}
