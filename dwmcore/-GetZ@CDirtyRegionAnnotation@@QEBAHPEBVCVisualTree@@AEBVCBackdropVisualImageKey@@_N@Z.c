/*
 * XREFs of ?GetZ@CDirtyRegionAnnotation@@QEBAHPEBVCVisualTree@@AEBVCBackdropVisualImageKey@@_N@Z @ 0x1801EE758
 * Callers:
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801CABDC (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@@@Z @ 0x1800E8D3C (-GetOcclusionInfo@CVisual@@QEBAPEAVCOcclusionInfo@@PEBVCVisualTree@@AEBVCBackdropVisualImageKey@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirtyRegionAnnotation::GetZ(
        CVisual **this,
        const struct CVisualTree *a2,
        const struct CBackdropVisualImageKey *a3)
{
  unsigned int *OcclusionInfo; // rcx
  __int64 result; // rax

  OcclusionInfo = (unsigned int *)CVisual::GetOcclusionInfo(this[2], a2, a3);
  result = 0LL;
  if ( OcclusionInfo )
  {
    if ( *((_BYTE *)this + 40) )
      return OcclusionInfo[7];
    else
      return (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)OcclusionInfo + 16LL))(OcclusionInfo);
  }
  return result;
}
