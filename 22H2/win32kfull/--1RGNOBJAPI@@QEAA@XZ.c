/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38
 * Callers:
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001D9F0 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreUpdateSpriteVisRgn @ 0x1C005AA10 (GreUpdateSpriteVisRgn.c)
 *     GreUpdateSpriteClipRgn @ 0x1C0077DA8 (GreUpdateSpriteClipRgn.c)
 *     GreGetRandomRgn @ 0x1C0131360 (GreGetRandomRgn.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C026EBF0 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0270240 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027A1A0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02873C0 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C0288350 (GreSetClientRgn.c)
 *     GreScaleRgn @ 0x1C02A8034 (GreScaleRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02A8100 (GreScaleRgnToDestLogPixel.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02A8594 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02A8FD0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02A9590 (NtGdiFrameRgn.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 8);
}
