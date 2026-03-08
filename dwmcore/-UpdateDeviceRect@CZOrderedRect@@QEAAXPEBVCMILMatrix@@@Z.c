/*
 * XREFs of ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800E82B0
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180086CF0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x18008A6C8 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?Add@CArrayBasedCoverageSet@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@HPEBVCMILMatrix@@@Z @ 0x18012D4B4 (-Add@CArrayBasedCoverageSet@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UN.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800C2530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ceilf_0 @ 0x1801176EC (ceilf_0.c)
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 */

void __fastcall CZOrderedRect::UpdateDeviceRect(CZOrderedRect *this, const struct CMILMatrix *a2)
{
  struct MilRectF *v4; // rdx
  float v5; // xmm8_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm1_4

  v4 = (CZOrderedRect *)((char *)this + 20);
  if ( a2 )
  {
    CMILMatrix::Transform2DBoundsHelper<0>(a2, v4, (float *)this);
    v5 = *((float *)this + 1);
    v6 = *((float *)this + 2);
    v7 = *((float *)this + 3);
  }
  else
  {
    v5 = *((float *)this + 6);
    v6 = *((float *)this + 7);
    v7 = *((float *)this + 8);
    *(_DWORD *)this = *(_DWORD *)v4;
  }
  v8 = *(float *)this;
  if ( COERCE_FLOAT(*(_DWORD *)this & _xmm) < 8388608.0 )
    v8 = (float)(int)ceilf_0(*(float *)this);
  *(float *)this = v8;
  if ( COERCE_FLOAT(LODWORD(v5) & _xmm) < 8388608.0 )
    v5 = (float)(int)ceilf_0(v5);
  *((float *)this + 1) = v5;
  if ( COERCE_FLOAT(LODWORD(v6) & _xmm) < 8388608.0 )
    v6 = (float)(int)floorf_0(v6);
  *((float *)this + 2) = v6;
  if ( COERCE_FLOAT(LODWORD(v7) & _xmm) < 8388608.0 )
    v7 = (float)(int)floorf_0(v7);
  *((float *)this + 3) = v7;
}
