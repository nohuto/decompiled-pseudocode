/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18018489C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800EC91C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18003EF68 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180058560 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x180077744 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18007ABEC (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?GetDeviceClipBox@CLegacyRenderTarget@@UEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C7E50 (-GetDeviceClipBox@CLegacyRenderTarget@@UEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rec.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x1801846F0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801847A8 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x18018486C (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180184DCC (-RenderTargetRectToDesktopRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F96D0 (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9774 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F992C (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r15
  float v9; // xmm1_4
  char *v10; // r8
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  float v16; // xmm1_4
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  float v21; // xmm1_4
  float v22; // xmm2_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  int v25; // edx
  float v26; // xmm4_4
  float v27; // xmm5_4
  int v28; // edx
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rcx
  __int128 v33; // [rsp+30h] [rbp-50h] BYREF
  float v34; // [rsp+40h] [rbp-40h] BYREF
  float v35; // [rsp+44h] [rbp-3Ch]
  float v36; // [rsp+48h] [rbp-38h]
  float v37; // [rsp+4Ch] [rbp-34h]
  __int128 v38; // [rsp+50h] [rbp-30h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !a4 )
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_25;
    CLegacyRenderTarget::GetDeviceClipBox((__int64)this + 136, (__int64)&v33);
    v5 = 1;
    v34 = (float)(int)v33;
    v35 = (float)SDWORD1(v33);
    v16 = (float)SHIDWORD(v33);
    v36 = (float)SDWORD2(v33);
    v33 = 0LL;
    v37 = v16;
    v17 = CDrawingContext::PushGpuClipRectInternal((__int64)a2, 0LL, &v34, 1, 0);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x51Bu, 0LL);
      return v4;
    }
    v19 = CComposeTop::Render(a3, a2, (char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL), &v33);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x525u, 0LL);
    }
    else
    {
      v21 = *(float *)&v33;
      if ( v34 > *(float *)&v33 )
      {
        *(float *)&v33 = v34;
        v21 = v34;
      }
      v22 = *((float *)&v33 + 1);
      if ( v35 > *((float *)&v33 + 1) )
      {
        *((float *)&v33 + 1) = v35;
        v22 = v35;
      }
      v23 = *((float *)&v33 + 2);
      if ( *((float *)&v33 + 2) > v36 )
      {
        *((float *)&v33 + 2) = v36;
        v23 = v36;
      }
      v24 = *((float *)&v33 + 3);
      if ( *((float *)&v33 + 3) > v37 )
      {
        *((float *)&v33 + 3) = v37;
        v24 = v37;
      }
      if ( v23 <= v21 || v24 <= v22 )
      {
        v21 = 0.0;
        v33 = 0uLL;
        v24 = 0.0;
      }
      if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v33) )
        goto LABEL_25;
      LODWORD(v34) = PixelAlign(v21, 0);
      LODWORD(v35) = PixelAlign(v26, v25);
      LODWORD(v36) = PixelAlign(v27, 1);
      LODWORD(v37) = PixelAlign(v24, v28);
      v38 = 0LL;
      CLegacyRenderTarget::NotifyRenderedRect((__int64)this, (float *)&v33, 0);
      CLegacyRenderTarget::RenderTargetRectToDesktopRect(this, v29, &v34, &v38);
      v30 = CComposeTop::NewContentRendered(a3);
      v4 = v30;
      if ( v30 >= 0 )
        goto LABEL_25;
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x537u, 0LL);
    }
LABEL_28:
    CDrawingContext::PopGpuClipRectInternal(a2, 0, v15);
    return v4;
  }
  v9 = (float)*((int *)this + 47);
  v10 = (char *)this + (*((_BYTE *)this + 11505) != 0 ? 332LL : 264LL);
  v34 = (float)*((int *)this + 46);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 48));
  v35 = v9;
  v12 = _mm_cvtsi32_si128(*((_DWORD *)this + 49));
  LODWORD(v36) = _mm_cvtepi32_ps(v11).m128_u32[0];
  LODWORD(v37) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v13 = CComposeTop::FullRender(a3, a2, v10, &v34);
  v4 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x50Cu, 0LL);
    return v4;
  }
LABEL_25:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_28;
  return v4;
}
