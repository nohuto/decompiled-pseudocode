/*
 * XREFs of ?DrawScrollArrow@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0113328
 * Callers:
 *     DrawFrameControl @ 0x1C0116938 (DrawFrameControl.c)
 * Callees:
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0113BC4 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 */

__int64 __fastcall DrawScrollArrow(HDC a1, struct tagRECT *a2, char a3)
{
  unsigned __int16 v3; // r9

  v3 = (a3 & 2) != 0 ? 52 : 54;
  if ( (a3 & 1) == 0 )
    v3 = (a3 & 2) != 0 ? 51 : 53;
  return DrawIt(a1, a2, a3, v3);
}
