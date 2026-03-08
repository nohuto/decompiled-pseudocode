/*
 * XREFs of ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180021F1C
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x18008B8BC (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x18001C268 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?HasNewContent@CComposeTop@@QEBA_NXZ @ 0x180021FE0 (-HasNewContent@CComposeTop@@QEBA_NXZ.c)
 *     ?FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002201C (-FullRender@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180073854 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800E83F4 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801E46D4 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?ReadTexture@CDrawingContext@@QEBAXXZ @ 0x1801E48FC (-ReadTexture@CDrawingContext@@QEBAXXZ.c)
 *     ?NewContentRendered@CComposeTop@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180256F38 (-NewContentRendered@CComposeTop@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802570F0 (-Render@CComposeTop@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3.c)
 */

__int64 __fastcall CLegacyRenderTarget::RenderComposeTop(
        CLegacyRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3,
        char a4)
{
  unsigned int v4; // edi
  char v5; // r15
  int v10; // eax
  unsigned int v11; // ecx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // eax
  float v15; // xmm0_4
  int v16; // eax
  unsigned int v17; // ecx
  char *v18; // r8
  int v19; // eax
  unsigned int v20; // ecx
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm4_4
  float v24; // xmm1_4
  __int64 v25; // r8
  CLegacyRenderTarget *v26; // rbx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  int v31; // eax
  unsigned int v32; // ecx
  _OWORD v33[4]; // [rsp+30h] [rbp-49h] BYREF
  int v34; // [rsp+70h] [rbp-9h]
  __int128 v35; // [rsp+80h] [rbp+7h] BYREF
  __int128 v36; // [rsp+90h] [rbp+17h] BYREF

  v4 = 0;
  v5 = 0;
  if ( a4 )
  {
    v10 = CComposeTop::FullRender(
            a3,
            a2,
            (char *)this + (*((_BYTE *)this + 11225) != 0 ? 18352LL : 18216LL),
            (char *)this + 18172);
    v4 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x54Du, 0LL);
      return v4;
    }
  }
  else
  {
    if ( !CComposeTop::HasNewContent(a3) )
      goto LABEL_3;
    if ( *((_BYTE *)this + 11225) )
    {
      v12 = *((_DWORD *)this + 4551);
      v13 = 0;
      v14 = *((_DWORD *)this + 4552);
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = __PAIR64__(v14, v12);
    }
    else
    {
      v35 = *(_OWORD *)((char *)this + 18188);
      v12 = DWORD2(v35);
      v13 = v35;
    }
    v5 = 1;
    *(float *)&v36 = (float)v13;
    *((float *)&v36 + 1) = (float)SDWORD1(v35);
    v15 = (float)SHIDWORD(v35);
    *((float *)&v36 + 2) = (float)v12;
    v35 = 0LL;
    *((float *)&v36 + 3) = v15;
    v16 = CDrawingContext::PushGpuClipRectInternal(a2, 0LL, &v36, 1LL, 0);
    v4 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x55Cu, 0LL);
      return v4;
    }
    v18 = (char *)this + 18216;
    if ( *((_BYTE *)this + 11225) )
      v18 = (char *)this + 18352;
    v19 = CComposeTop::Render(a3, a2, v18, &v35);
    v4 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x566u, 0LL);
      goto LABEL_35;
    }
    v21 = *(float *)&v35;
    if ( *(float *)&v36 > *(float *)&v35 )
    {
      LODWORD(v35) = v36;
      v21 = *(float *)&v36;
    }
    v22 = *((float *)&v35 + 1);
    if ( *((float *)&v36 + 1) > *((float *)&v35 + 1) )
    {
      DWORD1(v35) = DWORD1(v36);
      v22 = *((float *)&v36 + 1);
    }
    v23 = *((float *)&v35 + 2);
    if ( *((float *)&v35 + 2) > *((float *)&v36 + 2) )
    {
      DWORD2(v35) = DWORD2(v36);
      v23 = *((float *)&v36 + 2);
    }
    v24 = *((float *)&v35 + 3);
    if ( *((float *)&v35 + 3) > *((float *)&v36 + 3) )
    {
      HIDWORD(v35) = HIDWORD(v36);
      v24 = *((float *)&v36 + 3);
    }
    if ( v23 <= v21 || v24 <= v22 )
      v35 = 0uLL;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v35) )
    {
      LOBYTE(v25) = 1;
      CLegacyRenderTarget::NotifyRenderedRect(this, &v35, v25);
      v26 = *((_BYTE *)this + 11225)
          ? (CLegacyRenderTarget *)((char *)this + 18352)
          : (CLegacyRenderTarget *)((char *)this + 18216);
      v27 = *(_OWORD *)v26;
      v28 = *((_OWORD *)v26 + 1);
      v34 = *((_DWORD *)v26 + 16);
      v33[0] = v27;
      v29 = *((_OWORD *)v26 + 2);
      v33[1] = v28;
      v30 = *((_OWORD *)v26 + 3);
      v33[2] = v29;
      v33[3] = v30;
      CMILMatrix::Invert((CMILMatrix *)v33);
      v36 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v33, (struct MilRectF *)&v35);
      v31 = CComposeTop::NewContentRendered(a3);
      v4 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x578u, 0LL);
LABEL_35:
        CDrawingContext::PopGpuClipRectInternal(a2, 0);
        return v4;
      }
    }
  }
LABEL_3:
  if ( g_LockAndReadTarget )
    CDrawingContext::ReadTexture(a2);
  if ( v5 )
    goto LABEL_35;
  return v4;
}
