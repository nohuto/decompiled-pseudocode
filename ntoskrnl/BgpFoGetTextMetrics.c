/*
 * XREFs of BgpFoGetTextMetrics @ 0x140382160
 * Callers:
 *     BgpConsoleSetPointSize @ 0x1403813EC (BgpConsoleSetPointSize.c)
 *     BgpTxtDisplayCharacter @ 0x140381538 (BgpTxtDisplayCharacter.c)
 *     BgpTxtCreateRegion @ 0x140AEB2AC (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140AEF7A0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140B997C4 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140382190 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
