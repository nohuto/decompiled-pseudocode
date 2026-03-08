/*
 * XREFs of ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1800B6EBC
 * Callers:
 *     ?GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B669C (-GetCurrentSurface@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAVIBitmapResource@@PEAV-$TMilR.c)
 *     ?GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@@Z @ 0x1800B6860 (-GetD2DBrush@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@PEAPEAUID2D1Brush@@.c)
 *     ?GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGradientBrush@@@Z @ 0x180249F54 (-GetCurrentD2DRadialGradientBrush@CGradientBrush@@IEAAJPEAVCDrawingContext@@PEAPEAUID2D1RadialGr.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x1800B6FEC (-ToD2D1ExtendMode@ExtendMode@@YA-AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x1800B7008 (-Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GRADIENT.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CGradientBrush::Generate(
        CGradientBrush *this,
        struct CD3DDevice *a2,
        const struct CGradientSource::RetrievalParams *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdx
  gsl::details *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  char v14; // r9
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  _QWORD v19[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 24);
  gsl::details::extent_type<-1>::extent_type<-1>(
    (gsl::details *)v19,
    0xCCCCCCCCCCCCCCCDuLL * ((*((_QWORD *)this + 25) - v3) >> 2));
  v19[1] = v3;
  if ( v19[0] == -1LL || !v3 && v19[0] )
  {
    gsl::details::terminate(v7);
    JUMPOUT(0x1800B6FE5LL);
  }
  v10 = *((_DWORD *)this + 40) == 4;
  *((_BYTE *)this + 225) = 1;
  v11 = *((_QWORD *)this + 24);
  LOBYTE(v9) = v10;
  v12 = *((_QWORD *)this + 25);
  if ( v11 != v12 )
  {
    while ( *(float *)(v11 + 16) >= 1.0 )
    {
      v11 += 20LL;
      if ( v11 == v12 )
        goto LABEL_6;
    }
    *((_BYTE *)this + 225) = 0;
  }
LABEL_6:
  LOBYTE(v12) = *((_BYTE *)this + 152);
  v13 = ExtendMode::ToD2D1ExtendMode(v12, v6, v8, v9);
  v15 = CGradientSource::Generate(
          (CGradientBrush *)((char *)this + 88),
          a2,
          v14,
          *((_BYTE *)this + 225),
          *((_BYTE *)this + 226),
          v13);
  v17 = v15;
  if ( v15 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x182u, 0LL);
  else
    *((_BYTE *)this + 224) = 1;
  return v17;
}
