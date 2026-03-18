/*
 * XREFs of BgpFoGetTextMetrics @ 0x140384DB0
 * Callers:
 *     BgpConsoleSetPointSize @ 0x14038403C (BgpConsoleSetPointSize.c)
 *     BgpTxtDisplayCharacter @ 0x140384188 (BgpTxtDisplayCharacter.c)
 *     BgpTxtCreateRegion @ 0x140AEF26C (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140AF37A0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140B9D9D8 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140384DE0 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
