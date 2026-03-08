/*
 * XREFs of ?CalcOcclusion@CVisualTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C1D30
 * Callers:
 *     ?CalcOcclusion@CDesktopTree@@UEBAJAEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@PEAVCOcclusionContext@@M@Z @ 0x1800C1CD0 (-CalcOcclusion@CDesktopTree@@UEBAJAEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 * Callees:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086CF0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisualTree::CalcOcclusion(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // r8
  COcclusionContext *v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF

  CurrentFrameId = GetCurrentFrameId();
  if ( *(_QWORD *)(v5 + 112) == CurrentFrameId )
  {
    v13 = 0uLL;
    v9 = COcclusionContext::Compute(v8, v5, v7, a4, &v13);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x12Au, 0LL);
  }
  else
  {
    v11 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003292412, 0x12Eu, 0LL);
  }
  return v11;
}
