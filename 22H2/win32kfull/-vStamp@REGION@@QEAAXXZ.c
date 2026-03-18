/*
 * XREFs of ?vStamp@REGION@@QEAAXXZ @ 0x1C001EA38
 * Callers:
 *     bSpEnableSprites @ 0x1C001BBF0 (bSpEnableSprites.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001D9F0 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C001DAA8 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001E96C (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     GreClientRgnUpdated @ 0x1C00346B4 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02873C0 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028789C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C0287AF0 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C0288350 (GreSetClientRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall REGION::vStamp(REGION *this)
{
  *((_DWORD *)this + 18) = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(this) + 1596);
}
