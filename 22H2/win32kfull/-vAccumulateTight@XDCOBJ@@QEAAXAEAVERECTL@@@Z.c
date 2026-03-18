/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C02C0950
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     ?vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C02A8A60 (-vRestoreAccumBoundsAndEnableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 * Callees:
 *     ??_5ERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C001E740 (--_5ERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ERECTL *a2)
{
  __int64 v2; // rcx
  _DWORD *v3; // rdx
  _DWORD *v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 36) & 0x40) != 0 )
  {
    if ( ERECTL::bEmpty((ERECTL *)(v2 + 1080)) )
      *(_OWORD *)v4 = *(_OWORD *)v3;
    else
      ERECTL::operator|=(v4, v3);
  }
}
