/*
 * XREFs of BgpFoGetTextMetrics @ 0x14039C08C
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1403AC6A8 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x1403BC484 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x1409F30D4 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1409F7784 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140A96D5C (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14039C0BC (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
