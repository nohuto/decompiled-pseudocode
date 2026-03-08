/*
 * XREFs of ?GetBVIKeyForCurrentWalk@COcclusionContext@@QEBAAEBVCBackdropVisualImageKey@@XZ @ 0x180086880
 * Callers:
 *     ?GetOptimizedRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@PEAVCRegion@@PEBVCMILMatrix@@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x180086070 (-GetOptimizedRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801CABDC (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     <none>
 */

const struct CBackdropVisualImageKey *__fastcall COcclusionContext::GetBVIKeyForCurrentWalk(COcclusionContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 177);
  if ( v1 )
    return (const struct CBackdropVisualImageKey *)(v1 + 1888);
  else
    return (const struct CBackdropVisualImageKey *)&CBackdropVisualImageKey::sc_NoBVIKey;
}
