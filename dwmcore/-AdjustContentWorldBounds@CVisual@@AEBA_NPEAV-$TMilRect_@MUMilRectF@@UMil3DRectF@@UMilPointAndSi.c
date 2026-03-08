/*
 * XREFs of ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004AE40
 * Callers:
 *     ?CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004ACA0 (-CollectAdditionalDirtyRects@CVisual@@MEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@AEBVCMILMatrix@@PE.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18004AF78 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 *     ?Inflate@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z @ 0x18007598C (-Inflate@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAAXMM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::AdjustContentWorldBounds(CVisual *this, __int64 a2)
{
  char v4; // bl
  float v5; // xmm6_4

  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 0;
  v4 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)this + 336LL))(this) )
    v5 = FLOAT_0_5;
  else
    v5 = 0.0;
  if ( CVisual::HasPixelSnappedContent(this) )
    v5 = v5 + 0.5;
  if ( v5 != 0.0 )
    TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(a2);
  return v4;
}
