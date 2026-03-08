/*
 * XREFs of ?GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x180040610
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180089410 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMergedDirtyRect::GetRects(CMergedDirtyRect *this, unsigned int *a2, const struct MilRectF **a3)
{
  if ( *((_QWORD *)this + 11) != GetCurrentFrameId() )
    (*(void (__fastcall **)(CMergedDirtyRect *))(*(_QWORD *)this + 8LL))(this);
  return CMergedRectBase<4>::GetRects(this, a2, a3);
}
