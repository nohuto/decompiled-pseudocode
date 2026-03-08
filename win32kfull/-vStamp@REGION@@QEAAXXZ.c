/*
 * XREFs of ?vStamp@REGION@@QEAAXXZ @ 0x1C010DE80
 * Callers:
 *     bSpEnableSprites @ 0x1C0018340 (bSpEnableSprites.c)
 *     GreClientRgnUpdated @ 0x1C005464C (GreClientRgnUpdated.c)
 *     ?vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010D9A8 (-vSpComputeNoPresentRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C010DA60 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C010DDB4 (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028A14C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C028A3A0 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C028ABF0 (GreSetClientRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall REGION::vStamp(REGION *this)
{
  *((_DWORD *)this + 18) = _InterlockedIncrement((volatile signed __int32 *)Gre::Base::Globals(this) + 1596);
}
