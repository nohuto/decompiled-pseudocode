/*
 * XREFs of ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801EDD64
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801097B8 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180021FE0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002201C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180109ACC (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801E48FC (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180256F38 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802570F0 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CRemoteRenderTarget::RenderComposeTop(
        CRemoteRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  int v8; // eax
  __int64 v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  int v12; // eax
  __int64 v13; // rcx
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  int v18; // eax
  __int64 v19; // rcx
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF

  v4 = 0;
  if ( a4 )
  {
    v8 = CComposeTop::FullRender(a3, (__int64)a2, (__int64)this + 224);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x1ACu, 0LL);
      return v4;
    }
  }
  else if ( CComposeTop::HasNewContent(a3) )
  {
    v10 = (float)*((int *)this + 26);
    v11 = (float)*((int *)this + 27);
    v21 = 0LL;
    v12 = CComposeTop::Render(a3, a2, (char *)this + 224, &v21);
    v4 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1BAu, 0LL);
      return v4;
    }
    v14 = *(float *)&v21;
    if ( *(float *)&v21 < 0.0 )
    {
      v14 = 0.0;
      LODWORD(v21) = 0;
    }
    v15 = *((float *)&v21 + 1);
    if ( *((float *)&v21 + 1) < 0.0 )
    {
      DWORD1(v21) = 0;
      v15 = 0.0;
    }
    v16 = *((float *)&v21 + 2);
    if ( *((float *)&v21 + 2) > v10 )
    {
      *((float *)&v21 + 2) = v10;
      v16 = v10;
    }
    v17 = *((float *)&v21 + 3);
    if ( *((float *)&v21 + 3) > v11 )
    {
      *((float *)&v21 + 3) = v11;
      v17 = v11;
    }
    if ( v16 <= v14 || v17 <= v15 )
      v21 = 0uLL;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v21) )
    {
      CRemoteRenderTarget::NotifyRenderedRect((__int64)this, (struct MilRectF *)&v21, 1);
      v18 = CComposeTop::NewContentRendered(a3);
      v4 = v18;
      if ( v18 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x1CAu, 0LL);
        return v4;
      }
    }
  }
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  return v4;
}
