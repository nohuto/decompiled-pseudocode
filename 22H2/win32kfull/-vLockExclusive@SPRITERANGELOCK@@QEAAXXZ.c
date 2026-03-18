/*
 * XREFs of ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B7D4
 * Callers:
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C001B69C (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00F72B4 (GreDeleteSpriteOverlapPresent.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C0136414 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     DxgkEngAcquireStableSprite @ 0x1C0159ED0 (DxgkEngAcquireStableSprite.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C026EBF0 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027A3C8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027AC24 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027DAB0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreLockDisplayArea @ 0x1C02839D0 (GreLockDisplayArea.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vLockExclusive(SPRITERANGELOCK *this)
{
  GreAcquireSemaphore(*(_QWORD *)this);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 8LL);
}
