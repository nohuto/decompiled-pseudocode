/*
 * XREFs of ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x1801E769C
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801E8350 (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::CalcVailAlphaMode(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  float *v3; // rcx
  unsigned int v4; // r8d

  v1 = 1;
  if ( *((_DWORD *)this + 29) != 1 )
  {
    v2 = *((_QWORD *)this + 12);
    v3 = (float *)(v2 + 72);
    if ( !*(_QWORD *)(v2 + 64) )
      v3 = (float *)&TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(v3) )
      return v4;
  }
  return v1;
}
