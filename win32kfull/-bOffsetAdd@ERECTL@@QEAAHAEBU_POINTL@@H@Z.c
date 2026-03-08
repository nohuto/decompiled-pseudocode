/*
 * XREFs of ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0268F1C
 * Callers:
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C004DAE8 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005C120 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008C7B8 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C012ACE4 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ??YERECTL@@QEAAXAEBU_POINTL@@@Z @ 0x1C02681EC (--YERECTL@@QEAAXAEBU_POINTL@@@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0271694 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0271CF0 (DxgkEngBltViaGDI.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C0282B88 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C028848C (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEBU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C028A098 (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 *     GreSetClientRgn @ 0x1C028ABF0 (GreSetClientRgn.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C02913F8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z @ 0x1C0291AAC (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@AEAVSURFMEM@@1KK@Z.c)
 *     EngPlgBlt @ 0x1C0292140 (EngPlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 *     NtGdiExtFloodFill @ 0x1C02D6200 (NtGdiExtFloodFill.c)
 *     NtGdiSetPixel @ 0x1C02D8C50 (NtGdiSetPixel.c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C02E0018 (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 * Callees:
 *     LongLongToLong @ 0x1C0013C0C (LongLongToLong.c)
 */

__int64 __fastcall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
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
    && (LongLongToLong(a2->x + (__int64)*(int *)this, &plResult) < 0
     || LongLongToLong(v6 + *(int *)(v5 + 8), &plResult) < 0
     || LongLongToLong(*(int *)(v8 + 4) + (__int64)*(int *)(v7 + 4), &plResult) < 0
     || LongLongToLong(v10 + *(int *)(v9 + 12), &plResult) < 0) )
  {
    return 0LL;
  }
  *(_DWORD *)v4 += v3->x;
  *((_DWORD *)v4 + 2) += v3->x;
  *((_DWORD *)v4 + 1) += v3->y;
  *((_DWORD *)v4 + 3) += v3->y;
  return 1LL;
}
