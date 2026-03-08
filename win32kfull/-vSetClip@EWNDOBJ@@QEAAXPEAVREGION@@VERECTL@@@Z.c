/*
 * XREFs of ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C028A0F8
 * Callers:
 *     GreClientRgnUpdated @ 0x1C005464C (GreClientRgnUpdated.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0289C70 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C028A14C (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 *     EngCreateWnd @ 0x1C028A3A0 (EngCreateWnd.c)
 *     GreSetClientRgn @ 0x1C028ABF0 (GreSetClientRgn.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C008D3C0 (-bEmpty@ERECTL@@QEBAHXZ.c)
 */

_BOOL8 __fastcall EWNDOBJ::vSetClip(__int64 a1, struct REGION *a2, _OWORD *a3)
{
  _BOOL8 result; // rax

  XCLIPOBJ::vSetup((XCLIPOBJ *)a1, a2, (struct ERECTL *)&unk_1C0329EE0, 0);
  *(_OWORD *)(a1 + 32) = *a3;
  result = ERECTL::bEmpty((ERECTL *)(a1 + 4));
  if ( result )
    *(_BYTE *)(a1 + 20) = 1;
  return result;
}
