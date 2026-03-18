/*
 * XREFs of ?GetFrameContainsMonitorSpecificContent@CDrawingContext@@QEBA_NXZ @ 0x18003B470
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18003AD00 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A9CE4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDrawingContext::GetFrameContainsMonitorSpecificContent(CDrawingContext *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 8093) )
    return *((_DWORD *)g_pComposition + 108) != 0;
  return v1;
}
