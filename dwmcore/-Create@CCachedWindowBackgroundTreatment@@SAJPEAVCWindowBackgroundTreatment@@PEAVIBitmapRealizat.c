/*
 * XREFs of ?Create@CCachedWindowBackgroundTreatment@@SAJPEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@PEAPEAV1@@Z @ 0x18000B7D0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18000A894 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEBAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 * Callees:
 *     ?IsInfinite@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18000B790 (-IsInfinite@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ??4?$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBackgroundTreatment@@@Z @ 0x18000B8E8 (--4-$ComPtr@VCCachedWindowBackgroundTreatment@@@WRL@Microsoft@@QEAAAEAV012@PEAVCCachedWindowBack.c)
 *     ??0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18000B940 (--0CCachedWindowBackgroundTreatment@@AEAA@PEAVCWindowBackgroundTreatment@@PEAVIBitmapRealization.c)
 *     ??$_Emplace_reallocate@AEBQEAVCCachedWindowBackgroundTreatment@@@?$vector@PEAVCCachedWindowBackgroundTreatment@@V?$allocator@PEAVCCachedWindowBackgroundTreatment@@@std@@@std@@QEAAPEAPEAVCCachedWindowBackgroundTreatment@@QEAPEAV2@AEBQEAV2@@Z @ 0x18001CD30 (--$_Emplace_reallocate@AEBQEAVCCachedWindowBackgroundTreatment@@@-$vector@PEAVCCachedWindowBackg.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCachedWindowBackgroundTreatment::Create(
        __int64 a1,
        __int64 a2,
        int a3,
        float *a4,
        void *a5,
        _QWORD *a6)
{
  unsigned int v6; // esi
  int v9; // ebp
  float v11; // xmm0_4
  unsigned int v12; // ecx
  unsigned int v13; // eax
  void *v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  v19 = 0LL;
  v9 = a2;
  if ( !a2 )
    goto LABEL_8;
  v11 = a4[5];
  v12 = (v11 <= a4[4]) + 1;
  if ( a4[2] > *a4 )
    v12 = v11 <= a4[4];
  v13 = v12 + 1;
  if ( a4[3] > a4[1] )
    v13 = v12;
  if ( v13 > 1
    || TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite(a4) )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, 0x1C2u, 0LL);
  }
  else
  {
LABEL_8:
    v14 = DefaultHeap::Alloc(0x90uLL);
    if ( v14 )
      v14 = (void *)CCachedWindowBackgroundTreatment::CCachedWindowBackgroundTreatment(
                      (_DWORD)v14,
                      a1,
                      v9,
                      a3,
                      (__int64)a4,
                      (__int64)a5);
    Microsoft::WRL::ComPtr<CCachedWindowBackgroundTreatment>::operator=(&v19, v14);
    v16 = v19;
    if ( v19 )
    {
      if ( a1 )
      {
        v17 = *(_QWORD **)(a1 + 336);
        if ( v17 == *(_QWORD **)(a1 + 344) )
        {
          std::vector<CCachedWindowBackgroundTreatment *>::_Emplace_reallocate<CCachedWindowBackgroundTreatment * const &>(
            a1 + 328,
            v17,
            &v19);
        }
        else
        {
          *v17 = v19;
          *(_QWORD *)(a1 + 336) += 8LL;
        }
      }
      *a6 = v16;
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024882, 0x1CAu, 0LL);
    }
  }
  return v6;
}
