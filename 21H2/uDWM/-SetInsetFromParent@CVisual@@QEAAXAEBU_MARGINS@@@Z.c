/*
 * XREFs of ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180028148
 * Callers:
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005D88 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18001A0C4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F780 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x1800202F0 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180021BC0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJ_N@Z @ 0x180022C80 (-Initialize@CTopLevelWindow@@MEAAJ_N@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18002527C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18002F414 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::SetInsetFromParent(struct _MARGINS *this, const struct _MARGINS *a2)
{
  __int64 v2; // rax

  if ( this[8].cyTopHeight != a2->cyTopHeight
    || this[8].cxLeftWidth != a2->cxLeftWidth
    || this[8].cxRightWidth != a2->cxRightWidth
    || this[8].cyBottomHeight != a2->cyBottomHeight )
  {
    v2 = *(_QWORD *)&this->cxLeftWidth;
    this[8] = *a2;
    (*(void (__fastcall **)(struct _MARGINS *, __int64))(v2 + 24))(this, 2LL);
  }
}
