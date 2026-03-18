/*
 * XREFs of ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18004B148
 * Callers:
 *     ?AdjustContentWorldBounds@CVisual@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004B010 (-AdjustContentWorldBounds@CVisual@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 * Callees:
 *     ?GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z @ 0x18004B174 (-GetContentAsBrushNoRef@CVisual@@QEBA_NPEAPEAVCBrush@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::HasPixelSnappedContent(CVisual *this)
{
  char v1; // bl
  struct CBrush *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  if ( CVisual::GetContentAsBrushNoRef(this, &v3) )
    return (*(unsigned __int8 (__fastcall **)(struct CBrush *))(*(_QWORD *)v3 + 304LL))(v3) != 0;
  return v1;
}
