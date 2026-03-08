/*
 * XREFs of ?AreaUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBAMXZ @ 0x180041F7C
 * Callers:
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800406F8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800415D0 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x180041868 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z @ 0x1800B077C (-ShouldRealizeCpuClipOnGpu@CCpuClippingData@@SA_NPEBVCShape@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

double __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::AreaUnsafe(__int64 a1)
{
  double result; // xmm0_8
  float v2; // xmm1_4

  *(_QWORD *)&result = *(unsigned int *)(a1 + 8);
  if ( *(float *)&result <= *(float *)a1 )
    return 0.0;
  v2 = *(float *)(a1 + 12);
  if ( v2 <= *(float *)(a1 + 4) )
    return 0.0;
  *(float *)&result = (float)(*(float *)&result - *(float *)a1) * (float)(v2 - *(float *)(a1 + 4));
  return result;
}
