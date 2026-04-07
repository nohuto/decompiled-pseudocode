/*
 * XREFs of ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013BA0
 * Callers:
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001760 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180006A38 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180012F80 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800147CC (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x18001A7D0 (-UpdateOffset@CButton@@MEAAJXZ.c)
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180022648 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800234D0 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180023AD0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z @ 0x18003BED4 (-SetGlowImage@CAtlasButton@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D40C (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z @ 0x18009B240 (-Initialize@CAnimatedGlassSheet@@MEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedImage::SetDirtyFlags(CAtlasedImage *this, int a2, unsigned int a3)
{
  __int64 v3; // rcx

  *((_DWORD *)this + 24) |= a2;
  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL))(v3, a3);
}
