/*
 * XREFs of ?GetTopCpuClipInScope@CScopedClipStack@@QEBAPEBVCShape@@PEAW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180016C0C
 * Callers:
 *     ?UpdateOnlyCpuClipRealization@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180016B50 (-UpdateOnlyCpuClipRealization@CCpuClippingData@@AEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedCl.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800DB8E4 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x18008F054 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 */

const struct CShape *__fastcall CScopedClipStack::GetTopCpuClipInScope(
        CScopedClipStack *this,
        enum D2D1_ANTIALIAS_MODE *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // r9
  _QWORD *v5; // r8

  if ( !CScopedClipStack::HasCpuClipsInScope(this) )
    return 0LL;
  v5 = (_QWORD *)(v2 + 1872);
  if ( v3 )
    *v3 = *(_DWORD *)(*v5 - 8LL);
  return *(const struct CShape **)(*v5 - 40LL);
}
