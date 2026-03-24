/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C016A2D0
 * Callers:
 *     GreGetTextFaceW @ 0x1C0097590 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C009B6E0 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009B9F8 (GreGetOutlineTextMetricsInternalW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 40LL) >> 6) & 1;
}
