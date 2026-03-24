/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02ADF94
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C01011E0 (NtGdiSelectBitmap.c)
 *     GreRealizePalette @ 0x1C011BC6C (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B86F0 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
