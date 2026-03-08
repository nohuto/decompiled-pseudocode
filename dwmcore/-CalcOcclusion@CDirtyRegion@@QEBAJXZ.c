/*
 * XREFs of ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C1C30
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802A62FC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x18004CEF4 (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C1DCC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?GetDirtyRects@CDirtyRegion@@QEBA?AV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x1800C1E64 (-GetDirtyRects@CDirtyRegion@@QEBA-AV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegion::CalcOcclusion(CDirtyRegion *this)
{
  unsigned int v1; // ebx
  unsigned __int64 CurrentFrameId; // rax
  __int64 v3; // rcx
  CDirtyRegion *v4; // r11
  __int64 v5; // r11
  __int64 v6; // rsi
  __int64 *v7; // r11
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64); // rbx
  __int64 DirtyRects; // rax
  int v11; // eax
  __int64 v12; // rcx
  _BYTE v14[24]; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  CurrentFrameId = GetCurrentFrameId();
  if ( *((_QWORD *)v4 + 1) == CurrentFrameId )
  {
    if ( !CDirtyRegion::IsEmpty(v4) )
    {
      v6 = v5 + 16;
      if ( !COcclusionContext::IsCurrent((COcclusionContext *)(v5 + 16)) )
      {
        v8 = *v7;
        v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)*v7 + 200LL);
        DirtyRects = CDirtyRegion::GetDirtyRects(v7, v14);
        v11 = v9(v8, DirtyRects, v6);
        v1 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x432u, 0LL);
      }
    }
  }
  else
  {
    v1 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2003292412, 0x437u, 0LL);
  }
  return v1;
}
