/*
 * XREFs of ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0283C44
 * Callers:
 *     GreClientRgnUpdated @ 0x1C00496B4 (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02837E0 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C0283C98 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C0283EE0 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C02846BC (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

_BOOL8 __fastcall EWNDOBJ::vSetClip(__int64 a1, struct REGION *a2, _OWORD *a3)
{
  _BOOL8 result; // rax

  XCLIPOBJ::vSetup((XCLIPOBJ *)a1, a2, (struct ERECTL *)&grclMax, 0);
  *(_OWORD *)(a1 + 32) = *a3;
  result = ERECTL::bEmpty((ERECTL *)(a1 + 4));
  if ( result )
    *(_BYTE *)(a1 + 20) = 1;
  return result;
}
