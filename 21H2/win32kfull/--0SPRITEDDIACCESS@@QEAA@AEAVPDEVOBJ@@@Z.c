/*
 * XREFs of ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0085EEC
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0049AEC (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00857A4 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0085DF4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?vSpDeleteSprite@@YAXPEAVSPRITE@@@Z @ 0x1C00B56F4 (-vSpDeleteSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z @ 0x1C00B594C (-pSpCreateSprite@@YAPEAVSPRITE@@PEAUHDEV__@@PEAU_RECTL@@PEAUHWND__@@PEAU_POINTL@@@Z.c)
 *     ?pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z @ 0x1C00B604C (-pSpHintSpriteShape@@YAHPEAVSPRITE@@PEAUHBITMAP__@@H@Z.c)
 *     ?vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z @ 0x1C00B62C0 (-vSpZorderSprite@@YAXPEAUHDEV__@@PEAVSPRITE@@1@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00FA780 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?vSpHideSprites@@YAXPEAUHDEV__@@H@Z @ 0x1C0119AE4 (-vSpHideSprites@@YAXPEAUHDEV__@@H@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027C278 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C027C8A0 (-GdiSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027E220 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027ED08 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x1C027EEA4 (-bSpTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     ?pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z @ 0x1C027F62C (-pSpConvertSpriteToMeta@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAVSPRITE@@@Z.c)
 *     ?pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z @ 0x1C027FA4C (-pSpTransferMetaSprite@@YAPEAU_METASPRITE@@PEAUHDEV__@@0PEAU1@@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C028099C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281544 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0282B00 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C0086018 (-vSpDirectDriverAccess@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0086A34 (-bCurrentTlDriverCall@@YAHAEAVPDEVOBJ@@@Z.c)
 */

SPRITEDDIACCESS *__fastcall SPRITEDDIACCESS::SPRITEDDIACCESS(SPRITEDDIACCESS *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rdi
  __int64 *v7; // rax
  int v8; // eax
  __int64 v10; // rax

  *(_QWORD *)this = *(_QWORD *)a2 + 80LL;
  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  *((_DWORD *)this + 3) = 0;
  if ( v4 && PDEVOBJ::bAllowShareAccess(a2) && (*(_DWORD *)(v4 + 104) || *(_DWORD *)(v4 + 108)) )
  {
    v6 = 0LL;
    v7 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v7 )
      v6 = *v7;
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 280) + 32LL) == *(_QWORD *)this )
      v8 = **(_DWORD **)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    else
      v8 = 0;
    *((_DWORD *)this + 2) = v8;
    *((_DWORD *)this + 3) = bCurrentTlDriverCall(a2);
  }
  else
  {
    *((_DWORD *)this + 2) = *(_DWORD *)(*(_QWORD *)this + 88LL);
  }
  if ( *((_DWORD *)this + 3) == 1 )
  {
    v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280);
    *((_OWORD *)this + 1) = *(_OWORD *)v10;
    *((_OWORD *)this + 2) = *(_OWORD *)(v10 + 16);
    *((_OWORD *)this + 3) = *(_OWORD *)(v10 + 32);
    *((_OWORD *)this + 4) = *(_OWORD *)(v10 + 48);
    *((_OWORD *)this + 5) = *(_OWORD *)(v10 + 64);
    *((_OWORD *)this + 6) = *(_OWORD *)(v10 + 80);
    *((_OWORD *)this + 7) = *(_OWORD *)(v10 + 96);
    *((_OWORD *)this + 8) = *(_OWORD *)(v10 + 112);
    *((_OWORD *)this + 9) = *(_OWORD *)(v10 + 128);
    *((_OWORD *)this + 10) = *(_OWORD *)(v10 + 144);
    *((_QWORD *)this + 22) = *(_QWORD *)(v10 + 160);
  }
  if ( !*((_DWORD *)this + 2) )
    vSpDirectDriverAccess(*(struct _SPRITESTATE **)this, 1);
  return this;
}
