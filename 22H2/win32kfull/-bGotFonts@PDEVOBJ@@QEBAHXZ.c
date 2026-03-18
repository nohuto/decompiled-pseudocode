/*
 * XREFs of ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x1C013E7C0
 * Callers:
 *     GreGetTextFaceW @ 0x1C0110B2C (GreGetTextFaceW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bGotFonts(PDEVOBJ *this)
{
  return (*(_DWORD *)(*(_QWORD *)this + 40LL) >> 6) & 1;
}
