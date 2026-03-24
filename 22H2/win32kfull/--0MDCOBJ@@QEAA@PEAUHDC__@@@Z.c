/*
 * XREFs of ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AD964
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C0100E90 (NtGdiSelectBitmap.c)
 *     GreRealizePalette @ 0x1C011B8EC (GreRealizePalette.c)
 *     NtGdiResizePalette @ 0x1C02B7AC0 (NtGdiResizePalette.c)
 * Callees:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 */

MDCOBJ *__fastcall MDCOBJ::MDCOBJ(MDCOBJ *this, HDC a2)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  XDCOBJ::vLock(this, a2);
  return this;
}
