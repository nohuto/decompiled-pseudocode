/*
 * XREFs of ?bOffsetSubtract@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268FB8
 * Callers:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z @ 0x1C00825B0 (-vInitStrDDAClip@@YAXPEAU_RECTL@@0000@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C012859C (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ??ZERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C0268204 (--ZERECTL@@QEAAXAEBU_POINTL@@@Z.c)
 *     ?vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ @ 0x1C0269698 (-vSaveAccumBoundsAndDisableSpriteUpdates@DWMSCREENREADMODIFYWRITEASSIST@@QEAAXXZ.c)
 *     DxgkEngAccumD3DPresentBounds @ 0x1C0271C50 (DxgkEngAccumD3DPresentBounds.c)
 *     GreLockDisplayArea @ 0x1C02862E0 (GreLockDisplayArea.c)
 *     GreUnlockDisplayArea @ 0x1C02864D8 (GreUnlockDisplayArea.c)
 *     ?bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ @ 0x1C02AAF94 (-bReadFromAccumulatedBounds@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHXZ.c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C02E0018 (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 */

__int64 __fastcall ERECTL::bOffsetSubtract(ERECTL *this, const struct _POINTL *a2, int a3)
{
  const struct _POINTL *v3; // r10
  ERECTL *v4; // r9
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r11
  LONG plResult; // [rsp+40h] [rbp+18h] BYREF

  v3 = a2;
  v4 = this;
  if ( a3
    && (LongLongToLong(*(int *)this - (__int64)a2->x, &plResult) < 0
     || LongLongToLong(*(int *)(v5 + 8) - v6, &plResult) < 0
     || LongLongToLong(*(int *)(v7 + 4) - (__int64)*(int *)(v8 + 4), &plResult) < 0
     || LongLongToLong(*(int *)(v9 + 12) - v10, &plResult) < 0) )
  {
    return 0LL;
  }
  *(_DWORD *)v4 -= v3->x;
  *((_DWORD *)v4 + 2) -= v3->x;
  *((_DWORD *)v4 + 1) -= v3->y;
  *((_DWORD *)v4 + 3) -= v3->y;
  return 1LL;
}
