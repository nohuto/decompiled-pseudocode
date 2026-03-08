/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00508E4
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C001DFD0 (GreUpdateSpriteClipRgn.c)
 *     GreUpdateSpriteVisRgn @ 0x1C007ED24 (GreUpdateSpriteVisRgn.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010D9A8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 *     ?GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z @ 0x1C013015C (-GreGetRandomRgn_Unpatched@@YAHPEAUHDC__@@PEAUHRGN__@@H@Z.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0271694 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     W32kCddClipRegion @ 0x1C0272C60 (W32kCddClipRegion.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027CAE0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     GreSetClientRgn @ 0x1C028ABF0 (GreSetClientRgn.c)
 *     GreScaleRgn @ 0x1C02AA6D4 (GreScaleRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02AA790 (GreScaleRgnToDestLogPixel.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C02AABB4 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C02AB5A0 (NtGdiFillRgn.c)
 *     NtGdiFrameRgn @ 0x1C02ABB30 (NtGdiFrameRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
