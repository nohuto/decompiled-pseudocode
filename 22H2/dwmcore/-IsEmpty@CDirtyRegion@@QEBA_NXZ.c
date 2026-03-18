/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x1800C282C
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180049720 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800C2690 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18010A2F8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801EB650 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801F9888 (-Render@CDDARenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802A9CE4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B124 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  char v1; // r10
  CDirtyRegion *v2; // r8
  int v3; // edx
  unsigned int v5; // r9d
  int v6; // r9d

  v1 = 0;
  v2 = this;
  if ( !*((_BYTE *)this + 4420) )
  {
    if ( *((_BYTE *)this + 4422) )
    {
      LOBYTE(v3) = *((_DWORD *)this + 705) == 0;
      return v3;
    }
    v5 = 0;
    while ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)v2 + 4 * v5 + 392) )
    {
      v5 = v3 + v6;
      if ( v5 >= 8 )
        return v3;
    }
  }
  LOBYTE(v3) = v1;
  return v3;
}
