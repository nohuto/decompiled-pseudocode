/*
 * XREFs of ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B077C
 * Callers:
 *     ?PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180091F48 (-PushClipRectForCurrentNode@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180041F7C (-AreaUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x180045F98 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004C70C (-IsInfinite@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x1800B25B0 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CCpuClippingData::ShouldRealizeCpuClipOnGpu(const struct CShape *a1, const struct CMILMatrix *a2)
{
  __int64 v4; // rax
  double v5; // xmm0_8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  if ( !CShape::IsAxisAlignedRectangle(a1) )
    return 0;
  if ( !CMILMatrix::Is2DAxisAlignedPreserving(a2) )
    return 0;
  v4 = *(_QWORD *)a1;
  v7 = 0LL;
  if ( (*(int (__fastcall **)(const struct CShape *, __int128 *, const struct CMILMatrix *))(v4 + 48))(a1, &v7, a2) < 0
    || TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v7) )
  {
    return 0;
  }
  v5 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe((__int64)&v7);
  return *(float *)&v5 >= (float)CCommonRegistryData::CpuClipAreaThreshold;
}
